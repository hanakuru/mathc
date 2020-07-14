#include <iostream>
#include "vector.hpp"
using namespace std;

int main(int argc, char *argv[]){
    Vector2D vec2D(10.0, 5.0);
    Vector2D unit_vec2D; 

    unit_vec2D = get_unit_vector(vec2D);
    cout << "unit_vec2D = (" << unit_vec2D.x << ", " << unit_vec2D.y << ")" << endl;


    Vector3D vec3D(10.0, 5.0, 20.0);
    Vector3D unit_vec3D; 

    unit_vec3D = get_unit_vector(vec3D);
    cout << "unit_vec3D = (" << unit_vec3D.x << ", " << unit_vec3D.y << ", " << unit_vec3D.z << ")" << endl;

    return 0;
}