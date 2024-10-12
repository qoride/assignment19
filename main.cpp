#include <iostream>

using namespace std;

int main(){
    int num1 = 1;
    int num2 = 2;
    int temp;

    cout << "Initial Values:";
    cout << "\nnum1 = " << num1 << "\nnum2 = " << num2;

    temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "\n\nNew Values:";
    cout << "\nnum1 = " << num1 << "\nnum2 = " << num2;

    return 0;
}
