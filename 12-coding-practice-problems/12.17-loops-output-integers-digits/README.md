# 12.17 PRACTICE: Loops**: Output integer's digits
Given an input positive integer, output each digit on its own line, starting with the rightmost digit. Ex: If the input is 935, the output is:

```
5
3
9
```
Hints:
* Use the mod operator (%) to get the rightmost digit.
* Mod by 10 to get the rightmost digit.
* Use a loop that keeps a current dividend (the number being divided). In each iteration, output the rightmost digit, then update the divisor by dividing by 10.
* End the loop when the divisor is 0.