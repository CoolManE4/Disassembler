# Disassembler

* [Why should I use this](#Why should I use this)
* [Setup] (#Setup)
* [How to use](#How to use)
* [Changelong] (#Changelog)

# Why should I use this

at the moment theres not many exciting things to do with it, its just a project for fun. But later I'm planning for it to be able to disassemble exe files.

# Setup

#### Step 1
You must have Git or a Linux Terminal for this to be installed. If you're a windows user you can install Windows Subsystem For Linux.

###### Linux
```
git clone https://github.com/CoolManE4/Disassembler.git
```

###### Windows

First, you need to install Windows Subsystem for linux.

Open Command Prompt then enter this command.

```
wsl --install
```

after its done installing you want to install a distro, you can do this by entering ```wsl --install -d [Distro name]```

Once you have a Distro installed you need to enter the following commands based on your Distro ***DO NOT INSTALL KALI LINUX IT IS A DISTRO MEAN'T FOR PENETRATION TESTING YOU DO NOT NEED IT TO INSTALL THIS***

# Ubuntu/Debian
```
sudo apt install git
```

# OpenSUSE Leap 42
```
zypper install git
```

Once you have git installed you need to run the following command

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
