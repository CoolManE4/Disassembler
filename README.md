# Disassembler

[Why should I use this](#Why should I use this)
[Setup] (#Setup)
[How to use](#How to use)
[Changelong] (#Changelog)

# Why should I use this

at the moment theres not many exciting things to do with it, its just a project for fun. But later I'm planning for it to be able to disassemble exe files.

# Setup

#### Step 1
You must have Git Bash or a Linux Terminal for this to be installed. If you're a windows user you can install Windows Subsystem For Linux

```
git clone https://github.com/CoolManE4/Disassembler.git
```

after that you can compile it to the file format you want with a C++ Compiler.

#### Step 2

Next, you need to download NASM at https://nasm.us. After you have downloaded it and set it up, open `nasm-shell` and do ```nasm [file-directory].asm``` the file directory will be the x86 assembly file you want to disassemble. After that it will be compiled. Make sure you're using the default.

# How to use

[Commands](#Commands)

#### Commands

```
disassemble [file-directory].asm
```

prints to the console the disassembled code.

# Changelog
