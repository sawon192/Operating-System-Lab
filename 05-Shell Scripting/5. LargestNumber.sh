#!/bin/bash

echo "Enter three numbers:"
read a b c

largest=$a

if [ $b -gt $largest ]
then
    largest=$b
fi

if [ $c -gt $largest ]
then
    largest=$c
fi

echo "Largest Number = $largest"
