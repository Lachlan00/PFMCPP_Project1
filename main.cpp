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
//  action 1:
car.accelerate()
//  action 2:
car.brake()
//  action 3:
car.stop()
 
//  2)
//  Noun: bird
//  action 1:
bird.fly()
//  action 2:
bird.flapWings()
//  action 3:
bird.layEgg()
 
//  3)
//  Noun: wind
//  action 1:
wind.increase()
//  action 2:
wind.decrease()
//  action 3:
wind.stop() 

//  4)
//  Noun: phone
//  action 1:
phone.ring()
//  action 2:
phone.sendNotification()
//  action 3:
phone.restart()

//  5)
//  Noun: iceCream
//  action 1:
iceCream.freeze()
//  action 2:
iceCream.melt()
//  action 3:
iceCream.drip() 

//  6)
//  Noun: computer 
//  action 1:
computer.startUp()
//  action 2:
computer.compute()
//  action 3:
computer.openFile()
 
//  7)
//  Noun: light
//  action 1:
light.flash()
//  action 2:
light.illuminate()
//  action 3:
light.explode()

//  8)
//  Noun: turtle
//  action 1:
turtle.swim()
//  action 2:
turtle.walk()
//  action 3:
turtle.hide() 

//  9) cat
//  Noun:
//  action 1:
cat.sleep()
//  action 2:
cat.complain() 
//  action 3:
cat.eat()

//  10) fridge
//  Noun:
//  action 1:
fridge.cool()
//  action 2:
firge.defrost()
//  action 3:
fridge.explode()


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
