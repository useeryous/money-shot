#!/bin/bash

key = unkey

read -s -p "enter key provied to you: " userKey
echo

if [[ "$userKey" == "$key" ]]; then 
    echo "accepted"

    #more stuff to do
else
    echo "sorry key doesnt match"
    exit 1
fi