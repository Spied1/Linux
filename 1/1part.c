#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main(){

int N; //num of files
int fd; // file

scanf("%d",&N);


char txt[3] = "txt";
for(int i = 0;i <= N;i++){
char Name[100] = "text_";

        
char HL[100] = "Hello world ";
char numb[10]; 
sprintf(numb, "%d", i);
strcat(HL,numb);  
strcat(Name,numb);  

strcat(Name,".txt");

fd = open(Name, O_RDONLY|O_WRONLY|O_CREAT);
write(fd, HL, sizeof(HL));
close(fd);
}
    return 0;
}
