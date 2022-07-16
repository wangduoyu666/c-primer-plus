 # include <stdio.h>//有一说一，我想用后面的内容，比如结构、联合之类的高级写法
 void compare(double v1, double v2, double v3);
 int main(void)
 {
 double v1,v2,v3;
 double *pv1, *pv2, *pv3;
 v1 = 5.00;
 v2 =6.00;
 v3 = 7.00;
 pv1 = &v1;
 pv2 = &v2;
 pv3 = &v3;
 printf("value of pv1 =%p\n",pv1);
 printf("value of pv2 = %p\n",pv2);
 printf("value of pv3= %p\n", pv3);
 printf("\nthese nums's order by their value is %lf ,%lf, %lf.\n", v3, v2, v1);
 return 0;
 }
 void compare(double v1, double v2, double v3)
 {
 v1 = 5.00;
 v2 =6.00;
 v3 = 7.00;
 while(v1<v2 && v1<v3 && v2<v3)
 printf("these nums's order by their value is %lf ,%lf, %lf.\n", v3, v2, v1);
 return 0;
 }
//我希望自已的代码风格是多变的，但是整体以简洁高效为主
//时刻记住可读性、可维护性、可移植性
//同时，我希望自已多尝试从不同角度去写代码，就像多创造不同的解题方法那样
//只要我能写出来，debug没问题，又有何不可呢

