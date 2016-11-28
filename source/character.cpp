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
#include "..\header\character.h"
#include <iostream>

// Definition for character class constructor
Character::Character(int level, int strength, int dexterity, int intelligence) :
    m_level(level),
    m_strength(strength),
    m_dexterity(dexterity),
    m_intelligence(intelligence),
    m_health(20 + strength * 3 / 2),
    m_mana(intelligence * 2)
{
}


// Prints out the characters stats.
void Character::PrintStats()
{
    std::cout <<
        "Level: " << m_level <<
        "\nStrength: " << m_strength <<
        "\nDexterity: " << m_dexterity <<
        "\nIntelligence: " << m_intelligence << std::endl;
}


// Defining a friend function:
void Damage(Character& character, int damage)   // The internals of the function don't matter much.
{                                               // Notice that we don't use Character: like we do in other functions in this cpp file, because this isn't a member function.
    character.PrintClass();
    std::cout << "takes " << damage << " damage!" << std::endl;
    std::cout << character.m_health << " -> " << character.m_health - damage << std::endl;


    character.m_health -= damage;              // Despite the function not being part of the class, it can still access private/protected members because it is a friend.

    if (character.m_health <= 0)
    {
        character.PrintClass();
        std::cout << "has died" << std::endl;
    }
}
