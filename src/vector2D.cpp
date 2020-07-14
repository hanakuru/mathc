#include <math.h>
#include "vector.hpp"

//単位ベクトルを計算する
Vector2D get_unit_vector( Vector2D v ) {
  //ベクトルの長さ
  double length = pow( ( v.x * v.x ) + ( v.y * v.y ), 0.5 );

  //XY各成分を長さで割る
  Vector2D unit;
  unit.x = v.x / length;
  unit.y = v.y / length;

  return unit;
}

