#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int convertToDecimal(string num, int base) {
    int decimal = 0;
    int size = num.size();
    int power = size - 1;

    for (int i = 0; i < size; i++) {
        int digit;
        if (num[i] >= '0' && num[i] <= '9') {
            digit = num[i] - '0';
        } else if (num[i] >= 'A' && num[i] <= 'F'){
            digit = num[i] - 'A' + 10;
        }
        decimal += digit * pow(base, power);
        power--;
    }

    return decimal;
}

void printProcess(int num, int base) {
    cout << "\nConversion process of " << num << " to base " << base << ":\n";
    while (num != 0) {
        int remainder = num % base;
        cout << "  " << num << " / " << base << " = " << num / base << ", remainder = " << remainder << "\n";
        num /= base;
    }
}

string convertToBase(int num, int base) {
    string baseChars = "0123456789ABCDEF";
    string result = "";
    while (num != 0) {
        result = baseChars[num % base] + result;
        num /= base;
    }
    return result;
}

void verifyConversion(int originalNum, string convertedNum, int base) {
    cout << "\nVerifying conversion of " << convertedNum << " from base " << base << " to decimal:\n";
    int decimal = 0;
    int size = convertedNum.size();
    int power = size - 1;
    string additionProcess = "";

    for (int i = 0; i < size; i++) {
        int digit;
        if (convertedNum[i] >= '0' && convertedNum[i] <= '9') {
            digit = convertedNum[i] - '0';
        } else if (convertedNum[i] >= 'A' && convertedNum[i] <= 'F'){
            digit = convertedNum[i] - 'A' + 10;
        }
        int multiplication = digit * pow(base, power);
        cout << "  " << digit << " * " << base << "^" << power << " = " << multiplication << "\n";
        if (multiplication != 0) {
            additionProcess += to_string(multiplication) + " + ";
            decimal += multiplication;
        }
        power--;
    }

    additionProcess = additionProcess.substr(0, additionProcess.length() - 3); // Remove the last " + "
    cout << "\nAddition process during conversion:\n  " << additionProcess << " = " << decimal << "\n";

    if (originalNum == decimal) {
        cout << "\nVerification successful: " << convertedNum << " equals " << decimal << " in decimal.\n";
    } else {
        cout << "\nVerification failed: " << convertedNum << " does not equal " << decimal << " in decimal.\n";
    }
}

int main() {
    int num;
    int bases[] = {2, 8, 16};

    cout << "Enter a decimal number: ";
    cin >> num;

    for (int i = 0; i < 3; i++) {
        int base = bases[i];
        cout << "\n\nConverting to base " << base << ":\n";

        printProcess(num, base);
        string convertedNum = convertToBase(num, base);
        cout << "\nConverted number in base " << base << ": " << convertedNum << "\n";

        verifyConversion(num, convertedNum, base);
    }

    return 0;
}
