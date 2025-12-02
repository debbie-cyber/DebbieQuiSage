# THE QUISAGE

A simple, command-line quiz application written in C This project demonstrates basic C programming concepts, including functions, loops, and conditional statements, to deliver a fun and interactive trivia experience.

## Getting Started

To compile and run this program, you will need a C compiler installed on your system (like GCC or Clang).


## Option 1: Running with VS Code (Recommended)

This is the easiest way to run the program if you already use Visual Studio Code.

### Prerequisites

1.  VS Code: Installed on your machine.
2.  C/C++ Extension: Installed in VS Code /*(Search for **`ms-vscode.cpptools`**).*/
3.  **Code Runner Extension:** (Optional, but useful) Installed in VS Code (Search for **`formulahendry.code-runner`**).
4.  **C Compiler:** Ensure a compiler (like GCC) is installed and accessible via your system's PATH.

### Steps

1.  Open the project folder in VS Code.
2.  Open the main source file (Text Quiz.c).
3.  Click the **Run** button (usually a small triangle icon in the top right) or right-click and select **Run Code**. The game will start in the integrated terminal!

---

## Option 2: Running via Terminal

This is the standard, compiler-specific method for running C programs.

### 1. Compile the Source Code

Open your terminal, navigate to the project directory, and use your compiler (i. e. GCC) to compile the file.

```bash
# Navigate to the directory where your .c file is located
cd /path/to/the/quiz-project

# Compile the file (replace [main.c] with your "Text Quiz.c")
gcc [Text Quiz.c] -o quiz_game
