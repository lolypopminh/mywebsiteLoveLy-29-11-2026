
#ifndef SIMPLEPLOT_H
#define SIMPLEPLOT_H

typedef enum {
    GRAPH_LINE,
    GRAPH_BAR,
    GRAPH_SCATTER
} GraphType;

/* Create an array like numpy.arange().
 * Returns the number of elements written to output.
 */
int arange(double start, double stop, double step,
           double output[], int maxSize);

/* Beginner-friendly plotting function.
 * x: X-axis values
 * n: number of X values
 * a,b,c,d: optional data arrays (use NULL if unused)
 *
 * GRAPH_LINE    -> uses a
 * GRAPH_BAR     -> uses a
 * GRAPH_SCATTER -> uses a
 *
 * This library prints an ASCII graph in the terminal.
 */
void pltGraph(GraphType typeOfGraph,
              const double a[],
              const double b[],
              const double c[],
              const double d[],
              const double x[],
              int n);

#endif
