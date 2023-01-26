#!/bin/bash

sum=0
counter=0
for number in $(cat $1)
do
sum=$(($sum+$number))
counter=$(($counter+1))
done
avg=$(($sum/$counter))
echo "Average: $avg"