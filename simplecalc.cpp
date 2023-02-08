// SimpleCalc by EllieIre
// Open source, feel free to use, nyan!

#include <iostream>

using namespace std;

int main() {
    char op;
    double num1,num2;
    // Write C++ code here
    cout << "Masukkan operasi bilangan yang ingin digunakan ( +, -, *, /): ";
    cin >> op;
    
    cout << "Masukkan dua angka yang ingin dikaitkan dengan operasi matematika: ";
    cin >> num1 >> num2;
    
    switch( op ){
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2);
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2);
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2);
        case '/':
            if ( num2 != 0.0 )
                cout << num1 << " / " << num2 << " = " << (num1 / num2);
            else
                cout << "Gabisa dibagi dengan 0, bambang.";
            break;
            
        default:
            cout << op << "Bukan operator yang valid.";
    }
    
    cout << "\n Berikut adalah hasilnya! ૮ ˶ᵔ ᵕ ᵔ˶ ა";

    return 0;
}