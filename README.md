# Disassembler

If you have the ability to, please contribute. My code is not perfect. But it can become alot better if other people improve and fix it. It's still being made and it hasn't been tested yet, so its vulnerable to human flaw.

* [Why should I use this](#why-should-i-use-this)
* [Setup](#setup)
* [How to use](#how-to-use)
* [Changelong](#changelog)

# Why should I use this

at the moment theres not many exciting things to do with it, its just a project for fun.

# Setup

#### Step 1
You must have Git for this to be installed. If you're a windows user you can install Windows Subsystem For Linux.

#### Linux

```
git clone https://github.com/CoolManE4/Disassembler.git
```

After its installed you can compile it with a compiler of your choice. Since you're a Linux user I'm just going to assume you have this step figured out already.

#### Mac

```
brew install git
```

```
git clone https://github.com/CoolManE4/Disassembler.git
```

If I got this wrong don't be afraid to give feedback, I don't know alot about Mac.

#### Windows

For windows you have two options, Git Bash and Windows Subsystem for Linux installation.

#### Git Bash Installation

Download Git Bash at https://git-scm.com/downloads

then enter this command

```
git clone https://github.com/CoolManE4/Disassembler.git
```

then search for a file named Disassembler on your computer

once you've found it compile it using a C++ compiler of your choice

#### Windows Subsystem for Linux Installation **OPTIONAL**

First, you need to install Windows Subsystem for Linux.

Open Command Prompt then enter this command.

```
wsl --install
```

after its done installing you want to install a distro, you can do this by entering ```wsl --install -d [Distro name]```

Once you have a Distro installed you need to enter the following commands based on your Distro ***DO NOT INSTALL KALI LINUX IT IS A DISTRO MEANT FOR PENETRATION TESTING YOU DO NOT NEED IT TO INSTALL THIS***

## Ubuntu/Debian
```
sudo apt install git
```

## OpenSUSE Leap 42
```
zypper install git
```

Once you have git installed you need to run the following command

```
git clone https://github.com/CoolManE4/Disassembler.git
```

after that you need to enter Run by pressing Windows key + R then enter the following

```
\\wsl$
```

You should see the Distro you have installed (if its open). Once you see it you want to click on it then click home, then you should see a folder inside home that has the same name as the Distro you have installed, click on that then you should see the Disassembler folder. After this step you can compile the C++ code with an IDE or a compiler of your choice. If you're a Windows user I recommend using Visual Studio or Visual Studio Code.

#### Step 2

Next, you need to download NASM at https://nasm.us. After you have downloaded it and set it up, open `nasm-shell` and do ```nasm [file-directory].asm``` the file directory will be the x86 assembly file you want to disassemble. After that it will be compiled. Make sure you're using the default file format which is bin.

# How to use

[Commands](#Commands)

#### Commands

```
disassemble
```

prints to the console the disassembled code.

# Changelog

4/17/2022

Added getDigits, integerToArray, and to_string.
Added toChar, and toAscii.
