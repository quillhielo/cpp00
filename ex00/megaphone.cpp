#include <iostream>
#include <string>
#include <cctype>

int main (int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for(int i = 1; argv[i]; i++)
        {
            std::string str = argv[i];
            for(int j = 0; str[j]; j++)
                std::cout << (char)std::toupper(str[j]);
        }
        std::cout << std::endl;
    }
    return (0);
}
