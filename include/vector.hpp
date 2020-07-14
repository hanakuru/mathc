#ifndef __VECTOR_H__
#define __VECTOR_H__

//ベクトルの定義
struct Vector2D{
  double x;
  double y;

  Vector2D(double xx=0.0, double yy=0.0){ x = xx; y= yy;}
};

//単位ベクトルを計算する
Vector2D get_unit_vector( Vector2D v );

#endif