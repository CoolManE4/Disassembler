#include <iostream>

int getDigits(int integer) {
  if (integer < 10) return 1;
  if (integer < 100) return 2;
  if (integer < 1000) return 3;
  if (integer < 10000) return 4;
  if (integer < 100000) return 5;
  if (integer < 1000000) return 6;
  if (integer < 10000000) return 7;
  if (integer < 100000000) return 8;
  if (integer < 1000000000) return 9;
}

int integerToArray(int integer) {
  int array[256];
  int digit = integer % 10;
    
  int i = 0;
  
  while (digit != 0) {
    i++;
    array[i] = digit;
    digit = digit / 10;
  }
  
  return array;
}

string to_string(int number) {
  string text = "";
  
  int digits = getDigits(number);
  
  int digitArray = integerToArray(number);
  
  int i = 0;
  
  while (i < digits) {
    i++;
    
    if (digitArray[i] == 0) text = text + '0';
    if (digitArray[i] == 1) text = text + '1';
    if (digitArray[i] == 2) text = text + '2';
    if (digitArray[i] == 3) text = text + '3';
    if (digitArray[i] == 4) text = text + '4';
    if (digitArray[i] == 5) text = text + '5';
    if (digitArray[i] == 6) text = text + '6';
    if (digitArray[i] == 7) text = text + '7';
    if (digitArray[i] == 8) text = text + '8';
    if (digitArray[i] == 9) text = text + '9';
  }
  
  return text;
}
