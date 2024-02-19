#include <iostream>
#include <vector>
using namespace std;

void printProcess(int num, int base, char* baseChars) {
   vector<int> remainders;
   int originalNum = num;

   while (num != 0) {
       int quotient = num / base;
       remainders.push_back(num % base);
       num = quotient;
   }

   num = originalNum;
   cout << "Conversion process of " << originalNum << " to base " << base << ":\n";
   for (int i = 0; i < remainders.size(); ++i) {
       int remainder = remainders[i];
       int quotient = num / base;
       cout << num << " / " << base << " = " << quotient << ", remainder = " << baseChars[remainder] << "\n";
       num = quotient;
   }
}

void convertToBase(int num, int base, char* baseChars) {
   vector<int> remainders;

   int temp = num;
   while (temp != 0) {
       remainders.push_back(temp % base);
       temp /= base;
   }

   cout << "In base " << base << ": ";
   for (int i = remainders.size() - 1; i >= 0; --i) {
       cout << baseChars[remainders[i]];
   }
   cout << "\n";
}

int main() {
   int num;
   cout << "Enter a decimal number: ";
   cin >> num;

   char baseChars[] = "0123456789ABCDEF";

   printProcess(num, 2, baseChars);
   convertToBase(num, 2, baseChars);

   printProcess(num, 8, baseChars);
   convertToBase(num, 8, baseChars);

   printProcess(num, 16, baseChars);
   convertToBase(num, 16, baseChars);

   return 0;
}
