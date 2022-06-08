#include <iostream>

using namespace std;

class Vector{
    public:
    double x, y, z;
    Vector(double x, double y, double z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    
    Vector operator + (Vector b){
        return Vector(this->x+b.x,this->y+b.y,this->z+b.z);
    }
    
    double operator ^ (Vector b){
        return this->x*b.x + this->y*b.y + this->z*b.z;
    }
    
    Vector operator * (Vector b){
        return Vector(this->y*b.z - this->z*b.y, this->z * b.x - this->x * b.z, this->x*b.y - this->y * b.x);
    }
    
    double mag(){
        return x*x+y*y+z*z;
    }
};

void Log(Vector v){
        cout << v.x << "i";
        v.y>0 ? cout << " + " << v.y << "j": cout <<" - "<< v.y*(-1) << "j";
        v.z>0 ? cout << " + " << v.z << "k": cout <<" - "<< v.z*(-1) << "k";
        cout << endl;
    }

int main()
{
    Vector a(10,20,30); 
    Vector b(15,25,35);
    Vector c = a + b;
    double d = a ^ b;
    Vector e = a * b;
    double f = a.mag();
    Log(a);
    Log(b);
    Log(c);
    cout << d << endl;
    Log(e);
    cout << f << endl;

    return 0;
}
