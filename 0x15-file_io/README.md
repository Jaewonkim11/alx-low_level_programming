File I/O in C
File I/O in C is very similar to Matlab. There are two main differences. One, we have to type the FILE variable. Two, we read one value (or a single line of values) at a time, whereas by default in Matlab, you may read many values at once.

The basic steps for using a File in C are always the same:

Create a variable of type "FILE*".

Open the file using the "fopen" function and assign the "file" to the variable.

Check to make sure the file was successfully opened by checking to see if the variable == NULL. If it does, an error has occured.

Use the fprintf or fscanf functions to write/read from the file. Usually these function calls are placed in a loop. In the case of reading data, usually, the data is read in and placed in an array, but sometimes we process the data "on the fly" (i.e., we do not store the data, we process it and create a result directly before reading any more data.
