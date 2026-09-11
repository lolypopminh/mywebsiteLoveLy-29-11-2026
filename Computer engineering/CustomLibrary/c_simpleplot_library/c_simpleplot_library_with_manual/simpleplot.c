
#include "simpleplot.h"
#include <stdio.h>

int arange(double start,double stop,double step,double output[],int maxSize){
    if(step==0 || maxSize<=0) return 0;
    int i=0;
    if(step>0){
        for(double v=start; v<stop && i<maxSize; v+=step) output[i++]=v;
    }else{
        for(double v=start; v>stop && i<maxSize; v+=step) output[i++]=v;
    }
    return i;
}

static void print_points(const double x[], const double y[], int n, const char *label){
    printf("\n%s\n",label);
    printf(" X\tY\n");
    for(int i=0;i<n;i++)
        printf("%6.2f\t%6.2f\n",x[i],y[i]);
}

void pltGraph(GraphType typeOfGraph,
              const double a[],
              const double b[],
              const double c[],
              const double d[],
              const double x[],
              int n){
    (void)b; (void)c; (void)d;
    switch(typeOfGraph){
        case GRAPH_LINE:
            print_points(x,a,n,"LINE GRAPH (ASCII data)");
            break;
        case GRAPH_BAR:
            printf("\nBAR GRAPH\n");
            for(int i=0;i<n;i++){
                printf("%6.2f | ",x[i]);
                int bars=(int)a[i];
                if(bars<0) bars=0;
                for(int j=0;j<bars;j++) putchar('#');
                printf(" (%.2f)\n",a[i]);
            }
            break;
        case GRAPH_SCATTER:
            print_points(x,a,n,"SCATTER GRAPH (ASCII data)");
            break;
        default:
            printf("Unknown graph type.\n");
    }
}
