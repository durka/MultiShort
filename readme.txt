MultiShort 0.1

MultiShort is a program that allows you to create shortcuts that point to more than one program (MultiShortcuts). For example, suppose you use AOL Instant Messenger, Yahoo! Instant Messenger, and MSN Messenger*. Normally, you would have to click on three shortcuts to run all three of these programs. But with MultiShort, you only have to click on one. Simply create a shortcut to MultiShort and pass the programs to run as command-line arguments. (Don't panic if you don't know what those are.) I will give step-by-step instructions, using the instant messengers example mentioned above. (see below at Usage)


Installation/Uninstallation:

MultiShort is so small that this is mind-bogglingly simple. Simply put the MultiShort.exe file anywhere you want (but remember where you put it; you'll need to know that to make MultiShortcuts). To uninstall (why would you want to? whatever...) Just delete the file. Obviously, if you delete the file, none of your MultiShortcuts will do anything anymore except make Windows complain that it can't find MultiShort.exe. Also, MultiShort doesn't save anything in external files, alter any files, or do anything whatsoever with the registry. If something is changing your files, it's not MultiShort. (Note that the programs MultiShort runs may change files, but that is not my affair.) Check the source code if you don't believe me. (In future versions, there may be options, and in that case MultiShort will require ONE settings.ini file to store those options in.)


Usage OR How to create a MultiShortcut:

First, suppose that MultiShort is located at C:\Multishort\MultiShort.exe, AIM is located at C:\Program Files\AOL Instant Messenger\aim.exe, Yahoo! IM is located at C:\Program Files\Yahoo\yahooim.exe, and MSN Messenger is located at C:\MSN\msnmsngr.exe. (I made these up, and they may not reflect the actual locations of the files on your system.) Finally, suppose that you want to create a shortcut on the desktop.

Step 1. Right-click on the desktop, and select New->Shortcut (note: you can do this in any folder on your system. Just open the folder in Windows Explorer and follow these same steps.)

Step 2. The Create Shortcut wizard should come up. In the location box, type: (the format is very important)

"C:\MultiShort\MultiShort.exe" "C:\Program Files\AOL Instant Messenger\aim.exe" "C:\Program Files\Yahoo\yahooim.exe" C:\MSN\msnmsngr.exe

Explanation: the first quoted file is the MultiShort program (it must be in quotes...just because. I don't know why, but nothing works if it isn't). Everything after it is command-line arguments. this is just telling the program what to do, so that it doesn't have to ask you after it starts. notice that the two files that have spaces in their paths have quotation marks around them. THIS IS IMPORTANT (your computer can be harmed if you do it incorrectly). If you just put in C:\Program Files\AOL Instant Messenger\aim.exe, then that program may not be run. because there are spaces, the computer doesn't know what is the .exe file to run and what is the command-line arguments to pass to that program.** So if there is a program on your computer located at C:\Program.exe, it will be run if you don't put the quotes. And if that doesn't exist, the computer next looks for C:\Program Files\AOL.exe. If these programs are VIRUSES, this will be a problem for you.*** Notice both that there are no quotes around the MSN file, and that there are NO SPACES in C:\MSN\msnmsngr.exe. Quotes around programs that don't have spaces in their paths are optional and have no effect either way.

Step 3. Click next. Type whatever name for the shortcut that you want. This is the name that will appear on the desktop. For example, "Instant Messengers."

Step 4. Click Finish, and the shortcut should appear. When double-clicked, if all goes well, all three programs should open up****.

Step 5. Ha! You thought you were finished when you clicked Finish, huh? Well, you can be if you want, but there's still one problem. The shortcut defaults to having the rather boring and generic MultiShort icon. If you want to change this, right-click on the shortcut and click Properties. In the dialog that you get, click Change Icon... If you don't see that button, make sure you are on the Shortcut tab of the dialog. Now you can select any icon on your system, even those inside other files (.dll and .exe files usually have at least one icon embedded in them.) For me (this may be different for you because I have Windows XP and have not tested it on anything else yet****) you only see the icons within MultiShort when you click Change Icon..., and there is only one of those. Not too helpful. So, you need another file with some icons in it. Click Browse... and find another file. In the future, MultiShort may have some other, generic (but more interesting than the current one) icons embedded in it. Click OK twice when you're done selecting an icon.


License: This program is free and you can do whatever you want with it. I have even included the source code*****. However, if you distribute the program to anyone else, you must include this file. And you can't do anything to it that would make it a virus or spy/ad/malware or whatever******. Just use common sense--if your mother wouldn't want you to do it, don't do it.


* This is actually the situation that inspired me to write the program, and credit for it goes to a member of the WinMatrix forums who shall remain nameless unless he gives me permission to use his name.

** At this time, MultiShort does not support command-line arguments for a very simple reason: there must be a space between the program and the command-line arguments, and MultiShort would just interpret this space as denoting another program to run. In version 0.2, I will think up a method for passing command-line arguments to the programs.

*** I am ABSOLUTELY NOT RESPONSIBLE IN ANY WAY, SHAPE OR FORM AT ALL if in this or any other way, MultiShort causes your computer to crash, your hard disk to explode, or a T-Rex to jump out of your monitor and eat you alive. (or anything in between) It shouldn't cause any of those things, though, and you can check the source code if you don't believe me. The worst I've had happen was that nothing at all happened when I ran the program, and that was my fault (I had made typos in the shortcuts or in the code). When I follow my own instructions, it works for me 100% of the time.

**** If they don't, or if you find some other bug (what could you possible find? the program doesn't do anything else! whatever, there's always something...) email me at multishort@hotmail.com. And if anyone wants to test this on other systems than Windows XP SP2 and tell me what does/doesn't work, I'd be much obliged (hint, hint).

***** This is written in C++ compiles with Bloodshet Dev-C++ 4.9.9.2 (www.bloodshed.net) when it is set up in a project that includes main.cpp and is specified as a Win32 Console program, and in the Linker Options "Do not create a console window" is set to Yes. All that stuff is already set up in the multishort.dev file, but I created it on Windows XP and it may not work on your computer. Also, the information may be useful to you if you are using a different compiler.

****** Which it isn't already. Why would I want to spend time making a program that would just cause other people hardship and most likely get me arrested? You can check the source code yourself if you don't believe me.