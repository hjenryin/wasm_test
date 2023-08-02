#include <fstream>
#include <algorithm>
#include <iostream>
int main()
{
    // In html, File is at data.json as we preload it there in CMakeLists.txt
    auto file =
        std::ifstream("data.json", std::ifstream::binary);
    if (!file.good())
    {
        // In linux / windows, if we're in the build directory, file should be in the .. folder
        file = std::ifstream("../data.json", std::ifstream::binary);
        std::cout << "File at ../data.json" << std::endl;
    }
    else
    {
        std::cout << "File at data.json" << std::endl;
    }
    // get the number of lines in the file
    auto line_count = std::count(
        std::istreambuf_iterator<char>(file),
        std::istreambuf_iterator<char>(), '\n');
    std::cout << "Number of lines in file: " << line_count
              << std::endl;
}
