 # include <stdio.h>//��һ˵һ�������ú�������ݣ�����ṹ������֮��ĸ߼�д��
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
//��ϣ�����ѵĴ������Ƕ��ģ����������Լ���ЧΪ��
//ʱ�̼�ס�ɶ��ԡ���ά���ԡ�����ֲ��
//ͬʱ����ϣ�����Ѷೢ�ԴӲ�ͬ�Ƕ�ȥд���룬����ഴ�첻ͬ�Ľ��ⷽ������
//ֻҪ����д������debugû���⣬���кβ�����

