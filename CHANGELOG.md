## **`CHANGELOG.md` ACTUALIZADO:**
# Changelog

All notable changes to LogAnalyzer will be documented in this file.

## v3.2 - 2026-01-02
### Added
- Visual progress bar for log generation
- Improved startup sequence: splash screen → progress → menu
- Increased default log count from 20 to 1000 entries
- Enhanced UI with timing effects and better visual feedback

### Changed
- Startup flow: logs generate immediately after splash screen
- Progress bar updates every 30 logs with 1ms delays for visibility
- Menu option 6 now regenerates 1000 logs instead of 20

### Fixed
- Proper Enter handling after initialization
- Memory and file handling in regeneration from menu

## v3.1
### Added
- Random log generator module (generator.h/generator.c)
- Automatic generation of 20 random logs on program start
- Option to regenerate logs from menu
- Realistic random data: timestamps, success/failure ratios, IP addresses

### Changed
- Updated Makefile to include generator.c
- ejemplo.log now contains randomly generated data each execution

## v3.0 
### Added
- Interactive menu system with 6 options
- Options: statistics, list successful/failed logins, show all logs, exit
- Continue prompt after each operation
- Input validation for menu choices

### Changed
- Complete rewrite of main.c to support menu-driven interface
- Improved user experience with rewind() for multiple file readings
- Better error handling for invalid options

## v2.1
### Added
- Modular percentage calculation function
- Division by zero protection
- Clean architecture with separate header/source files

### Changed
- Updated compilation to include analyzer.c
- Improved code organization for future features

## v2.0
### Added
- Success/failure login counters using `strstr()`
- Clean statistics output
- Basic log analysis functionality

## v1.0
### Added
- First functional version
- File reading with `fopen()`, `fgets()`, `fclose()`
- Line-by-line log display with numbering
- Total line count
- Basic error handling for missing files