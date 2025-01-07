#include <iostream>
#include <fstream>

class FileWrapper {
public:
    std::fstream file;

    // Constructor: Acquire resource (open file)
    FileWrapper(const std::string& filename) {
        file.open(filename, std::ios::out);
        if (!file) {
            std::cerr << "Failed to open file!" << std::endl;
        }
    }

    // Destructor: Release resource (close file)
    ~FileWrapper() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed automatically!" << std::endl;
        }
    }
};

int main() {
    {
        FileWrapper fw("example.txt");
        fw.file << "Hello, RAII!" << std::endl;
    }  // fw goes out of scope here, and the file is automatically closed

    return 0;
}
