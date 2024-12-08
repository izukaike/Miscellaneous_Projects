#!/bin/bash
temp=0

start=$(date +"%s")

for(( i = 0; i < 1000000; i++));
do
	temp=$((temp + 1))
done

end=$(date +"%s")
ela=$(((end-start)*1000))
echo $ela


