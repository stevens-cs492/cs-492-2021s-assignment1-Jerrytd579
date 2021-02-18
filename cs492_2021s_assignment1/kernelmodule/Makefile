
obj-m += kernelModule.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

# Copied from: https://tldp.org/LDP/lkmpg/2.6/html/x181.html
