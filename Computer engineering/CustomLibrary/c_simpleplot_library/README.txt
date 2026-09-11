
SimplePlot (Beginner)

This library does NOT create graphical windows.
It prints simple ASCII output in the terminal.

Compile:
gcc example.c simpleplot.c -o example

Run:
./example

API:
int arange(start, stop, step, output, maxSize);

void pltGraph(type, a, b, c, d, x, n);

Currently only array a is used. b, c, and d are reserved for future graph types.
