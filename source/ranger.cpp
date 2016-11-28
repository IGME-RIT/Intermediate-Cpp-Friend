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
#include "..\header\ranger.h"
#include <iostream>

// When inheriting, you can call the parent constructor from the inheriting one.
// This is done with : className(parameters)
Ranger::Ranger(int level) :
    Character(level, 10 + level / 2, 10 + level, 10 + level / 2),
    m_arrows(3),
    m_enchantedArrows(0)
{
}

void Ranger::PrintClass()
{
    std::cout << "Ranger" << std::endl;
}

// The ranger will use enchanted arrows if possible, otherwise, they will use regular arrows, and will finally switch to a sword with no arrows.
void Ranger::Attack(Character& target)
{
    std::cout << "Ranger Attacks!" << std::endl;
    if (m_enchantedArrows > 0)
    {
        std::cout << "Ranger fires an enchanted arrow!" << std::endl;
        m_enchantedArrows--;
        Damage(target, m_dexterity / 2);
    }
    else if (m_arrows > 0)
    {
        m_arrows--;
        std::cout << "Ranger fires an arrow!" << std::endl;
        Damage(target, m_dexterity / 4);
    }
    else
    {
        std::cout << "Ranger is out of arrows, and uses a sword!" << std::endl;
        Damage(target, m_strength / 5
        );
    }
}
