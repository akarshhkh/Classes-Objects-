//Name - akarsh khot
//PRN - 23070123012
//Aim - to print the volume of cubiod using class method.

#include<iostream>
using namespace std;

    class Volume{
        public:
        int length , breadth , height , volume;
        void input(){
            cout << "enter the length : ";
            cin >> length;
            cout << "enter the breadth : ";
            cin >> breadth;
            cout << "enter the height : ";
            cin >> height;
        } 
        void calculation(){
            volume = length * breadth * height ;
        }
        void display(){
            cout << "the volume of the given cubiod is : " << volume << endl;
        }
    };

       int main(){
        Volume v1;
        v1.input();
        v1.calculation();
        v1.display();

    return 0;
}

/*
OUTPUT
enter the length : 5
enter the breadth : 5
enter the height : 5
the volume of the given cubiod is : 125

enter the length : 4
enter the breadth : 4
enter the height : 4
the volume of the given cubiod is : 64
*/
