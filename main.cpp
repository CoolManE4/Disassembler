#include "convert.h"

void doCommand(string command) {
  if (command == "disassemble") {
    string fileName;
    
    cout << "\n" << "enter the file to disassemble" << "\n";
    cin >> fileName;
    
    disassemble(fileName);
  }
}

int main() {
  while (true) {
    string command;
    
    cin >> command;
    
    doCommand(command);
  }
}
