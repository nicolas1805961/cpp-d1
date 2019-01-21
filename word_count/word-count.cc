#include <fstream>
#include <string>
#include "word-count.hh"
ssize_t word_count(const std::string& filename)
{
    std::ifstream file_in;
    std::string token;
    auto i = 0;
    file_in.open(filename);
    if (!file_in.is_open())
        return -1;
    while (file_in >> token)
        i++;
    return i;
}
