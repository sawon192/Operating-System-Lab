
# Banker's Algorithm

## Objective

The objective of this program is to implement the Banker's Algorithm using the C programming language and determine whether the system is in a safe state.

## Theory

Banker's Algorithm is a deadlock avoidance algorithm used in operating systems. It checks whether the available resources can be allocated to all processes without causing a deadlock. If every process can complete successfully, the system is said to be in a safe state.

## Algorithm

1. Enter the number of processes and resources.
2. Enter the Allocation Matrix.
3. Enter the Maximum Matrix.
4. Enter the Available Resources.
5. Calculate the Need Matrix.
6. Check whether each process can be executed with the available resources.
7. If a process can execute, release its allocated resources after completion.
8. Repeat until all processes are completed.
9. Display the safe sequence if the system is safe.

## Language Used

* C

## Files Included

* Banker.c
* SampleInput
* SampleOutput
* Screenshot.png

## Sample Input

```
Processes = 5
Resources = 3

Allocation Matrix
0 1 0
2 0 0
3 0 2
2 1 1
0 0 2

Maximum Matrix
7 5 3
3 2 2
9 0 2
2 2 2
4 3 3

Available Resources
3 3 2
```

## Sample Output

```
System is in a SAFE state.

Safe Sequence:
P1 P3 P4 P0 P2
```

## Conclusion

In this lab, I implemented the Banker's Algorithm using C. The program checks whether the system is in a safe state and displays the safe sequence if one exists. This algorithm helps avoid deadlocks by allocating resources safely.
