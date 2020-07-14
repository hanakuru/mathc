#include <iostream>
#include "../include/vector.hpp"
using namespace std;

void main(int argc, char *argv[]){
    Vector2D vec2D_a(10.0, 5.0);
    Vector2D vec2D_b = {20.0, 20.0};
    Vector2D unit_vec; 

    unit_vec = get_unit_vector(vec2D_a);
    cout << "unit_vec = (" << unit_vec.x << ", " << unit_vec.y << ")" << endl;

    unit_vec = get_unit_vector(vec2D_b);
    cout << "unit_vec = (" << unit_vec.x << ", " << unit_vec.y << ")" << endl;
}