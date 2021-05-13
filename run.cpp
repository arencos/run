#include <cstdlib>
#include <cstring>
#include <iostream>

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        const std::string yellow("\033[1;33m");
        std::cout << yellow << "run | a tool to execute commands\nusage: run [cmd] [cmd] (max command number is 128)\ncheck out https://github.com/arencos" << std::endl;
    }

    for (int i = 1; i < argc; ++i)
    {
        char str[128];
        strcpy(str, argv[i]);
        strcat(str, " &");
        system(str);
    }



}