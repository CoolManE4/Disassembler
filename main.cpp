#include "convert.h"

void doCommand(string command) {
  if (command.find("disassemble")) {
    string fileName;
    
    cout << "enter the file to disassemble" << "\n";
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
