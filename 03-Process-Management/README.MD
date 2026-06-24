
# Process Management

## Objective

The objective of this lab is to understand how processes are created and managed in an operating system using C programming.

## Theory

A process is a program that is currently running. The operating system creates, schedules, and terminates processes. In Linux, the `fork()` system call is used to create a new process. The new process is called the child process, while the original process is called the parent process.

## Programs Included

* Process Creation
* Fork Example
* Parent and Child Process
* Zombie Process
* Orphan Process

## Language Used

* C

## Files Included

* ProcessCreation.c
* ForkExample.c
* ParentChild.c
* ZombieProcess.c
* OrphanProcess.c
* Screenshot.png

## How to Compile

```bash
gcc ProcessCreation.c -o process
./process
```

## Conclusion

In this lab, I learned how operating systems create and manage processes. I also understood the difference between parent and child processes, zombie processes, and orphan processes using simple C programs.
