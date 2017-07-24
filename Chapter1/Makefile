gcc=gcc
astyle=astyle
rm=rm
HOME=/home/anu/exeDir
% : %.c
	$(gcc) $@.c -g -o $(HOME)/$@
	$(astyle) $@.c
	$(rm) -f $@.c.orig  
