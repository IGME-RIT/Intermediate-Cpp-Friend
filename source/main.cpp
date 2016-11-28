/*
Friend
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// Include iostream for output during the program.
#include <iostream>
using namespace std;

// These classes all inherit from the character class.
#include "../header/fighter.h"
#include "../header/ranger.h"
#include "../header/wizard.h"

int main() 
{
    {
        // The friend keyword allows functions and classes to declare specific exceptions to the rules involving private members.
        // This example demos the use of the friend keyword for functions, as well as for classes.
        // Take a look at the character.h, and character.cpp to see the usage of friend functions.
        // Look at ranger.h, and wizard.cpp to see how friend classes work.


        // Create 3 characters to fight eachother
        Fighter fighter(8);
        Ranger ranger(6);
        Wizard wizard(6);

        // Simulate a fight between our characters:
        fighter.Attack(wizard);
        cin.get();
        ranger.Attack(fighter);
        cin.get();

        fighter.Attack(wizard);
        cin.get();
        wizard.EnchantArrows(ranger);
        cin.get();
        ranger.Attack(fighter);
        cin.get();

        fighter.Attack(wizard);
        cin.get();
        wizard.EnchantArrows(ranger);
        cin.get();
        ranger.Attack(fighter);
        cin.get();

        fighter.Attack(wizard);
        cin.get();
        wizard.EnchantArrows(ranger);
        cin.get();
        ranger.Attack(fighter);
        cin.get();

        fighter.Attack(wizard);
        cin.get();
        wizard.Attack(fighter);
        cin.get();
        ranger.Attack(fighter);
        cin.get();

        fighter.Attack(wizard);
        cin.get();
        wizard.Attack(fighter);
        cin.get();
        ranger.Attack(fighter);
        cin.get();

        fighter.Attack(wizard);
        cin.get();
        ranger.Attack(fighter);
        cin.get();

        fighter.Attack(ranger);
        cin.get();
        ranger.Attack(fighter);
        cin.get();

        fighter.Attack(ranger);
        cin.get();
        ranger.Attack(fighter);
        cin.get();

        fighter.Attack(ranger);
        cin.get();


        ranger.Attack(fighter);
        cin.get();

        std::cout << "Programmer uses Lightning Bolt" << std::endl;
        Damage(ranger, 500);

        cout << "The end.";
    }
    cin.get();
    
    
    
    
    
    return 0;   // End Program.
}