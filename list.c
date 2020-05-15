#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//---------------------------------------------------------------
/*Структура для работы с файлом*/ 
 typedef struct                       
 { char Family[9];
   char expirience[2];
 }emplor;
//---------------------------------------------------------------
void expfortext(char fam[]);
void expforarray(char arr[][9],int ar[],char fam1[]);
void fndemlrtxt(int num);
void fndemlrarr(char arr[][9],int ar[],int num);
void maxexptxt(void);
void maxexarr(char arr[][9],int ar[]);
void printmax(int n);
//---------------------------------------------------------------
 FILE *in;               //Указатель на файл
//---------------------------------------------------------------
void main(void)
{ 
 char Family[3][8]={"Petrovan","Calashik","Mishanov"};//массив для работы с файлом
 char Family2[3][9]={"Zemscov","Vaserman","Jvanidze"};//ещё один массив
 int expirience[3]={1,2,3};//массив для работы с файлом
 int expirience2[3]={5,5,7};//для второго массива
 char family[10];
 int var,number,number1; 

//---------------------------------------------------------------
// для текстового файла :открыли и заполнили текст
     if((in=fopen("/home/geny/lessonsc/list.txt","w"))==NULL)//Путь меняется в зависимости он нахождения файла list.txt
    {
   	 	printf("Cannot open file.\n");
      exit(1);
    }     
 
      fprintf(in,"%s\n","***List employers****");
   	 	fprintf(in,"%s","Family");
   	  fprintf(in,"%s","      ");
   	  fprintf(in,"%s\n","Expirience");
        	   
   	 for(int i=0;i<=2;i++)
   	 {
       for(int j=0; j<=7;j++)
       {
   	    fprintf(in,"%c",Family[i][j]);
   	   }fprintf(in,"%s","    ");  
   	    fprintf(in,"%d\n",expirience[i]);
   	 }
   	fclose(in);    
 //-------------------------------------------------------------- 
 //для массива :заполнили массив
   	    printf("%s\n","***List employers****");
   	 	  printf("%s","Family");
   	    printf("%s","      ");
   	    printf("%s\n","Expirience");
   	    for(int k=0;k<=2;k++)
   	    {
           for(int h=0; h<=8;h++)
           {
        	   printf("%c",Family2[k][h]);
           }printf("%s\t","  ");  
   	       printf("%d\n",expirience2[k]);
        } 
        printf("\n");
 //---------------------------------------------------------------
 // Начнем пожалуй задания а, б, в для задачи список       
        printf("Choose variant\n");
        scanf("%d",&var);

        switch(var)
        {
         case 1:printf("Vvedite familiu\n");//а)работа с текстовым файлом
                scanf("%s",family); 
                expfortext(family);
         break;
         case 2:printf("Vvedite familiu\n");//а)работамассив
                scanf("%s",family); 
                expforarray(Family2,expirience2,family);
         break;
         case 3:printf("Vvedite nuznyi staj\n");//б)текстовый файл
                scanf("%d",&number);                         
                fndemlrtxt(number);
         break;
         case 4:printf("Vvedite nuznyi staj\n");//б)массив
                scanf("%d",&number); 
                fndemlrarr(Family2,expirience2,number);
         case 5: maxexptxt();//в)текстовый файл
         break;
         
         case 6:maxexarr(Family2,expirience2);//в)массив
         break;
         default:

          break;
        }
   
}     
//-------------------------------------------------------------------
 void expfortext(char fam[])
 {
     // a для текста :определяем стаж по фамилии
   emplor em[4];
   int n=0; 
        if((in=fopen("/home/geny/lessonsc/list.txt","r"))==NULL)
        {
   	 	 printf("Cannot open file fo reading.\n");
         exit(1);
        }
        
        while(fscanf (in, "%s%s", em[n].Family,em[n].expirience)!=EOF)
        { 
        	if(strcmp(em[n].Family,fam)==0)
           { 
           	printf("%s years\n", em[n].expirience);
       	   }
       	  n++;
       	  	    
       	}
	    
	fclose(in);    
 }  

//-------------------------------------------------------------------          
void expforarray(char arr[][9],int ar[],char fam1[])
{    // а для массива :определяем стаж по фамилии
       for(int k=0;k<=2;k++)
   	    { if(strcmp(arr[k],fam1)==0)
   	      {	
           for(int h=0; h<=8;h++)
           {      
           }       
          printf("%d years\n",ar[k]);
          }      
   	    } 	              
}
//-------------------------------------------------------------------------
void fndemlrtxt(int num)
{
    // б для текстa :по введеному стажу определяем список фамилий с таким стажем
   emplor em[4];
   int n=0;
   int flag;

        if((in=fopen("/home/geny/lessonsc/list.txt","r"))==NULL)
        {
   	 	 printf("Cannot open file fo reading.\n");
         exit(1);
        }        
        while(fscanf (in, "%s%s", em[n].Family,em[n].expirience)!=EOF)
        {   
            if(atoi(em[n].expirience)==num)
           { 
           	printf("Family is %s \n", em[n].Family);
           }
       	
       	  if((em[n].expirience!="1")&&(em[n].expirience!="2")&&(em[n].expirience!="3"))
       	  {
       	  	printf("Not found employers\n");
       	  }
       	   n++;  	    
       	} 

	fclose(in);  
}

//----------------------------------------------------------------------------
void fndemlrarr(char arr[][9],int ar[],int num)
{ //б для массива :по введеному стажу определяем список фамилий с таким стажем
  printf("Family is:\n");
  for(int k=0;k<=2;k++)
  { 
      for(int h=0; h<=7;h++)
     	
      { if(ar[k]==num)
      	{
          printf("%c",arr[k][h]);  
        }
      }       
      printf(" ");    
  } 	              
}
//---------------------------------------------------------------------------
void maxexptxt(void)
{
    // в для текстa :список фамилий с наибольшим стажем
   emplor em[5];
   int n=0;
   int max=0;
   int val;
        if((in=fopen("/home/geny/lessonsc/list.txt","r"))==NULL)
        {
   	 	 printf("Cannot open file fo reading.\n");
         exit(1);
        }        

       	while(fscanf (in, "%s%s" ,em[n].Family,em[n].expirience)!=EOF)
        {  
           if(atoi(em[n].expirience)>=max)
           { 
               max=atoi(em[n].expirience);                 
           }
           else
           {
           	  max=atoi(em[n-1].expirience);
           	  printf("%d%d\n",atoi(em[n-1].expirience),max); 
           } 

          n++;
       	} 
       
        printmax(max);     	   
	fclose(in);  
}
//--------------------------------------------------------------------------
void maxexarr(char arr[][9],int ar[])
{
  //в для массива :список фамилий с наибольшим стажем
 int max=0;
 for(int i=0;i<=2;i++)
 { if(ar[i]>=max)
   {
   	max=ar[i];
   }
   else
   {
   	max=ar[i-1];
   }
 }
  printf("Family is:\n");
  for(int k=0;k<=2;k++)
  { 
      for(int h=0; h<=7;h++)
     	
      { if(ar[k]==max)
      	{
          printf("%c",arr[k][h]);  
        }
      }       
      printf(" ");    
  }
}
//--------------------------------------------------------------------------
/*Для вывода тестового файла пришлось  отдельную функцию писать*/
 void printmax(int n)
 {  emplor em[5];
 	int z=0;

   if((in=fopen("/home/geny/lessonsc/list.txt","r"))==NULL)
   {
   	 printf("Cannot open file fo reading.\n");
     exit(1);
   }       
        while(fscanf (in, "%s%s", em[z].Family,em[z].expirience)!=EOF)
        {
           if(atoi(em[z].expirience)==n)
           { 
           	printf("Family is %s \n", em[z].Family);
           }

          z++;
        } 
    fclose(in);

 }