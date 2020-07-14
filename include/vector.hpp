#ifndef __VECTOR_H__
#define __VECTOR_H__

//ベクトルの定義
struct Vector2D{
  double x;
  double y;

  Vector2D(double xx=0.0, double yy=0.0){ x = xx; y = yy;}
};

struct Vector3D{
  double x;
  double y;
  double z;

  Vector3D(double xx=0.0, double yy=0.0, double zz=0.0){ x = xx; y = yy; z = zz;}
};

//単位ベクトルを計算する
Vector2D get_unit_vector( Vector2D v );
Vector3D get_unit_vector( Vector3D v );

#endif