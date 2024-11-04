#include <iostream>

#include "development/global_variables/global_variables.h"
#include "development/include/generate_fire.h"

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    while (true) {
        system(CLEAR);
        generateFire();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    return 0;
}