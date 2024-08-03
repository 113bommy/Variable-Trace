# Variable Trace - cpp & Python Data

### g++ / gdb version
```
g++-7 (Ubuntu 7.5.0-6ubuntu2) 7.5.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
```
GNU gdb (Ubuntu 12.1-0ubuntu1~22.04.2) 12.1
Copyright (C) 2022 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
```

## How to trace - cpp
### **g++ Compile Option**
```bash
g++-7 <cpp_filename> -o <compile_filename> -ggdb -O0
```

### **Variable Trace**
```bash
gdb <compile_filename>
(gdb) source trace.py
(gdb) trace <symbol_file> <cpp_filename> <save_filename> <input_filename>
```

### **Demo Usage**
```bash
g++-7 cpp_correct_test_0_0.cpp -o test -ggdb -O0
gdb test
(gdb) source trace.py
(gdb) trace user_def.txt cpp_correct_test_0_0.cpp test_save input.txt
```
#### Symbol_file contains the variable name that we have to trace.
#### After this command traced file test_save.json will be saved on base directory

#### Input of the cpp file is saved on './cpp_input' directory zip files.

