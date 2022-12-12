Creating your own Dynamic library

1. Create your .c file/s to hold function definitions
2. Compile all .c file/s to get its equivelent object file this way gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic -c *.c
3. Now create the shared library gcc -shared *.o -o lib<libraryname>.so
4. Create an environmental variable so that the resolver can quickly locate the libray. you do export LD_LIBRARY_PATH=$PWD

To use shared library

1. Create program to use with shared library
2. Compile the program to its equivalent object file to use shared library gcc -Wall -Werror - Wextra -pedantic -std=gnu89 -c -fpic <filename>.c
3. Now compile the object file to link with shared library function gcc <filename>.o -L. -l<libraryname> -o <outputfilename> {it's optional doh}

Alternative way to creating your dynamic Library

1. Create all .c file/s
2. Compile them this way to create the shared library `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic *.c -shared -o lib<library_name>
3. Using the shared library to compile files
4. Create the c file/s
5. Compile them this way gcc -Wall -Werror -Wextra -pedantic -fpic <*.c or c_file_name.c> -L. -l<libname> -o <exe_filename>
