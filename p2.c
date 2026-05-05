#include<stdio.h>
#include<string.h>
int main()
{
  char str1[300],str2[100],str3[100];
  printf("enter the string-1 value \n");
  scanf("%s",str1);
  printf("enter the string-2:%s",str2);
  scanf("%s",str2);
  
  //for(int i=0;i<10;i++)
   //{ str2[i] = 'r';}
   
  if(strcmp(str1,str2)==0)
    { printf("strings are equal\n"); }
  else
    { printf("strings are not equal\n"); }
    
  strcat(str1,str2);
  printf("concantenated string: %s size %ld\n",str1,strlen(str1));
  
  strcpy(str3,str1);
  printf("string copy of str1-%s in str3 is %s",str1,str3); 
    
  printf("\n string length of str1 is %ld",strlen(str1));
  char *ptr;
  strchr(str1,'g');
  ptr = str1;
  printf("\n %c",*ptr);
  
}
