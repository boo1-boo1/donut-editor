# Donut: A Simple Text Editor in C

## Build Instructions

- **macOS Instructions**
    1. Install XCode Build Tools.
        ```
        xcode-select --install
        ```
    2. Run the `make` command.
- **Linux Instructions**
    1. Install `make` with your distro's package manager.
        ```
        sudo apt install make # For Debian/Ubuntu
        sude dnf install make # For Fedora
        sudo pacman -Sy make  # For Arch Linux
        ```
    2. Run the `make` command.
- **Windows Instructions**
    - Windows is very different from UNIX-based systems and requires extensive changes to the code. As of now, Windows is unsupported.
## Usage

After building, the build binary is in the `build` folder. For example, to open the source code of donut in donut

```
./build/donut src/donut.c
```
### Common Commands
- `Ctrl-S` to Save
- `Ctrl-Q` to Quit (Multiple times if there are unsaved changes)
- `Ctrl-F` to find. Enter the search prompt and use arrow key to browse results.
- `Ctrl-h` is an alternative to Backspace.
- `Ctrl-l` is an alternative to ESC.
- `Home` and `End` to jump to beginning and end of the line.
- `PgUp` and `PgDown` to jump to beginning and end of the screen.

