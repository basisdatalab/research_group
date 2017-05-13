# Tyrannosaurus Regex
Time limit: -
Memory limit: -

## Description
Communication is the act of conveying intended meanings from one entity or group to another through the use of mutually understood signs and semiotic rules[[1]](https://en.wikipedia.org/wiki/Communication). 
With our current technology, communication can be very complex. If your name is Luke, your friend will message you with differents way of name, in example. "Lukeee, I'm your father", "Luukkkkeee, use the Force", etc.
Make a program that receive a strings and return whether the string including your name or not.

## Input Format
The first line of input is string S(3 < S < 20), where S is the name string.
The second line of input is integer N(0 < N < 25), where N is the number of strings that will be checked.
The next N lines of inputs are string str(3 < str < 100) that will be checked whether contains S or not.

## Output Format
N lines of boolean correspondent to the input strings.

## Sample Input
```
luke
3
I'm lukeee
Lluukkeee, why are you
Don't say that lukkkk
```

## Sample Output
```
True
True
False
```