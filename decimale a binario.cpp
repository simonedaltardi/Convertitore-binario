#include <iostream>

using namespace std;

void codifica(int num)
{
    cout << "Il numero in base decimale e': " <<num << endl;
    int resto[22];
    int i = 0;
    int n = num;
    while(num > 0){
        resto[i] = num % 2;
        i++;
        num /= 2;
    }
    cout << n << " in binario e': ";

    // Printing the array in reversed order
    for(i = i-1; i >= 0; i--){
        cout << resto[i];
    }
    cout << endl;
}

int main(){

    codifica(83);

    return 0;
}
