#include <stdio.h>
int main (){
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20];
  char str1[100];
  printf("\n\n Append multiple lines at the end of a text file :\n");
 printf("------------------------------------------------------\n"); 
printf(" Input the file name to be opened : ");
 scanf("%s",fname);		
    fptr = fopen(fname, "a"); 
    printf(" Input the number of lines to be written : ");
    scanf("%d", &n);
    printf(" The lines are : \n");  
    for(i = 0; i < n+1;i++)    {
    fgets(str,100,stdin);
    fputs(str, fptr);
  }
  fclose (fptr);
//----- Read the file after appended ------- 
	fptr = fopen (fname, "r");  
	printf("\n The content of the file %s is  :\n",fname);
	while(fgets(str1,100,fptr)!=NULL){
	 printf("%s",str1);
	}
 printf("\n\n");
    fclose (fptr);
//------- End of reading ------------------
  return 0;
}
