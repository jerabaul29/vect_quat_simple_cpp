#include "../src/VQS.h"
#include "../src/Utils/MainstreamUtils.h"

using namespace vqs;

int main(int argc, char * argv[]){
    Vector3<float> default_vector {};
    print(default_vector);

    Vector3<float> custom_vector {1.1, 2.2, 3.3};
    print(custom_vector);

    Vector3<float> copied_vector{custom_vector};
    custom_vector.uj = 5.5;
    print(copied_vector);
    print(custom_vector);
}

