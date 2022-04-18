#include <iostream>
#include <string>

// TODO: I need to add toHex function which will convert an integer to a hexadecimal value

// HOW IT WILL WORK: it will work by turning the text inside the file to ASCII then to Hexadecimal
// then after its been turned to hexadecimal it fires the toOpcode function and toRegister function on the text and they check if
// the hexadecimal matches the hexadecimal of any opcodes or registers, if it doesn't then it leaves it alone, but if it does then it replaces
// the hexadecimal that matches the opcode or register with the opcode or register it matches with

string arrayToString(int array) {
  string packedArray = "";
  
  int arrayLength = *(&array + 1) - array;
  
  int i = 0;
  
  while (i < arrayLength) {
    packedArray = packedArray + to_string(array[i])
      
    i++;
  }
  
  return packedArray;
}

int toAscii(string text) {
  int textLength = text.length();
  
  int asciiArray[textLength];
  
  int i = 0;
  
  while (i < textLength) { 
    int asciiChar = text[i];
    
    asciiArray[i] = asciiChar;
    
    i++;
  }
  
  string packedAsciiArray = arrayToString(asciiArray);
  
  return packedAsciiArray;
}

string toRegister(int hexadecimal) {
  if (hexadecimal == 0x80) return "eax";
  if (hexadecimal == 0xB0) return "ebx";
  if (hexadecimal == 0x90) return "ecx";
  if (hexadecimal == 0xA0) return "edx";
}

string toOpcode(int hexadecimal) {
  if (hexadecimal == 0xCD80) return "int 0x80";
  if (hexadecimal == 0x66B) return "mov";
}
