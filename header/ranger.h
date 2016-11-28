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
#pragma once
#include "../header/character.h"

// Ranger inherits from Character using the private keyword.
class Ranger : public Character
{
    friend class Wizard;    // Here we have a friend class declaration.
                            // This makes it so that the Wizard class can access any private members of the Ranger class.
                            // See enchantarrows function in wizard to see it at work.
                            // Also, notice that wizard doesn't need to be defined yet to do this.
                            // This will even automatically forward-declare our wizard class if it hasn't been declared!

public:
    Ranger(int level);
    virtual void PrintClass() override;
    void Attack(Character& target) override;

private:
    int m_arrows;           // These are private, but can be accessed by the Wizard class.
    int m_enchantedArrows;
};