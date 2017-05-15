# Tracking Moving Object
Time limit: -
Memory limit: -

## Description
The idea of tracking without GPS is calculate using travelled distance and angle of distance traveled. With simple geometry we can estimate the current position of moving object.
Make a program that can accept distances and angles then determine the final location of the object.

## Input Format
The first line of input is integer N (0 < N < 101), where N is the number of directions.
The next N-line consist of two inputs. L (-1 < L < 361) is a float number represent the angle. D (0 < D < 101) is a float number represent the distance.

## Output Format
Output is a single line containing a final position of the object (assume the object is located at (0,0) at first).

## Sample Input
```
3
30 6
60 7
45 9
```

## Sample Output
```
x = 15.1 
y = 15.43
```

### In Depth Explanation
In the first direction, we got an angle of 30° and distance of 6.
<img src="https://github.com/basisdatalab/research_group/blob/master/assignment/assignment_5/assets/1.jpg" alt="1" width="500"><br>
We can use cosinus to find the x location <br>
<img src="https://github.com/basisdatalab/research_group/blob/master/assignment/assignment_5/assets/2.jpg" alt="2" width="500"><br>
and for y location we use sinus. <br>
<img src="https://github.com/basisdatalab/research_group/blob/master/assignment/assignment_5/assets/3.jpg" alt="3" width="500"><br>
Voila, we get the new location now. <br>
<img src="https://github.com/basisdatalab/research_group/blob/master/assignment/assignment_5/assets/4.jpg" alt="4" width="500"><br>

###### May the 4<sup>th</sup> be with you 
