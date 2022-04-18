#include <iostream>
#include <string>

// TODO: I need to add toHex function which will convert an integer to a hexadecimal value
// finish the disassemble function

// add Opcodes to Opcodes class

// add Registers to Registers class

// add replace_all function or get it from some other website so I can use it for the toOpcode and toRegister functions
// because in C++ string.replace only replaces the first occurence of it

// HOW IT WILL WORK: it will work by turning the text inside the file to ASCII then to Hexadecimal
// then after its been turned to hexadecimal it fires the toOpcode function and toRegister function on the text and they check if
// the hexadecimal matches the hexadecimal of any opcodes or registers, if it doesn't then it leaves it alone, but if it does then it replaces
// the hexadecimal that matches the opcode or register with the opcode or register it matches with

using namespace std;

class Opcodes {
  public:
    const int CALL_OPCODE;

    const int PUSH_OPCODE;
    const int POP_OPCODE;

    const int INC_OPCODE;
    const int DEC_OPCODE;
    const int ADD_OPCODE;
    const int SUB_OPCODE;
};

class Registers {
  public:
    const int EAX_REGISTER;
    const int EBX_REGISTER;
    const int ECX_REGISTER;
    const int EDX_REGISTER
  
    const int AX_REGISTER;
    const int BX_REGISTER;
    const int CX_REGISTER;
    const int DX_REGISTER;
};

string disassemble(string fileDirectory) {
  ofstream file;
  
  file.open(fileDirectory);
  
  string fileText = file.read();
  
  string fileAscii = toAscii(fileText);
  
  string hexadecimal = toHex(fileAscii);
  
  toOpcode(hexadecimal);
  toRegister(hexadecimal);
}

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

string toRegister(string hexadecimal) {
}

string toOpcode(string hexadecimal) {
}
