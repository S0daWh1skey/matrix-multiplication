#include<stdio.h> 
#include<stdlib.h>
#define SIZE 100 //预定义要进行转置的矩阵最大大小为 100*100
//为了函数参数传递的方便，将行和列的具体大小定义为全局变量
int a_column;
int a_row ;
int b_row;
int c[SIZE][SIZE]={0};
//矩阵的输入函数
void inputMatrix(int a[][SIZE] , int n, int m){ 
 int i,j;
 for(i = 0;i < n;i++){
  for(j = 0;j < m;j++){
   scanf("%d",&a[i][j]);
  }
 }
}
//矩阵的输出函数
void outputMatrix(int c[][SIZE] , int n, int m){
 int i,j;
 for(i = 0;i < n;i++){
  for(j = 0;j < m;j++){
   printf("%d ",c[i][j]);  
  }
  printf("\n"); 
 }
}
//矩阵的乘法算
void matrixMultiplication(int a[][SIZE], int b[][SIZE]){
 int i,j,k;
 for(i = 0;i < a_column;i++)
 {
  for(j = 0; j < b_row ; j++)
  {
   for(k = 0; k < a_row;k++)
   {
    c[i][j] = c[i][j]+ a[i][k] * b[k][j];
   }
  }
 }
}
int main()
{ 
 //定义数组并初始化
 int a[SIZE][SIZE]={0};
 int b[SIZE][SIZE]={0};
 printf("请输入第一个矩阵的行数 : ");
 scanf("%d",&a_column);
 printf("\n请输入第一个矩阵的列数 :");
 scanf("%d",&a_row);
 //函数调用及主功能实现
 printf("\n请输入矩阵A( %d X %d 形式)\n" , a_column , a_row);
 inputMatrix(a, a_column , a_row); 
 printf("注意：根据数学原理，您将输入的第二个矩阵的行数为 %d\n",a_row);
 printf("请输入矩阵B的列数 : ");
 scanf("%d",&b_row);
 printf("\n请输入矩阵B( %d X %d 形式) : \n" , a_row , b_row);
 inputMatrix(b, a_row , b_row);
 //调用相乘函数
 matrixMultiplication(a,b);
 printf("A与B相乘后的矩阵C是:\n");
 outputMatrix(c, a_column , b_row);
 getchar();
 system("pause"); 
 return 0;
}
