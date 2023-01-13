#include<iostream>
#include<cmath>

using namespace std;
class triangle{
    public:
    
        float area(float side1, float side2, float side3){
            float s = (side1+side2+side3)/2;
            float s1 = s-side1, s2 = s-side2, s3=s-side3;
            float x = s*s*s;
            cout << s1 << " " << s2 << " " << s3 << endl;
            cout << x << endl;
            return (x)*(s1)*(s2)*(s3);
        }
        
        int area(int side1, int side2){
            return 0.5*side1*side2;
        }   
        
        float area(int side1){
            return 0.433*side1*side1;
        }
    
};

int main(){
    cout <<"Enter 1 for general triangle, 2 for right angle triangle, 3 for equilateral triangle.";
    int x;
    cin >> x;
    triangle t;
    switch(x){
        case 1: 
            float side1, side2, side3;
            cout << "Enter vale of three sides";
            cin >> side1 >> side2 >> side3;
            cout << "Area is: " << t.area(side1, side2, side3);
            break;
        case 2:
            int base, height;
            cout << "Enter value of base and height";
            cin >> base >> height;
            cout << "Area is: " << t.area(base, height);
            break;
        case 3:
            int side;
            cout << "Enter side";
            cin >> side;
            cout << "Area is :" << t.area(side);
            break;
    }
}
