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
#include "..\header\fighter.h"
#include <iostream>

// When inheriting, you can call the parent constructor from the inheriting one.
// This is done with : className(parameters)
Fighter::Fighter(int level) :
    Character(level, 15 + level, 10 + level / 2, 5 + level / 2)
{
}

void Fighter::PrintClass()
{
    std::cout << "Fighter" << std::endl;
}

void Fighter::Attack(Character& target)
{
    std::cout << "Fighter Attacks with his axe!" << std::endl;
    Damage(target, m_strength / 4);
}
