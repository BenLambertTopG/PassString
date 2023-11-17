#include <iostream>
#include <string>

void Output(std::string);

int main()
{
    Output("bob");
    Output("James");
    Output("Ya mum!");

    return 0;
}

void Output(std::string s)
{

    std::cout << "The string is " << s << std::endl;
}