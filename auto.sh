#!/bin/bash

if [ "$1" == "kill" ]; then
        pkill qemu-system-x86;

elif [ "$1" == "commit_all" ]; then
        echo "Nothing"

elif [ "$1" == "find" ]; then
	find "$2" -type f -exec grep -H "$3" {} \;
fi



