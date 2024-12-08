#!/bin/bash

echo "*Speed Test in uS*"
sleep 1
echo "*Shell Speed Test*"
./shell_timer.sh
sleep 1
echo "*Python Speed Test*"
python python_timer.py
sleep 1
echo "*Cpp Speed Test*"
./cpp


