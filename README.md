### Welcome to our Simple Shell project for our Holberton cursus

This project's goal is to recreate a shell which is a program who receives commands from the user and the operating system will execute them.
This project's goal is to test everything that we've learned until now aswell as our understanding of everything that we might code.
Further down this page, you will get informations aswell as instructions on how to use our `shell`

# Summary
- [Contents of the repository](https://github.com/Pandor3/holbertonschool-simple_shell/blob/Florian/README.md#contents-of-the-repository)
- [Prerequisite](https://github.com/Pandor3/holbertonschool-simple_shell/blob/Florian/README.md#prerequisite)
- [Installation](https://github.com/Pandor3/holbertonschool-simple_shell/blob/Florian/README.md#installation)
- [How to use](https://github.com/Pandor3/holbertonschool-simple_shell/blob/Florian/README.md#installation)
- [Flowchart](https://github.com/Pandor3/holbertonschool-simple_shell/blob/Florian/README.md#flowchart)
- [Authors](https://github.com/Pandor3/holbertonschool-simple_shell/blob/Florian/README.md#flowchart)

## Contents of the repository
**README.md**
> This is where you are right now, it is used to explain about how to use our `shell`

**main.h**
> `main.h` is the file where all of the prototypes for our functions are stored, it is used as a local library.

**main.c**
> `main.c` is the main file which allows our `shell` to work, this is also where most of the functions are used.

**input.c**
> `input.c` is used to read what the user will write in the terminal.

**commands.c**
> `commands.c` is used to tokenize the input of the user in the terminal.

**path.c**
> `path.c` is used to find and return the value of PATH

**printenv.c**
> `printenv.c` is used to print environment variables

**changedir.c**
> `changedir.c` is used to change directories.

**free_memory.c**
> `free_memory.c` is used to free the allocated memory every time a command is typed.

**exitshell.c**
> `exitshell.c` is used to exit the shell by freeing the allocated memory for the program.

## Prerequisite
If you wish to compile, you will need a compiler such as gcc.

## Installation
First you will need to clone the repository in your terminal.
```bash
git clone https://{YOURTOKEN}@github.com/Pandor3/holbertonschool-simple_shell.git
```

Then you will need to move to the folder where `simple_shell` is located.
```bash
cd holbertonschool-simple_shell
```
There, you will be able to see various files, in order to launch our homemade shell terminal, you will have to type as follows :
```bash
./hsh
```

Afterwards, you will be able to type a few commands which will be explained a bit later.


## How to use
Example:
If you want to list all files in the current directory you may do as follows.
```bash
ls
```
The expected output should be
```bash
AUTHORS    changedir.c  exitshell.c    hsh      main.c  man_simple_shell  printenv.c
README.md  commands.c   free_memory.c  input.c  main.h  path.c           
```

Here is an example of several commands which you may try :
| Command	| Command explanation	|
|------------	|-------------------	|
| `cd`		| Change directories	|
| `pwd`		| Shows current path	|
| `whoami`	| Shows user's ID	|

## Flowchart

Work in progress

## Authors

This project was done by [Camille Pelletier](https://github.com/pelcam) and [Florian Bombeeck](https://github.com/Pandor3)
