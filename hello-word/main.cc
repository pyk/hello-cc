#include <iostream>

int
main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Usage: " << *argv << " nama" << std::endl;
        return 1;
    }
    std::cout << "Helllo " << *(argv + 1) << std::endl;
    return 0;
}
