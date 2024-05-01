#!/bin/sh
echo "Prime numbers 1 to 100: "
i = 1;
for i in range 1..100
do
    if [ $i % 2 == 0 ]; then
        echo "$i "
done