#include "read-info.hh"
DirectoryInfo* read_info(std::ifstream& file)
{
    std::string name;
    unsigned int size;
    unsigned int rights;
    std::string owner;
    auto i = 0;
    std::string token;
    while (file >> token)
    {
        i++;
        switch(i)
        {
            case 1:
                name = token;
                break;
            case 2:
                size = std::stoul(token);
                break;
            case 3:
                rights = std::stoul(token);
                break;
            case 4:
                owner = token;
                break;
            default:
                std::cout << "error" << "\n";
                break;
        }
    }
    DirectoryInfo *di = new DirectoryInfo(name,size,rights,owner);
    return di;
}
