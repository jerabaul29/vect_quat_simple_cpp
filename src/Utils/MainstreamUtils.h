/*
Mainstream utils, to be used on systems for which "mainstream" functions are available, such as linux,
Ubuntu, Windows, OS, and the likes.
*/

#ifndef VQS_MAINSTREAM_UTILS 
#define VQS_MAINSTREAM_UTILS

#include <iostream>

#include "../Vector3/Vector3.h"

namespace vqs{

    template<typename type_base>
    void print(Vector3<type_base> vec3){
        std::cout << "vec3(" << vec3.ui << ", " << vec3.uj << ", " << vec3.uk << ") | norm: " << vec3.norm() << std::endl;
    }

}

#endif
