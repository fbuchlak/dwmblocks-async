#!/bin/bash

cat /sys/class/power_supply/BAT0/capacity | awk {'print $1"%"'}
