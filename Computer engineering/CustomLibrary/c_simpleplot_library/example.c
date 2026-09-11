
#include <stdio.h>
#include "simpleplot.h"

int main(void){
    double x[100];
    int n = arange(0,5,1,x,100);

    double y[100];
    for(int i=0;i<n;i++)
        y[i]=x[i]*x[i];

    pltGraph(GRAPH_LINE,y,NULL,NULL,NULL,x,n);
    pltGraph(GRAPH_BAR,y,NULL,NULL,NULL,x,n);

    return 0;
}
