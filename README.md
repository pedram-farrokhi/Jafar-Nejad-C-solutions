# 🚀 Jafar-Nejad-C-solutions  

<h2 style="border-bottom: none !important;">📖 About</h2> 

**Answers to questions at the end and inside the book C++ by Jafarnejad Qomi**     
**Book version** : Sixth edition-2022  
***
![book cover](https://github.com/user-attachments/assets/49310247-fc44-4daa-947e-67f21ec19150)
***
![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=c%2B%2B&logoColor=white)
![GitHub Repo Size](https://img.shields.io/github/repo-size/pedram-farrokhi/Jafar-Nejad-C-solutions)
🛠 Installation Guide
1. Install C++ Compiler
Windows
Install MinGW (GCC for Windows):

Download from MinGW Distro

Add to PATH:

text
C:\MinGW\bin
Verify:

bash
g++ --version
Linux (Debian/Ubuntu)
bash
sudo apt update
sudo apt install g++
g++ --version
macOS
bash
brew install gcc
g++ --version
2. Install VS Code
Download from code.visualstudio.com

Install these extensions:

C/C++ (by Microsoft)

Code Runner (for easy execution)

3. Run Your First Program
Open VS Code → Create test.cpp:

cpp
#include <iostream>
int main() {
    std::cout << "Hello, C++!" << std::endl;
    return 0;
}
Compile & Run:

Press F5 (Debug) OR

Use Terminal:

bash
g++ test.cpp -o test && ./test
Need Help?
Windows PATH issues? See Guide

Linux/macOS errors? Run sudo apt install build-essential (Linux) or xcode-select --install (macOS)

✅ Verification
bash
g++ --version  # Should show version (e.g., 'g++ 11.2.0')
code --version # Should show VS Code version
