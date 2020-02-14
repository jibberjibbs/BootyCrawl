using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; //This lets you call images which are used in the UI Buttons, toggles 
using UnityEngine.SceneManagement; //This lets you call scenemanager which loads levels
using UnityEngine.Audio; //This calls the audio mixer 


public class CSharpNotes2 : MonoBehaviour
{

    //Jen Murray
    public CSharpNotes2 n2;
    public GameObject GO;
    public Image myimage;
    public Button mybutton;
    public float timer;

    // Start is called before the first frame update
    //AI
    //Move towards (Moves object towards another) Flying follower enemy uses this
    public Vector3 start; //The start location
    public Vector3 finish; //The end location or target
    public float speed; //How fast the mover goes from start to finish 
    //LOOT
    public GameObject money;

    //ARRAY is a collection of GameObjects. Arrays allow us to affect large groups 
    //of objects 

    public GameObject[] alltheenemies; //The straight brackets signify a collection of gameObjects 


    //PLAYER PREFS
    //These are values that will save even after the player leaves the game. This is good
    //for unlockable content or overall progress, character skins  

    public int GreenBirb; //This is not a player pref, just a normal int


    void Start()
    {
        PlayerPrefs.SetInt("GreenBirb", 2) //This will unlock the Green Bird so I would only
            //do this when I am ready to unlock it before this it would be set to 0 or 1 

        if(PlayerPrefs.HasKey("GreenBirb"))
        {
            GreenBirb = PlayerPrefs.GetInt("GreenBirb"); //If I beat the game it will
            //be 2. If I didn't beat the game yet it will be 1 
        }

        if(GreenBirb == 2)
        {
            //I can select the green bird 
        }

        alltheenemies = GameObject.FindGameObjectsWithTag("enemy"); //This grabs all enemies 

        //ENABLED VS SET ACTIVE
        //We enabled and disabled components attached to gameObjects 
        //We set active true or false entire gameObjects

        n2.enabled = true; //Enabled the notes2 script (box collider, scripts, any component)
        GO.SetActive(true); //Enabled the entire gameobjects 
        StartCoroutine(StarPower()); //This line calls the IEnumerator (DO NOT do this in update)
    }

    // Update is called once per frame
    void Update()
    {

        //TIMERS
        //We can create timers using the command Time.deltaTime. This means time that
        //has passed since the last frame (so a constant timer). We can take a float and 
        //add or subtract Time.deltaTime to create a timer that counts up or down 
        timer -= Time.deltaTime; // -= subtracts time from the timer consistently 
        timer += Time.deltaTime; // += adds time to the timer

        if(timer >= 0)
        {

            mybutton.interactable = true; //This allows thwe button to be pressed

        }

        if (timer <0)
        {

            mybutton.interactable = false; //This greys the button out and cannot be pressed 
        }


        Vector3.MoveTowards(start, finish, speed); //This line will move the object
        //The start position is set to the movers position
        //The target position gets set to another gameobject (Usually the player) 
        //The speed is constant 

        //INSTANTIATE is a way to make things appear in our scene, this could be enemies
        //loot, power ups

        GameObject loot = Instantiate(money, transform.position, transform.rotation);
        //The above line makes a new gameobjects by creating money at our current location
        //We say GameObject loot because we are creating a new gameobject in the hierarchy call loot
        //Money is usually a prefab that we can call over and over again this means money
        //Won't be in the hierarchy but inside the game's asset folder 
        Destroy(money, 5f); //This destroys the money if we don't get it fast enough 

        //AUTOPOOLING we are using a plugin called Mob Farm Auto Pooler
        GameObject loot2 = MF_AutoPool.Spawn(money, transform.position, transform.rotation);
        //This is the mobile friendly version
        MF_AutoPool.Despawn(this.gameObject, 5f); //This line would be on the money gameobject
        //put it back into the pool without any left over issues 

        //ARRAY (How to go through your list and affect each object one at a time)
        //FOR LOOP 
        for (int i = 0; i<alltheenemies.Length; i++)
        

        {
            alltheenemies[i].SetActive(true); //We set each enemy active 
        }

        //int i = 0 means we start at the top of the list
        //i < alltheenemies, means as long as the number we are on isn't larger than the list
        //Lets say the list is 10 long, if we are at 0, 0 <10 so we add 1, 1 is less than
        //10  so we add another so on until we get to 10 
        //i ++ we move down the list by one 

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //This statement is used when we want the player to walk into a specific area
        //and trigger something. This could be an animation, enemy, really anything. 
        //An event is triggered when a player passes through a collider that is 
        //marked as a trigger. Either the player of the collider must have a rigid
        //body in order for the hit to register. 

        if(collision.tag == "Player")
        {

            //Then we trigger the event. This will only trigger if the collider has the 
            //player tag so enemies can't trigger this event. 

        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {

        //Unlike a trigger, a collision happens when two colliders bump into each other
        //but do not pass through.

    }

    //CO-ROUTINE Which unit calls IEnumerator 
    //Normal functions in Unity are read top to bottom all at once sometimes we want 
    //to pause before finishing the funciton which is when we use IEnumerator 
    //Think of this as the Star Power in Super Mario. You get the star, the player is invincible
    //For a short time, the sprite and music changes and then it wears off. 


    public IEnumerator StarPower()
    {
        //Gives Mario Star Power 
        //Changes the music 
        //Changes sprite graphics
        //Then we want to wait 
        yield return new WaitForSeconds(5f); //This line makes Unity wait 5 seconds
        //Star Power wears off
        //Change music back
        //Change sprite back 
    }

    //To call an IEnumerator we use the word Co-Routine (see Start loop) 
}