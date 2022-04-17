#include <iostream>

// TODO: I need to add toHex function which will convert an integer to a hexadecimal value
// I also need to add toOpcode which will convert a hexadecimal value over to an opcode
// After that I need to add a function called toRegister that looks inside the hexadecimal to see if its eax,ebx,ecx,edx etc
// I also need to add a arrayToString function which converts an array to a string like this array [1,0] would be converted into "10"
// I also need to finish up the toAscii function

// HOW IT WILL WORK: it will work by turning the text inside the file to ASCII then to Hexadecimal
// then after its been turned to hexadecimal it fires the toOpcode function and toRegister function on the text and they check if
// the hexadecimal matches the hexadecimal of any opcodes or registers, if it doesn't then it leaves it alone, but if it does then it replaces
// the hexadecimal that matches the opcode or register with the opcode or register it matches with

int toAscii(string text) {
  int textLength = text.length();
  
  int asciiArray[textLength];
  
  int i = 0;
  
  while (i < textLength) {
    i++;
    
    int asciiChar = text[i];
    
    asciiArray[i] = asciiChar;
  }
}
