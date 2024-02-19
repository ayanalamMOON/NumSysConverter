//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//int convertToDecimal(string num, int base) {
//    int decimal = 0;
//    int size = num.size();
//    int power = size - 1;
//
//    for (int i = 0; i < size; i++) {
//        int digit;
//        if (num[i] >= '0' && num[i] <= '9') {
//            digit = num[i] - '0';
//        } else if (num[i] >= 'A' && num[i] <= 'F') {
//            digit = num[i] - 'A' + 10;
//        }
//        decimal += digit * pow(base, power);
//        power--;
//    }
//
//    return decimal;
//}
//
//void printProcess(string num, int base) {
//    int size = num.size();
//    int power = size - 1;
//
//    cout << "Conversion process of " << num << " from base " << base << " to decimal:\n";
//    for (int i = 0; i < size; i++) {
//        int digit;
//        if (num[i] >= '0' && num[i] <= '9') {
//            digit = num[i] - '0';
//        } else if (num[i] >= 'A' && num[i] <= 'F') {
//            digit = num[i] - 'A' + 10;
//        }
//        cout << digit << " * " << base << "^" << power << " = " << digit * pow(base, power) << "\n";
//        power--;
//    }
//}
//
//int main() {
//    string num;
//    int base;
//
//    cout << "Enter a number: ";
//    cin >> num;
//
//    cout << "Enter the base of the number (2 for binary, 8 for octal, 16 for hexadecimal): ";
//    cin >> base;
//
//    printProcess(num, base);
//    int decimal = convertToDecimal(num, base);
//
//    cout << "The decimal equivalent of " << num << " in base " << base << " is " << decimal << ".\n";
//
//    return 0;
//}
