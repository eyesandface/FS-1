#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cerr << "Error.\n";
        return 1;
    }

    const char* filePath = argv[1];
    std::ifstream file(filePath);
    
    if (!file.is_open()) {
        std::cerr << "Error: " << filePath << "': " << strerror(errno) << std::endl;
        return 1;
    }

    
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }


    file.close();
    
    return 0;
}
