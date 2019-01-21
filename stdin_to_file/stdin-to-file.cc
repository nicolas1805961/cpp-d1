#include <fstream>
#include <iostream>
void stdin_to_file()
{
    std::ofstream file_out("file.out");
    std::string token;
    while (std::cin >> token)
        file_out << token<<"\n";
}
