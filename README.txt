Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the Friend Tutorial!
Prerequesites: None

Inside Ranger.h, you'll see we create "class Ranger", which is 
a child of "character". You'll also see in this clsas, we have
"friend class Wizard";

Here we have a friend class declaration.
This makes it so that the Wizard class can access any private members of the Ranger class.
See enchantarrows function in wizard to see it at work.
Also, notice that wizard doesn't need to be defined yet to do this.
This will even automatically forward-declare our wizard class if it hasn't been declared!
