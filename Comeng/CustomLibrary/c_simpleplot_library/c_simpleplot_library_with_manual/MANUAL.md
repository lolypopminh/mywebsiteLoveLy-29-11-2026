
# SimplePlot User Manual

## Overview

SimplePlot is a beginner-friendly C library that provides:

- `arange()` – create a sequence of numbers like `numpy.arange()`
- `pltGraph()` – print simple ASCII graphs in the terminal

---

# Installation

Compile your program:

```bash
gcc example.c simpleplot.c -o example
```

Run:

```bash
./example
```

---

# Header

```c
#include "simpleplot.h"
```

---

# Graph Types

```c
GRAPH_LINE
GRAPH_BAR
GRAPH_SCATTER
```

Example:

```c
pltGraph(GRAPH_LINE, y, NULL, NULL, NULL, x, n);
```

---

# arange()

Prototype:

```c
int arange(double start,
           double stop,
           double step,
           double output[],
           int maxSize);
```

## Parameters

| Parameter | Meaning |
|-----------|---------|
| start | Starting value |
| stop | Stop before this value |
| step | Increment |
| output | Array to store values |
| maxSize | Maximum capacity |

Example:

```c
double x[100];

int n = arange(0, 5, 1, x, 100);
```

Result:

```
x = {0,1,2,3,4}
n = 5
```

---

# pltGraph()

Prototype:

```c
void pltGraph(
    GraphType type,
    const double a[],
    const double b[],
    const double c[],
    const double d[],
    const double x[],
    int n
);
```

Currently only array **a** is used.

Use `NULL` for unused arrays.

Example:

```c
pltGraph(GRAPH_LINE,
         y,
         NULL,
         NULL,
         NULL,
         x,
         n);
```

---

# Complete Example

```c
double x[100];
int n = arange(0,5,1,x,100);

double y[100];

for(int i=0;i<n;i++)
    y[i]=x[i]*x[i];

pltGraph(GRAPH_LINE,
         y,
         NULL,
         NULL,
         NULL,
         x,
         n);
```
