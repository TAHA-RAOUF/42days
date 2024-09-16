#!/bin/sh
cat /etc/passwd | cut -d ':' -f1 | grep -v '^#' | awk '!(NR%2)' | rev | sort -r | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'NR>=FT_LINE1 && NR<=FT_LINE2' | xargs | sed 's/ /, /g' | tr '\n' '.'
