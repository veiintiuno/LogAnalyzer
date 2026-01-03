LogAnalyzer 

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)
![Version](https://img.shields.io/badge/Version-3.2-blue)

A simple log file analyzer written in C, created as a learning project for cybersecurity basics.

## LogAnalyzer v3.2

A sophisticated log analysis tool written in C with interactive menu, random log generation, and professional terminal UI.

##  Features (v3.2)

- **Interactive Menu**: 6-option CLI with color-coded interface
- **Random Log Generation**: Creates 1000 unique log entries with visual progress bar
- **Live Statistics**: Success/failure counts with percentage calculations
- **Log Filtering**: View successful, failed, or all login attempts
- **Regeneration**: Generate new random data anytime
- **Professional UI**: ASCII art splash screen, progress bars, timed effects
- **Modular Architecture**: Separated analyzer, generator, and main logic

## Project Structure
LogAnalyzer/
├── inc/
│   ├── analyzer.h      # Analysis functions
│   └── generator.h     # Random log generation
├── src/
│   ├── analyzer.c      # Statistics and analysis
│   ├── generator.c     # Random log creation with progress bar
│   └── main.c          # Interactive menu and UI
├── logs/
│   └── ejemplo.log     # Generated log file
├── Makefile            # Build automation
├── CHANGELOG.md        # Version history
├── ROADMAP.md          # Development plan
└── README.md           # This file

Installation & Usage

### Prerequisites
- GCC compiler (MinGW on Windows)
- Basic command line knowledge


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


  __      __         _       _   _       
  \ \    / /        (_)     | | (_)      
   \ \  / /__ _ __   _ _ __ | |_ _  ___  
    \ \/ / _ \ '_ \ | | '_ \| __| |/ _ \ 
     \  /  __/ | | || | | | | |_| | (_) |
      \/ \___|_| |_|/ |_| |_|\__|_|\___/ 
                   |__/                   
           Log Analysis Tool v3.2

Inicializando sistema de logs...
Generando logs: [==========>] 100% (1000/1000)

Press ENTER para acceder al menú...

=== BIENVENIDO A LOG ANALYZER V3.2 ===
1. Show statistics
2. List successful logins
3. List failed logins
4. Show all logs
5. Exit
6. Regenerate random logs
Choice: _

##  Author
**Veiintiuno**  
Cybersecurity student learning C from scratch
- GitHub: [@veiintiuno](https://github.com/veiintiuno)