// Name - Arman Majhi
// PRN - 24070123022
// Batch - EnTC - A1

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout<<"Enter any integer : ";
    cin >> a;
    cout << "Integer = " << a << " And the size is : "<< sizeof(a) <<"bytes"<<endl ;
    
    float b;
    cout<<"Enter any decimal number : ";
    cin >> b;
    cout << "Decimal = " << b << " And the size is : "<< sizeof(b) <<"bytes"<<endl ;
    
    string c;
    cout<<"Enter any String : ";
    cin >> c;
    cout << "String = " << c << " And the size is : "<< sizeof(c) <<"bytes"<<endl ;
    
    double d;
    cout << "Enter any double : ";
    cin >> d;
    cout << "Double = " << d << " And the size is : " << sizeof(d) << "bytes" << endl;
    
    char e;
    cout << "Enter any character : ";
    cin >> e;
    cout << "Char =  " << e << " And the size is : " << sizeof(e) << "bytes" << endl;
    
    bool f;
    cout << "Enter boolean : ";
    cin >> f;
    cout << "Bolean = " << f << " And the size is : " << sizeof(f) <<" bytes "<< endl;
    
    return 0;
}
