#!/bin/bash

if [ $# -eq 0 ]; then
	echo "No arguments supplied"
else
	for i in $@
		do
            cd /workspaces/42-School-Exam-Rank-02/AnaTerMay
            cd "Level 4"
			mkdir "$i"
            cd "$i"
            touch "$i.c"
            touch subject.md
            cd /workspaces/42-School-Exam-Rank-02/AnaTerMay
		done
fi