#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(int argc,char* argv[])
{ 
  printf("current process id is : %d\n",getpid()); 
  system("ps -ef");
  printf("No of arguments passed : %d\n",argc);
  for(int i=0;i<argc;i++)
     printf("%s \n",argv[i]);

}	
//comment from github
