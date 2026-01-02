LogAnalyzer 

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)
![Version](https://img.shields.io/badge/Version-3.0-blue)

A simple log file analyzer written in C, created as a learning project for cybersecurity basics.

## Features (v3.0)

- **Interactive Menu**: User-friendly command-line interface
- **Multiple Operations**: 
  - Show login statistics (success/failure counts, percentages)
  - List successful login attempts
  - List failed login attempts  
  - Display all log entries
- **Session Control**: Continue or exit after each operation
- **Login Analysis**: Counts successful vs failed attempts with percentage
- **Modular Architecture**: Separated logic into analyzer.h/analyzer.c
- **File Reading**: Reads and processes log files with error handling

## Project Structure

LogAnalyzer/
├── logs/ # Log files directory
│ └── ejemplo.log # Example log file
├── src/ # Source code
│ └── main.c # Main program
├── README.md # This file
└── (future: inc/, Makefile, analyzer.c)

Installation & Usage

### Prerequisites
- GCC compiler (MinGW on Windows)
- Basic command line knowledge

### Compilation
```bash
gcc src/main.c -o loganalyzer.exe

example output

=== BIENVENIDO A LOG ANALYZER V3.0 ===
1. Show statistics
2. List successful logins
3. List failed logins
4. Show all logs
5. Exit
Choice: _

Choice: 1
=== STATISTICS ===
Total logs entries: 15
Successful logins: 10
Failed logins: 5
Failure rate: 33.3%

¿Continuar? (s/n): s

(menu appears again...)

This project helped me learn:

File handling in C (FILE*, fopen, fgets, fclose)

Basic string processing

Error checking and program flow control

Building a complete, functional program from scratch

 Roadmap
v2.0 (Next)
Count failed login attempts

Extract IP addresses from log entries

v3.0 (Planned)
Detect suspicious IPs (multiple failed attempts)

Generate simple statistics reports

 Contributing
This is a learning project, but suggestions are welcome! Feel free to:

Report bugs or issues

Suggest improvements

Share your own learning projects

 License
Educational purpose - free to use and modify.
Usage

### Compilation
```bash
make
# or manually:
gcc src/main.c src/analyzer.c -o loganalyzer

##  Author
**Veiintiuno**  
Cybersecurity student learning C from scratch
- GitHub: [@veiintiuno](https://github.com/veiintiuno)