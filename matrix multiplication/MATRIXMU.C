#include<stdio.h>
#include<conio.h>
void main()
{
int a[30][30],b[30][30],m[30][30],row,col,row2,col2,i,j,k;
clrscr();
printf("enter the rows and colums of 1st matrix\n");
scanf("%d%d",&row,&col);
printf("enter the rows and colums of 2nd matrix\n");
scanf("%d%d",&row2,&col2);
if(col==row2)
{
 printf("enter the elements of first matrix\n");
 for(i=0;i<row;i++)
 {
  if(i>0)
  {
  printf("enter the elements of next row\n");
  }
  for(j=0;j<col;j++)
  {
  scanf("%d",&a[i][j]);
  }
 }
 printf("enter the elements of second matrix\n");
 for(i=0;i<row2;i++)
 {
  if(i>0)
  {
  printf("enter the elements of next row\n");
  }
  for(j=0;j<col2;j++)
  {
  scanf("%d",&b[i][j]);
  }
 }
 for(i=0;i<row;i++)
 {
  for(j=0;j<col2;j++)
  {
  m[i][j]=0;
  for(k=0;k<col2;k++)
  {
  m[i][j]=m[i][j]+a[i][k]*b[k][j];
  }
  }
 }
 for(i=0;i<row;i++)
 {
  for(j=0;j<col2;j++)
  {
  printf("%2d",m[i][j]);
  }
  printf("\n");
 }
}
else
{
printf("this matrix multiplication is not possible");
}
 getch();
}