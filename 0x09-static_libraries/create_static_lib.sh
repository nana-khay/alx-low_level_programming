#!/bin/bash

# Compile all .c files and create a static library

# Compile .c files into object files
gcc -c *.c

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm -f *.o

echo "Static library liball.a created successfully."


