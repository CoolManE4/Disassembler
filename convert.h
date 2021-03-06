#include <iostream>
#include <string>

// TODO:

// add Registers to Registers class

// HOW IT WILL WORK: it will work by turning the text inside the file to ASCII then to Hexadecimal
// then after its been turned to hexadecimal it fires the toOpcode function and toRegister function on the text and they check if
// the hexadecimal matches the hexadecimal of any opcodes or registers, if it doesn't then it leaves it alone, but if it does then it replaces
// the hexadecimal that matches the opcode or register with the opcode or register it matches with

using namespace std;

// Classes
class Opcodes {
  public:
    string CALL_OPCODE;
  
    string RET_OPCODE = "C3";

    string PUSH_OR_POP_OPCODE = "665";

    string INC_OR_DEC_OPCODE = "664";
  
    string ADD_OR_SUB_OPCODE = "6683";
};

class Registers {
  public:
    string EAX_REGISTER;
    string EBX_REGISTER;
    string ECX_REGISTER;
    string EDX_REGISTER;
  
    string AX_REGISTER;
    string BX_REGISTER;
    string CX_REGISTER;
    string DX_REGISTER;
};

// Functions

string disassemble(string fileDirectory) {
  ofstream file;
  
  file.open(fileDirectory);
  
  string fileText = file.read();
  
  string fileAscii = toAscii(fileText);
  
  string hexadecimal = toHex(fileAscii);
  
  toOpcode(hexadecimal);
  toRegister(hexadecimal);
}

int reverseArray(int array[256]) {
  int arrayLength = *(&array + 1) - array;
  
  int reversedArray[256];
  
  int i = arrayLength;
  
  int index = 0;
  
  while (i != 0) {
    reversedArray[i] = array[i];
    
    index++;
    i--;
  }
  
  return reversedArray;
}

int getOccurences(string text, string inText) {
  int textLength = text.length();
  
  string fakeText = "";
  
  int occurences = 0;
  
  int i = 0;
  
  while (i < textLength) {
    if (fakeText.find(inText)) {
      int position[2] = getPosition(fakeText,inText);
      occurences++;
      fakeText.replace(position[1],position[2],"");
    }
    
    i++;
  }
}

int getPosition(string text, string findInText) {
  int length = findInText.length();
  
  int begin = text.find(findInText);
  
  int end = (begin * length) + 1;
  
  int position[2] = {begin, end};
  
  return position;
}

string intArrayToString(int array) {
  string packedArray = "";
  
  int arrayLength = *(&array + 1) - array;
  
  int i = 0;
  
  while (i < arrayLength) {
    packedArray = packedArray + to_string(array[i])
      
    i++;
  }
  
  return packedArray;
}

string packStringArray(string array)
  string packedStringArray = "";
  
  int arrayLength = *(&array + 1) - array;

  int i = 0;

  while (i < arrayLength) {
    packedStringArray = packedStringArray + array[i];
    
    i++;
  }

  return packedStringArray;
}

void replace_all(string text,string replaced,string replaceWith) {
  int position = getPosition(text,replaced);
  
  int begin = position[0];
  
  int end = position[1];
  
  int occcurencesOfReplaced = getOccurences(replaced);
  
  int i = 0;
  
  while (i < occurencesOfReplaced) {
    str.replace(begin,end,replaceWith);
    
    position = getPosition(text,replaced);
    
    begin = position[0];
    
    end = position[1];
    
    i++;
  }
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
  
  string packedAsciiArray = intArrayToString(asciiArray);
  
  return packedAsciiArray;
}

string arrayToHex(int array) {
  int arrayLength = *(&array + 1) - array;
  
  string stringArray[arrayLength];
  
  int i = 0;
  
  while (i < arrayLength) {
    int decimal = array[i];
    
    if (decimal == 10) stringArray[i] = "A";
    if (decimal == 11) stringArray[i] = "B";
    if (decimal == 12) stringArray[i] = "C";
    if (decimal == 13) stringArray[i] = "D";
    if (decimal == 14) stringArray[i] = "E";
    if (decimal == 15) stringArray[i] = "F";
    
    i++;
  }
  
  string packedStringArray = packStringArray(stringArray);
  
  return stringArray;
}

// Hexadecimal conversion method taken from https://www.tutorialspoint.com/how-to-convert-decimal-to-hexadecimal
string toHex(int decimal) {
  int divide = decimal / 16;
  int remainder = decimal % 16;
  
  int array[256];
  
  int i = 0;
  
  while (divide != 0) {
    i++;
    
    divide = divide / 16;
    remainder = remainder % 16;
    
    array[i] = remainder;
  }
  
  int reversedArray = reverseArray(array);
  
  string hexadecimal = arrayToHex(reversedArray);
  
  return hexadecimal;
}

string toRegister(string hexadecimal) {
}

string toOpcode(string hexadecimal) {
  Opcodes Opcodes;
  
  if (hexadecimal.find(Opcodes.CALL_OPCODE)) replace_all(hexadecimal,Opcodes.CALL_OPCODE,"call");
  if (hexadecimal.find(Opcodes.RET_OPCODE)) replace_all(hexadecimal,Opcodes.RET_OPCODE,"ret");
  if (hexadecimal.find(Opcodes.INC_OR_DEC_OPCODE)) replace_all(hexadecimal,Opcodes.INC_OR_DEC_OPCODE,"inc/dec");
  if (hexadecimal.find(Opcodes.ADD_OR_SUB_OPCODE)) replace_all(hexadecimal,Opcodes.ADD_OR_SUB_OPCODE,"add/sub");
  if (hexadecimal.find(Opcodes.PUSH_OR_POP_OPCODE)) replace_all(hexadecimal,Opcodes.PUSH_OR_POP_OPCODE,"push/pop");
}
