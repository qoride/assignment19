#include <iostream>
#include <limits>
#include <vector>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int val;
    vector<int> input;

    cout << "Enter two values seperated by a space: ";
    while(input.size() < 2){
        while(cin >> val){
            if(cin.good())input.push_back(val);
            if(input.size()>=2)break;
        }
        if(cin.fail()){
            cin.clear();
            cout << "\nERROR: A value was not accepted, try again: ";
            input.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cin.clear();
        }
    }

    cout << "\nYou entered the values num1 = " << input.at(0) << ", and num2 = " << input.at(1)
    << "\n\nSwapping...";

    swap(&input.at(0),&input.at(1));

    cout << "\n\nNew values are num1 = " << input.at(0) << ", and num2 = " << input.at(1);

    return 0;
}