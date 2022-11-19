int main() {
  int sum1=100+390;
  int sum2=sum1+390;
  int sum3=sum1+sum1;

  printf("%d\n",sum1);
  printf("%d\n",sum1);
  printf("%d\n",sum1);

  int x=60;
  int y=40;
  printf("%d\n",x>60 && x<40);
  int myint=55;
  float myfloat=6.66;
  char mychar='B';
  printf("%lu\n",sizeof(myint));
  printf("%lu\n",sizeof(myfloat));
  printf("%lu\n",sizeof(mychar));

  int i=0;
  do {
   printf("%d\n",i);
   i++;
  }
    while(i<5);


  
    for(i = 0;i < 10;i++) {
      if (i==4) {
        continue;
      }
      printf("%d\n",i);
    } 
  int myage=55;