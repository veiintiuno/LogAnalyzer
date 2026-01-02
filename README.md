LogAnalyzer 

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)
![Version](https://img.shields.io/badge/Version-3.1-blue)

A simple log file analyzer written in C, created as a learning project for cybersecurity basics.

## Features (v3.1)

- **Interactive Menu**: User-friendly CLI with 6 options
- **Random Log Generation**: Creates 20 unique log entries each run
- **Live Statistics**: Success/failure counts with percentage
- **Log Filtering**: View successful, failed, or all attempts
- **Regeneration**: Generate new random data anytime
- **Modular Architecture**: Separated analyzer, generator, and main logic

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

```bash
make
./loganalyzer

=== BIENVENIDO A LOG ANALYZER V3.1 ===
[Generating 20 random logs... Done!]

1. Show statistics
2. List successful logins
3. List failed logins
4. Show all logs
5. Regenerate random logs  # NEW
6. Exit
Choice: _

##  Author
**Veiintiuno**  
Cybersecurity student learning C from scratch
- GitHub: [@veiintiuno](https://github.com/veiintiuno)