#include <fstream>
#include <algorithm>
#include <iostream>
int main()
{
    auto file =
        std::ifstream("data.json", std::ifstream::binary);
    // get the number of lines in the file
    auto line_count = std::count(
        std::istreambuf_iterator<char>(file),
        std::istreambuf_iterator<char>(), '\n');
    std::cout << "Number of lines in file: " << line_count
              << std::endl;
}
