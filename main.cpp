#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: car
//  action 1: the car accelerates
car.accelerate();
//  action 2: the. car brakes
car.brake();
//  action 3: the car stops
car.stop();
 
//  2)
//  Noun: bird
//  action 1: the bird flys
bird.fly();
//  action 2: the bird flaps wigs
bird.flapWings();
//  action 3: the bird lays an egg
bird.layEgg();
 
//  3)
//  Noun: wind
//  action 1: the wind increases
wind.increase();
//  action 2: the wind decreases
wind.decrease();
//  action 3: the wind stops
wind.stop();

//  4)
//  Noun: phone
//  action 1: the phone rings
phone.ring();
//  action 2: the phone sends a notification
phone.sendNotification();
//  action 3: the phone restarts
phone.restart();

//  5)
//  Noun: iceCream
//  action 1: the ice cream freezes
iceCream.freeze();
//  action 2: the ice cream melts
iceCream.melt();
//  action 3: the ice cream drips
iceCream.drip();

//  6)
//  Noun: computer 
//  action 1: the computer starts up
computer.startUp();
//  action 2: the computer computes
computer.compute();
//  action 3: the computer opens a file
computer.openFile();
 
//  7)
//  Noun: light
//  action 1: the light flashes
light.flash();
//  action 2: the light illuminates
light.illuminate();
//  action 3: the light EXPLODES!
light.explode();

//  8)
//  Noun: Galapagos Tortoise
//  action 1: the galapagos Tortoise hides in its shell
galapagosTortoise.hideShell();
//  action 2: the galapagos Tortoise seeks shade
galapagosTortoise.seekShade();
//  action 3: the galapagos Tortoise lays an egg 
galapagosTortoise.layEgg(); 

//  9) cat
//  Noun:
//  action 1: the cat sleeps
cat.sleep();
//  action 2: the cat complains
cat.complain(); 
//  action 3: the cat eats
cat.eat();

//  10) fridge
//  Noun:
//  action 1: the fridge cools
fridge.cool();
//  action 2:  the fridge deforsts
fridge.defrost();
//  action 3: the fridge EXPLODES!
fridge.explode();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
