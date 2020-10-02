#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
class Vector
{
    float x,y;
  public:
    Vector(float X=0., float Y=0.): x(X),y(Y){}
    float getx() const {return x;}
    float gety() const {return y;}
    float getsize() const ;
    Vector operator+ (const Vector &b) const
    {
        Vector r (x+b.x, y+b.y);
      return r;
    }

      void operator= (const Vector &b)
    {
      x=b.x;
      y=b.y;
    }

    Vector operator- (const Vector &b) const
    {
        Vector r (x-b.x, y-b.y);
      return r ;
    }

    Vector operator-() const 
    {
        Vector r (-x, -y);
      return r ;
    }
}; 

float Vector::getsize() const
{
    return sqrt(x*x+y*y);
}

int main() {
Vector v1(2.);
Vector v2(1., 2.);
v1 = v1 + v2;
cout<< v1.getsize();
return 0;
}
