# Changelog

All notable changes to LogAnalyzer will be documented in this file.

## Version History

## v2.1 - 2026-01-02
### Added
- Failure percentage calculation
- Protection against division by zero for empty log files

## v2.0 - 2026-01-02
### Added
- Success/failure login counters using `strstr()`
- Clean statistics output

## v1.0 - 2026-01-02
### Added
- First functional version
- File reading with `fopen()`, `fgets()`, `fclose()`
- Line-by-line log display with numbering
- Total line count
- Basic error handling for missing files
- Project documentation in README.md

### Technical Details
- Written in C
- Single-file architecture (`main.c`)
- Windows-compatible (PowerShell)
- No external dependencies

See [CHANGELOG.md](CHANGELOG.md) for version history and changes.