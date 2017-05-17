# Get Rectangle Mate!
Time limit: -
Memory limit: -

## Description
In Euclidean plane geometry, a rectangle is a quadrilateral with four right angles[[1]](https://en.wikipedia.org/wiki/Rectangle). We can define a rectangle data structure using only two data points.

In example, we have two points in euclidian space, point_1(1, 1) and point_2(3, 3). The correspondent rectangle can be define like picture below.

![Single Rectangle](https://github.com/basisdatalab/research_group/blob/master/assignment/bonus_1/single.png "Single Rectangle")

Assume the first points describe the bottom left corner and the second one describe the top right corner.

Make a program that receive 2 rectangles and return whether those rectangles overlap or not.

## Input Format
Input will consist of 2 lines. 
The first line will describe the first rectangle, consist of 4 integer p(-99 < p < 99), where the first two will define first point and the rest for the second one.
The second line will describe the second rectangle, consist of 4 integer q(-99 < q < 99), where the first two will define first point and the rest for the second one.

## Output Format
Output is a boolean whether those rectangles overlap or not.

## Sample Input
```
1 1 3 3
2 1 4 5
```

## Sample Output
```
True
```

## Sample Visualisation

![Double Rectangle](https://github.com/basisdatalab/research_group/blob/master/assignment/bonus_1/double.png "Double Rectangle")
