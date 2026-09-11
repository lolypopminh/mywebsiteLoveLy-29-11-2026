
# SimplePlot API Design Notes

## Philosophy

The library is designed for beginners.

Instead of many complicated functions, one function handles multiple graph types.

```c
pltGraph(type, a, b, c, d, x, n);
```

Arguments:

- `type` : graph type
- `a` : primary Y data
- `b`, `c`, `d` : reserved for future use
- `x` : X-axis values
- `n` : number of elements

Future versions may use:

| Graph | Arrays |
|-------|--------|
| Line | a |
| Scatter | a |
| Bar | a |
| Multi-line | a,b,c,d |
| Stacked bar | a,b,c,d |
