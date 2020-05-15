#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//*================*
FILE *in, *out;
//*================*

void main()
{ char input_file[20], *p; 
  char output_file[20],*p1;
  
  int i,d;
  int g;
  printf("Vvedite name input file\n");
  fgets(input_file,20,stdin);

  printf("Vvedite name output file\n");
  fgets(output_file,20,stdin);


  p=input_file;
  for(int i=0; i<=strlen(input_file);i++)
  {
  	printf("%c",*(p+i));
  }
  printf("\n");
  p1=output_file;
  for(int j=0; j<=strlen(output_file);j++)
  {
  	printf("%c",*(p1+j));
  }

  if((in=fopen("/home/geny/lessonsc/hello.c","rb"))==NULL)
 {
 	printf("Cannot open file to reading\n");

 }
 

 if((out=fopen("/home/geny/lessonsc/reshl.c","wb"))==NULL)
 {
  printf("Cannot open file to writing\n");

 }

while ((i=fgetc(in))!=EOF)
{
  if (i=='/')
  { 
     d=fgetc(in);
    if(d='/')
    { 
      g=fgetc(in);
      while(g!='\n')
      {
        g=fgetc(in);  
        fputc(' ',out);
      }fputc('\n',out);
    }
    else
    {
      if (d=='*')
      {
        g=fgetc(in);
        while(g!='/')
        {
          g=fgetc(in);
          fputc(' ',out);
        } 
      }
    }
  }  
 else
  {  
    fputc(i,out);
  }
}

fclose(in);
fclose(out);



}