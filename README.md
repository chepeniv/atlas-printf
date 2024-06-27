project: atlas-printf

BASIC PROJECT GUIDLINES:\
no global variables\
no more than five functions per file\
put function signatures(prototypes) in main.h\
all header files should be include-guarded\
do not clone/fork project repos with the same name\
authorized functions and macros:
	- write
	- malloc
	- free
	- va_start
	- va_end
	- va_copy
	- va_arg

checker compilation:\
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format \* .c\
do not push any .c files with a main() function in the root directory\
if edge-case behavior is not specified, mimic printf
