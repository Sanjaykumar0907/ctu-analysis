#make file - this is a comment section

#CC=/volume/hab/Linux/Ubuntu-12.04/x86_64/llvm/7.0/current/bin/clang  #compiler
#CC=gcc  #compiler
#CC=/host/contrail-ubm-ats.ccp/b/ats/work/static-analysis/psd-llvm-9/install/bin/clang

all:
	gcc -c sample_ctu.c util.c 

clean:
	rm -rf *.o
