/*
   MultiShort v0.1
   
   by ubergeek
   
   runs multiple programs from one shortcut (see readme.txt for more details)
*/

#include <windows.h> //for the MessageBox, CreateProcess, and CloseHandle functions, and the STARTUPINFO and PROCESS_INFORMATION structures


int main(int argc, char * argv[]) //argc tells me how many command-line arguments there are, and argv is an array of the command-line arguments passed to MultiShort, split at spaces (but not split inside quoted arguments)
{
    if (argc <= 3) //if you didn't provide two or more programs to run... (the first argument, argv[0], is always the path/filename of MultiShort.exe. this is always done by Windows, no matter what the user passes.
    {
        MessageBox(NULL, "You must provide two or more programs to run as command-line arguments. If you didn't provide any programs to run, why run this program? It doesn't as yet do anything else. If you only provided one program to run, then why use MultiShort? Just make a regular shortcut. Read readme.txt if you're confused.", "Error!", MB_OK | MB_ICONERROR); //...then tell the user what went wrong and how to fix it.
    }
    else //otherwise (you did provide 2 or more programs)...
    {
        for (int i = 1; i < argc; i++) //this loop will run until all the command-line arguments have been considered
        {
            static STARTUPINFO startinfo;          //these structures are required by CreateProcess, but at this time MultiShort don't use them for anything. They provide a higher level of control over how the program is run, for example it can be run minimized.
            startinfo.cb = sizeof(STARTUPINFO);
            startinfo.lpReserved = NULL;
            startinfo.lpDesktop = NULL;
            startinfo.lpTitle = NULL;
            startinfo.dwFlags = 0;
            startinfo.cbReserved2 = 0;
            startinfo.lpReserved2 = NULL;
            static PROCESS_INFORMATION procinfo; //the two structures are declared with the static keyword so that they won't be recreated each time the loops runs
            CreateProcess(argv[i], NULL, NULL, NULL, false, 0, NULL, NULL, &startinfo, &procinfo); //this is the most important line in the program. it runs the program specified in the command-line argument (argv[i])
            CloseHandle(procinfo.hProcess); //and, clean up after Windows
            CloseHandle(procinfo.hThread);
        }
    }
    return 0; //all done! goodbye!
}
