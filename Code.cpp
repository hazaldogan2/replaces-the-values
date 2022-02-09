#include <iostream>
using namespace std;
 
int main()
{
    int a, b;
    
    cout << "Please give a number as 1st variable: ";
	cin >> a;
	
	cout << "Please give a number as 2nd variable: ";
    cin >> b;
 
    // Code to swap 'a' and 'b'
    a = a + b; // a now becomes a+b
    
    if (a>b){ //Checks if a+b is greater than b and the result is negative.
    	b = a - b;
	}
	else{
    b = b - a; // b becomes a
    }
    
    a = a - b; // a becomes b
    
    cout << "The value of the 1st variable: " << a;
    cout << "\nThe value of the 2nd variable: " << b;
}
