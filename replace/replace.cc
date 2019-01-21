#include "replace.hh"
void replace(const std::string& input_filename
        ,const std::string& output_filename
        ,const std::string& src_token
        ,const std::string& dst_token)
{
    std::ofstream file_out(output_filename);
    std::ifstream file_in(input_filename);
    std::string token;
    if (!file_in.is_open())
        std::cout << "Cannot open input file" << "\n";
    if (!file_out.is_open())
        std::cout << "Cannot write output file" << "\n";
    while (getline(file_in,token,' '))
    {
        if (token == src_token)
            token = dst_token;
        file_out << token << " ";
    }
}
