#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
	fd_set rfds;
	struct timeval tv;
	int retval;
	int result =1;
	retval=0;
	while(!retval){
		tv.tv_sec=1;
		tv.tv_usec=0;
		FD_ZERO(&rfds);
		FD_SET(0,&rfds);
		retval=select(1,&rfds,NULL,NULL,&tv);
		if(retval==0){
			printf("enter data \n");
		}
	}    
	printf("Finally you entered the data...\n");
	char a[100];
	fscanf(stdin,"%s",a);
	printf("Data is  %s \n",a);   
return 0;
}
