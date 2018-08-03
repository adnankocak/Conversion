#include <stdio.h>

int start(int number)
{
    int i;	
    for(i = 31;i >= 0;i--)
	if(((number >> i) & 0x1) == 1)
	   break;		
    return i;		
}

void printBinary(int number)
{
    int i;
    printf("\nthe number in binary is: ");
	
    for(i = start(number);i >= 0;i--)
	printf("%d",((number >> i) & 0x1));
}

int main()
{
    int inputNumber;
	
    printf("\t\t32 Bit Converter (decimal --> binary)\n\n");
    printf("\nenter a integer number: ");
    scanf("%d",&inputNumber);
	
    printBinary(inputNumber);
    
    fflush(stdin);
    getchar();
	
    return 0;
}
