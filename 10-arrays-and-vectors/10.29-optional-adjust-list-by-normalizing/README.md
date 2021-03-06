# 10.29 LAB: Adjust list by normalizing
![Ignore] [![lab.10.22]][10.22]

When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. This can be done by normalizing to values between 0 and 1, or throwing away outliers.

For this program, adjust the values by subtracting the smallest value from all the values. The input begins with an integer indicating the number of integers that follow.

Ex: If the input is:

```
5 30 50 10 70 65
```
the output is:

```
20 40 0 60 55
```
The 5 indicates that there are five values in the list, namely 30, 50, 10, 70, and 65. 10 is the smallest value in the list, so is subtracted from each value in the list.

For coding simplicity, follow every output value by a space, including the last one.

[Ignore]: https://flat.badgen.net/badge/icon/Ignore/red?icon=terminal&label
[Lab.10.22]: https://flat.badgen.net/badge/Duplicate/10.22/red
[10.22]: ../../10-arrays-and-vectors/10.22-optional-adjust-list-by-normalizing