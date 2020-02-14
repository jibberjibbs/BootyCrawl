using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CSharpNotes : MonoBehaviour
{

    //Jen Murray
    //Two forward slashes allows for comments, these are not read by the engine
    //The top part of the script is generally where we store the variables.
    //Things like numbers, references to objects or references to other scripts
    //Variables have three parts, the first part is public or private, the second part is 
    //the type of variable and the third part is whatever we decide to name the variable

    //NUMBER VARIABLES
    //There are two common types of number variables: floats and ints
    public float number; //float stands for floating point number which means the number
    //has a decimal point 1.25 is a float
    public int wholenumber; //An int is 1, 2, 3 (Whole numbers) 
    private float myhiddennumber; //a private variable is not visible inside the inspector 

    //BOOLS are true/false statement 
    public bool yesorno; //A bool is a yes or no statement, a binary, think of it like a 
                         //light switch, there is on or off no inbetween 

    //Other common variables 
    public GameObject mygameObject; //We can reference any object in our scene.
    //All items in the hierarchy are considered game objects 
    public CSharpNotes CSN; //We can also reference any script that we have written
    //as long as its public 
    public Rigidbody2D myRB2D; //We use ridgid body on players and enemies and anything we
    //want that is affected by Unity's physics. 
    public BoxCollider2D myboxcollider; //We can also reference colliders of all types
    public CircleCollider2D mycirclecollider;
    //We usually put these references at the top of the script we need to call them in here first
    //if we want to manipulate them later on in the script 

    // Start is called before the first frame update
    void Start()
    {
        //Anything we want to happen when the game starts goes in here.
        //Sometimes we don't have to manually drag and drop items in the inspector
        //Sometimes we want to spawn new items during gameplay. In this case we can use a few
        //simple commands to have the script automatically find objects 

        myRB2D = GetComponent<Rigidbody2D>(); //This will get the rigid body but only if 
        //its on the same object as our script 
        myRB2D = GameObject.FindGameObjectWithTag("Player").GetComponent<Rigidbody2D>();
        //This will find any object in our scene that has the tag "player" and get its rigid body 
        myRB2D = GameObject.FindObjectOfType<Rigidbody2D>();
        //This only works when there is no more than one rigidbody 

        //When the game starts we also might want to look at a few different properties
        //of our game objects, transform, position, rotation and scale
        transform.position = new Vector2(0, 0);
        //Transform position is our location on x and y. Transforms are read by Unity
        //as something called a Vector (Vector 2 or Vector 3) Think of a vector like a bar
        //or line graph. The x is the horizontal axis and the y is the verticle axis
        //The vector 2 above is at the origin positon. another example would be
        transform.position = new Vector2(24, 128); //This would move us 24 units right, and then
        //128 units up. 
        //We can also manipulate scale this way
        transform.localScale = new Vector2(0, 0); //2D
        transform.localScale = new Vector3(0, 0, 0); //3D both these scales would be invisible
        //rotation is a little more complicated we use quaternion and EULER (oiler) 
        transform.rotation = Quaternion.Euler(0, 0, 0);

    }

    // Update is called once per frame
    void Update()
    
        //Inside update funtion we call things that we want to update in real time as we 
        //play the game

        //IF STATEMENTS are very important
        if (yesorno == true)

        {

            //We say yes
            //The player lives 
            }


      if (yesorno == false)
        {

                //We say no
                //The player DIES 
        
    }
        //This is an example of how bools can work. If the bool is true one thing
        //happens. If the Bool is false than something else happens.
        //For the "if" statement to work we need a double = sign, A single equal sign
        //means that the bool IS true or IS false whereas a double equal sign checks to see IF
        //its true or false.

        if(number >= 10)
        {
        //We do something 
        }  

        //We can also use IF statements to control the player 
        if(Input.GetAxis("Horizontal")) > 0) 
        {

        //we move the player
        myRB2D.velocity = new Vector2(25, 0);
}
if(Input.GetAxis("Horizontal") ==0)

    //we want to stop the player
    myRB2D.velocity = new Vector2(0, 0); //This is a zero velocity
//to see all the different rigidbody options we have just start typing myRB2D. 
myRB2D.gravityScale = .5f; //Gives me half gravity.
    myRB2D.simulated = false; //This means the rigid body is no longer effected by the physics engine
    myRB2D.isKinematic = true; //Kinematic rigidbody only moves if the code tells it to
    myRB2D.isKinematic = false; // non kinematic is the same as a dynamic which means it 
    //is affected by the physics engine. 

    //IF ELSE STATEMENTS 
    //If statements get read one after the other which can sometimes cause weird behavior 
    //We can avoid this by using IF ELSE statements. 

      if (yesorno == true)

        {

            //We say yes
            //The player lives
            //if this turns out to be true we won't need the below else statement. 
            }


     else if (yesorno == false)
        {

                //We say no
                //The player DIES 
                //if the above IF STATEMENT is not true, we will read this else statement. 
        
    }

    //Because this code is in the update loop changes can happen quickly and we can 
    //cycle through multiple IF statements faster than we want to. This is why we use ELSE. 

    public void FixedUpdate()

{

    //Regular Update is based on frame rate which means that a newer/better computer will run it faster
    //Older computers will run the code slower. This is not ideal.
    //For the most part, graphical elements can live inside the update look without any issue.
    //The fixed update look is used for physics calculations as its called 
    //on a set interval which means that all computers run the code at the same speed. 

}
