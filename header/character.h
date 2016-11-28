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


class Character
{

public:
    Character(int level, int strength, int dexterity, int intelligence);
    virtual void PrintClass() = 0;
    virtual void Attack(Character& target) = 0;
    void PrintStats();

protected:
    int m_level;
    int m_strength;
    int m_dexterity;
    int m_intelligence;
    int m_health;
    int m_mana;

    friend void Damage(Character& character, int damage);   // Here we declare a friend function.
                                                            // A friend function isn't part of the class, but can access its private members.
                                                            // It's possible to achieve a similar effect to this with a public member function.
                                                            // In that case you would see something like:       character.Damage(int dmg)
                                                            // This changes the syntax so that you do this:     Damage(character, int)

                                                            // I wouldn't recommend using friend functions unless you have a specific reason to.
                                                            // They are extremely situational.
};
