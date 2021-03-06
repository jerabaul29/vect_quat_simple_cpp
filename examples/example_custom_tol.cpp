#include <iostream>

// to put a default TOL, define it as a macro before any VQS import
#define VQS_DEFAULT_TOL (1.0e-3)

#include "../src/VQS.h"

int main(int argc, char * argv[]){
    std::cout << "Example VQS custom default tolerance" << std::endl;
    std::cout << "VQS_DEFAULT_TOL macro is now: " << VQS_DEFAULT_TOL << std::endl;
}

