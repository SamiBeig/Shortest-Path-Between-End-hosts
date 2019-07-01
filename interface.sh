#!/bin/bash
#A sample bash script by Sami

input=$1

case $input in 
	"bellman ford" )
		echo "You're already in bellman ford!" ;;
	"cerf" )
		echo "Type in mtr 10.10.1.1 --report --no-dns" ;;
	"knuth" )
		echo "Type in mtr 10.10.8.2 --report --no-dns" ;;
	"lovelace" )
		echo "Type in mtr 10.10.4.1 --report --no-dns" ;;
	"hopper" )
		echo "Type in mtr 10.10.3.1 --report --no-dns" ;;
	"baran" )
		echo "Type in mtr 10.10.5.2 --report --no-dns" ;;
esac