/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;

    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.

    

};


/*
 1)
 */
 struct LivingRoom
 {
    int numPeople = 5;
    float interiorTemperature = 21.5f;

    struct furniture
    {
        bool isTaken = false;
        int chairNumber = 4;
    };

    void checkAvaiability (int numPeople, furniture);

    furniture loungeSeats;
 };

/*
 2)
 */
 struct Bakery  
 {
    int numOfOvens = 2;
    int amountOfBread = 250;
    int openingTime = 8;
    int closingTIme = 18;

    bool checkOpen (int openingTime, int closingTime);
    void bakeBread (int numOfOvens, int amountOfBread, int ovenNumber);

 };

/*
 3)
 */
 struct PublicBus   //A User Defined Type with random amount of Variables
 {
    int maxAmountofSeats = 50;  //Member Variables of the UDT with relevant data types
    bool seatsLeft = true;

    struct busSeat      //A nested User Defined Type with it's own member variables
    { 
        int seatRow = 1;
        int seatColor = 25;
    };

    busSeat frontRedSeat; //two Member Variables that are User Defined Types
    busSeat rearBlueSeat;

 };

/*
 4)
 */

/*
 5)
 */

/*
 6)
 */

/*
 7)
 */

/*
 8)
 */

/*
 9)
 */

/*
 10)
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
