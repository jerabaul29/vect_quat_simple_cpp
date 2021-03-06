#include "../src/VQS.h"
#include "../src/Utils/MainstreamUtils.h"

using namespace vqs;

int main(int argc, char * argv[]){
    Vector3<float> vec3 {1.0, 2.0, 3.0};

    print(vec3);
    std::cout << "norm: " << vec3.norm() << " | norm squared: " << vec3.norm_squared() << " | is normed: " << vec3.is_normed() << std::endl;

    Vector3<double> vec3_normed {0.2, 0.4, sqrt(1 - 0.2*0.2 - 0.4*0.4)};
    std::cout << "norm: " << vec3_normed.norm() << " | norm squared: " << vec3_normed.norm_squared() << " | is normed: " << vec3_normed.is_normed() << std::endl;
}

