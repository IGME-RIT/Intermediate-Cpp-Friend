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
#include "..\header\wizard.h"
#include <iostream>

// When inheriting, you can call the parent constructor from the inheriting one.
// This is done with : className(parameters)
Wizard::Wizard(int level) :
    Character(level, 5 + level / 2, 5 + level / 2, 15 + level)
{
}

void Wizard::PrintClass()
{
    std::cout << "Wizard" << std::endl;
}


// Cast fireball if possible, otherwise run and hide
void Wizard::Attack(Character& target)
{
    std::cout << "Wizard attacks!" << std::endl;
    if (m_mana < 12)    // Check if there's enough mana
    {
        std::cout << "Not enough mana. Run and hide!" << std::endl;
    }
    else                // Attack
    {
        std::cout << "Wizard casts fireball!" << std::endl;
        std::cout << "mana: " << m_mana << " -> " << m_mana - 12 << std::endl;
        m_mana -= 12;
        Damage(target, m_intelligence / 2);
    }
}


// Try to enchant arrows belonging to a ranger.
void Wizard::EnchantArrows(Ranger& ranger)
{
    std::cout << "Wizard casts enchant arrow on ranger!" << std::endl;
    if (m_mana < 5) // Make sure there's enough mana
    {
        std::cout << "not enough mana!" << std::endl;
    }
    else if (ranger.m_arrows == 0)    // Make sure there are arrows to enchant! (we can access arrows because wizard is a friend of ranger)
    {
        std::cout << "no arrows to enchant!" << std::endl;
    }
    else
    {
        // cast the spell:
        std::cout << "mana: " << m_mana << " -> " << m_mana - 5 << std::endl;
        m_mana -= 5;
        ranger.m_arrows--;
        ranger.m_enchantedArrows++;
    }
}