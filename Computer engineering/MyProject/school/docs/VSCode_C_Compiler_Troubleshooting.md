# VS Code: Fixing C Compiler Problems on Windows

This workspace is now configured to compile `.c` files with:

- `gcc.exe`: `C:\msys64\ucrt64\bin\gcc.exe`
- `gdb.exe`: `C:\msys64\ucrt64\bin\gdb.exe`

## What was configured

- `.vscode\tasks.json`
  - Default build task now uses `gcc`
  - Adds `-std=c17 -Wall -Wextra -g`
- `.vscode\launch.json`
  - Debug configuration uses `gdb`
  - Runs the `gcc` build task before debugging
- `.vscode\settings.json`
  - Forces `*.c` files to open as C
  - Sets VS Code C/C++ extension compiler path to `gcc`
  - Sets Code Runner for C to use `gcc`
- `.vscode\c_cpp_properties.json`
  - IntelliSense uses `gcc`
  - C standard is set to `c17`

## How to build and run

1. Open the folder `D:\Computer engineering` in VS Code.
2. Open a `.c` file.
3. Build with `Ctrl+Shift+B`.
4. Debug with `F5`.

If you use the Code Runner extension:

1. Make sure the file ends with `.c`
2. Click `Run Code`
3. It should now call `gcc`, not `g++`

## How to confirm you are using C and not C++

Check these points:

1. The file name must end with `.c`
2. In the bottom-right of VS Code, the language mode should say `C`
3. In `.vscode\tasks.json`, the command should be `gcc.exe`
4. In `.vscode\settings.json`, `C_Cpp.default.compilerPath` should point to `gcc.exe`
5. If you use Code Runner, `code-runner.executorMap.c` should point to `gcc.exe`

## Basic troubleshooting checklist

### Problem: VS Code still behaves like it is compiling with g++

Try this:

1. Close the file and reopen it
2. Check the language mode at the bottom-right and switch it to `C`
3. Run `Ctrl+Shift+P`
4. Choose `Tasks: Run Build Task`
5. Select `C: Build active file with gcc`

If you normally click a play button:

- The C/C++ extension play button should use the workspace task
- The Code Runner play button uses its own command, which is now set to `gcc`

### Problem: `gcc` is not found

Check in terminal:

```powershell
where gcc
```

Expected result:

```text
C:\msys64\ucrt64\bin\gcc.exe
```

If nothing appears:

1. Install or repair MSYS2/MinGW
2. Make sure `C:\msys64\ucrt64\bin` exists
3. Restart VS Code

### Problem: The compiler runs, but the program still does not build

That usually means the issue is in the C code, not in the compiler setup.

Common examples:

- Passing the wrong pointer type
- Using `%s` with a non-string value
- Missing `&` or adding `&` where it should not be used
- Forgetting `return 0;` in `main`

## Useful commands

Check GCC:

```powershell
where gcc
gcc --version
```

Check GDB:

```powershell
where gdb
gdb --version
```

## Files changed

- `D:\Computer engineering\.vscode\tasks.json`
- `D:\Computer engineering\.vscode\settings.json`
- `D:\Computer engineering\.vscode\c_cpp_properties.json`
- `D:\Computer engineering\.vscode\launch.json`

