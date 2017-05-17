# MBR Boost!
Time limit: -
Memory limit: -

## Description
The minimum bounding rectangle (MBR), also known as bounding box or envelope, is an expression of the maximum extents of a 2-dimensional object (e.g. point, line, polygon) or set of objects within its (or their) 2-D (x, y) coordinate system, in other words min(x), max(x), min(y), max(y)[[1]](https://en.wikipedia.org/wiki/Minimum_bounding_rectangle).
Make a program that receive a polygon and return a minimum bounding rectangle of the polygon.

## Input Format
The first line of input is integer N(0 < N < 30), where N is number of polygon corners position.
The next N line is a set of two integer. The first one is x position, and the other is y position.

## Output Format
4 lines of output, where each line is a set of two integer of the bounding rectangle.

## Sample Input
```
5
2 4
2 7
4 6
5 4
4 3
```

## Sample Output
```
2 7
5 7
5 3
2 3
```

## Sample Input Visualisation
![Input Visualise](https://github.com/basisdatalab/research_group/blob/master/assignment/bonus_3/input.png "Input Visualise")

## Sample Output Visualisation
![Output Visualise](https://github.com/basisdatalab/research_group/blob/master/assignment/bonus_3/output.png "Output Visualise")