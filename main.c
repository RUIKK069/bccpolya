#include<stdio.h>
int main(void)
{
int Y,Z,n,raizint,AUX;
double X,raiz,raizdec;
Y=2;
raiz=0;
raizint=0;
raizdec=0;
n=0;
scanf("%1f",&X);
while (n<=X) {
  if (X>n*n){
  n=n+1;
  }else{
  if (X=n*n) {
  raiz=n;
  n=X+1;
  }else{
  raizint=n-1;
  n=X+1;
  }}}
if ((raiz=0)&&(X!=0)){
  if (Y=0){
  raiz=raizint;
  }else{
  AUX=1;
  Z=1;
  raizdec=raizint;
  while (AUX<=Y){
  raizdec=raizdec+(1/(10*Z));
  if (X>raizdec*raizdec){
  }else{
  if (X=raizdec*raizdec){
  AUX=99;
  }else{
  raizdec=raizdec-(1/(10*Z));
  AUX=AUX+1;
  Z=Z*10;
  }}}}
  raiz=raizdec;
  }
printf("A raiz quadrada é %2f\n",raiz);
return 0;
  }
