LogAnalyzer 

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)
![Version](https://img.shields.io/badge/Version-2.1-blue)

A simple log file analyzer written in C, created as a learning project for cybersecurity basics.

## Features (v2.1)

- **Login Statistics**: Counts successful vs failed logins
- **Failure Percentage**: Calculates and displays failure rate
- **Zero-Division Protection**: Prevents crash on empty files
- **File Reading**: Reads and processes log files

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

=== LOG ANALYZER V1.0 ===
Exito, se ha abierto el archivo correctamente..
Linea 1: 2024-01-01 10:00 - Login exitoso - IP: 192.168.1.10
Linea 2: 2024-01-01 10:01 - Login fallido - IP: 192.168.1.15
Linea 3: 2024-01-01 10:02 - Login fallido - IP: 192.168.1.15
Linea 4: 2024-01-01 10:03 - Login fallido - IP: 192.168.1.20
=== TOTAL: 4 lineas ===

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

##  Author
**Veiintiuno**  
Cybersecurity student learning C from scratch
- GitHub: [@veiintiuno](https://github.com/veiintiuno)