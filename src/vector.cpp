#include <math.h>
#include "vector.hpp"

//単位ベクトルを計算する 2D
Vector2D get_unit_vector( Vector2D v ) {
  //ベクトルの長さ
  double length = pow( ( v.x * v.x ) + ( v.y * v.y ), 0.5 );

  //XY各成分を長さで割る
  Vector2D unit;
  unit.x = v.x / length;
  unit.y = v.y / length;

  return unit;
}

//単位ベクトルを計算する 3D
Vector3D get_unit_vector( Vector3D v ) {
  //ベクトルの長さ
  double length = pow( ( v.x * v.x ) + ( v.y * v.y ) + ( v.z * v.z ) , 0.5 );

  //XY各成分を長さで割る
  Vector3D unit;
  unit.x = v.x / length;
  unit.y = v.y / length;
  unit.z = v.z / length;

  return unit;
}

