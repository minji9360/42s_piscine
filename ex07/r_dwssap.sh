#!/bin/sh
cat /etc/passwd | grep -v ^# | sed -n "n;p" | cut -d : -f 1 | rev | sort -r |  
