// labo00.c Patrick Fluck

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(int argc, const char* argv[])
{
printf("%d\n", argc);

for(int8_t i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);	
}
return argc;			
}