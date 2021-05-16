/*
#include<stdio.h>
int main()
{
	int a=1,i;
	int b=2;
	int *p1[2]={&a,&b};
	for(i=0;i<2;i++)
	printf("%d\n",*p1[i]);
	return 0 ;
}
	*/		//指针数组
 /*
#include<stdio.h>
int main()
{	int temp[5]={1,2,3,4,5};
	int (*p2)[5]=&temp;   //设置一个指针且指针容量为数组容量并指向数组
	int i;				//数组的名字等于数组的第一个元素  &temp第一个元素的位置
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(*p2+i));
	}
	return 0;
}
*/          //数组指针

/*
#include<stdio.h>
int main()
{
[][]
	return 0;
}

*/
/*
int sum (int x,int y)
{
        int z;
        z = x+y;
        return z;
}
#include<stdio.h>
int main()
{
        int a,b,w;
        printf ("please input two number :\n");
        scanf ("%d%d",&a,&b);
        w = sum(a,b);
        printf ("the overall number is %d\n",w);
        return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int i,f;
	i=scanf("%d",&f);
	printf("%d\n",i);
	return 0;
}
*/
/*
#include <stdio.h>

int main()
{
        float num = 0;
        double sum = 0;
        int status;

        do
        {
                printf("请输入合法的数字：");
                do
                {
                        sum = sum + num;
                        status = scanf("%f", &num);
                } while (getchar() != '\n' && status == 1);
        } while(status == 1);

        printf("结果是：%.2lf\n", sum);

        return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	char str[100];
	int (*p1)[100];

	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
  ;
float n  ,x , y;
	scanf("%f%f%f",&n,&x,&y);
	n=n-y/x;
	printf("%d",(int)n);
	return 0;
}
*/
/*#include<stdio.h>
int main()
{
	float c,i,k ;

 	i=9/2;
 	k=(int)4.7;
	c=(float)16/9;
	printf("%f\n",c);
	printf("%d\n",(int)i);
	printf("%d\n",k);
	return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
	float c;
	c=4.5;
	printf("%d\n",round(c));
	return 0 ;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
	float xa,ya,xb,yb,jue;
	scanf("%f%f%f%f",&xa,&ya,&xb,&yb);
	jue=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
	printf("%.3f",sqrt(jue));
	return 0 ;
}*/
//已知线段的两个端点的坐标A（Xa,Ya），
//B（Xb，Yb），求线段AB的长度。
/*
#include<stdio.h>
int main()
{
	long A ,B;
	scanf("%ld%ld",&A,&B);
	printf("%ld",A*B);

	return 0 ;
}*/
/*
#include<stdio.h>
int main()
{
long a,b;
scanf("%ld%ld",&a,&b);
printf("%ld",a*b);
return 0;
}


*/
/*
#include<stdio.h>
int main()
{
	int n , i ,sum=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	sum=sum*2;
	printf("%d",sum);
	return 0 ;
}
*/
/*
#include<stdio.h>
int main()
{
	int m ,n ,i,sum=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<n+1;i++)
	{
		if(i%2!=0)
		sum=sum+i;
	}
printf("%d",sum);
return 0 ;
}
*/
/*
#include<stdio.h>
int main()
{
	int m,n,i,sum=0;
	scanf("%d %d",&m,&n);
	if(m%2==0)
		m++;
	for(i=m;i<=n;i+=2)
		sum+=i;


	printf("%d",sum);

	return 0;
}
*/

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
int a;
scanf("%d",&a);
if (a%3==0 && a%5==0 && a%7==0)
printf("3 5 7");
else if (a%3==0 && a%5==0)
printf("3 5");
else if (a%3==0 && a%7==0)
printf("3 7");
else if (a%5==0 && a%7==0)
printf("5 7");
else if (a%3==0)
printf("3");
else if (a%5==0)
printf("5");
else if (a%7==0)
printf("7");
else
printf("n");
rerurn 0;
}
*/
/*
#include<stdio.h>
int main()
{


	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
 float t1,t2,s;
 int m;
	scanf("%d",&m);
	t1=27+23+m/3.0;
	t2=m/1.2;
	if (t1>t2)
	printf("Walk");
	else
	if (t1<t2)
	printf("Bike");
	else
	printf("All");
	return 0;
}
*/
/*
# include <stdio.h>

int main()
{
int a,b;
char c;
scanf("%d %d %c",&a,&b,&c);
if(c=='+')
printf("%d",a+b);
else if (c=='-')
printf("%d",a-b);
else if (c=='*')
printf("%d",a*b);
else if (c=='/')
{
if(b==0)
printf("Divided by zero!");
else
printf("%d",a/b);
}
else
printf("Invalid operator!");

return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,t,s,x;
	scanf("%f%f%f",&a,&b,&c);
	t=b*b-4*a*c;
	if(t==0)
	{
	x1=-b/(2*a);
	printf("x1=x2=%.5f",x1);
	}
	else
	if(t>0)
	{
	x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
	if(x1>x2)
	printf("x1=%.5f;X2=%.5f",x1,x2);
	else
	printf("x1=%.5f;X2=%.5f",x2,x1);
	}
	else
	if(t<0)
	{
	s= -b/(2*a);
	x= sqrt(4*a*c-b*b) / (2*a);
	printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",s,x,s,x);
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n , c ,z ;
	float m ,p;
	scanf("%d%d%d",&n,&c,&z);
	if(z>=n*c)
	{
		printf("0");
		return 0;
	}
	m=(float)z/c;
	p=n-m;if(p<0) p==0;
	printf("%d",(int)p);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n,x,i;
	double y;

	scanf("%d %d",&x,&n);
	y=x*(1+0.001);
	if(n>1)
	for(i=2;i<=n;i++)
	{

		y=y*(1+0.001);
	}
	printf("%.4lf", y);

	return 0;
 }
*/
/*
#include<stdio.h>
int main()
{
	int n ,i;
	float aver,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&aver);
		sum=sum+aver;

	 }
	 printf("%.4f",sum/n);
	 return 0;
}
*/



/*
#include<stdio.h>
int main()
{
	int n,x,i,r;
	double y;

	scanf("%d %d",&x,&n);
	y=x*(1+0.001);
	if(n>1)
	for(i=2;i<=n;i++)
	{

		y=y*(1+0.001);
	}
	printf("%.4lf", y);

	return 0;
 }

*/



/*
#include<stdio.h>
int  main()
{
	double N,K,F;
	int M,sum;
	N=N/100+1;
	scanf("%d%d",&N,&)
	F=200;
	sum=0;
	for(M=1;M<21;M++)
	{
		F=F*N;
		sum=sum+N;
		if(sum>=F)
	{
			printf("%d",M);
			return 0 ;		}

		printf("Impossible");
		return 0;
	}
	}
*/

/*
#include<stdio.h>
int main()
{
	int n,k,m=1,Impossible,i,y;
	scanf("%d",&n);
	y=200*(1+k/100);
	if(m<=20)
	{
	for(i=2;i<=20;i++)
		{
		y=y*(1+k/100);
		m=y/n;
		printf("%d",m);
	}
	}
	else if(m>20)
	printf("Impossible");





	return 0;
 }
*/



/*
#include<stdio.h>
int main()
{
	int n,k,i,last;
	double y,r;
	scanf("%d%d",&n,&k);
	r=(k*1.0/100+1);
	y=200*r;
	for(i=2;i<=20;i++)
		{
		y=y*r;
		last=n*(i+1);
		if(last>=y)
		{
		printf("%d",i+1);
		return 0;
		}
		}
		if(last<y)

		printf("Impossible");
		return 0 ;
 }
*/

/*
#include<stdio.h>
int main()
{	int k;
	double y,r;
	scanf("%d",&k);
	r=k*1.0/100+1;
	y=200*1.0*r;
	printf("%lf",y);
		return 0 ;
 }
*/
/*
#incldue<stdio.h>
int main()
{
	int i=1,k,a,b;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{

	}
}
*/
/*
#include<stdio.h>
int main()
{
	int a=1,b=1,k;
	int i,c;
	scanf("%d",&k);
	if(k==1)c=1;
	if(k==2)c=1;
	for(i=3;i<=k;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d",c);
	return 0;
}
*/
/*
#include<stdio.h>
int main ()
{
int k,a,b,c;
int i;
scanf("%d",&k);
a=1;b=1;
if(k==1)c=1;
if(k==2)c=1;
for(i=3;k>=i;i++){
c=a+b;
a=b;
b=c;
}
printf("%d",c);
return 0;
}
*/
/*
#include<stdio.h>
int main ()
{
	int i,n,a,b,c,d;
	 float t[20];
	float x,y;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	x=(b*1.0/a*1.0)*100;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&c,&d);
		t[i]=(d*1.0/c*1.0)*100-x;

	}
	for(i=0;i<n-1;i++)
	{
		if(t[i]>5)
		printf("better\n");

		if(t[i]<-5)
		printf("worse\n");
		if(t[i]<=5&&t[i]>=-5)
		printf("same\n");
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main ()
{
int a[5]={1,2,3,4,5};
int i;
for(i=0;i<5;i++)
{
	printf("%d\n",a[i]);
}

}
/*
#include<stdio.h>
#include<math.h>
int main ()
{
long int  n,r,l=0;
double sum=0,time,far,x,y;
scanf("%ld",&n);
int i;
for(i=0;i<n;i++)
{
	scanf("%lf %lf %ld",&x,&y,&r);
	far=sqrt(x*x+y*y);
	time=(far/50)*2+1.5*r;
	sum=time+sum;
}
sum=sum+0.5;
  l=(int)sum;
l=ceil(sum);
printf("%ld",l);
return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
int n,c,i;
double m=0,a,b;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%lf%lf%d",&a,&b,&c);
m+=sqrt(a*a+b*b)/50*2+(double)c*1.5;
}
i=ceil(m);//被这个坑杀了有木有……
printf("%d",i);
return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main ()
{
	double sum;
	int a,b;
	scanf("%lf",&sum);
	a=ceil(sum);
	b=(int)(sum+0.5);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0 ;
}//                证明四舍五入和小数进一！！
*/
/*
#include<stdio.h>
int main()
{
	 double distance ,sum=0,star;
	 int i;

	 scanf("%lf",&distance);
	 star=distance;
	 for(i=0;i<10;i++)
	 {sum=sum+distance*2;
	 distance=distance/2;
	 }
	 sum-=star;
	 printf("%g\n%g\n",sum,distance);
	 return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	long int  N,j;
	scanf("%ld",&N);
	if(N==1)
	{
		printf("End");
		return 0;
	}
	if(N%2==0)
	{
		while(N!=1)
		{	j=N/2;
			printf("%ld/2=%ld\n",N,j);
			N=N/2;
		}
		printf("End");
		return 0;
	}
	if(N%2!=0)
	{	j=N*3+1;
	printf("%ld*3+1=%ld\n",N,j);
		N=j;
		while(N!=1)
		{	j=N/2;
			printf("%ld/2=%ld\n",N,j);
			N=N/2;
			if(N%2!=0&&N!=1)
			{
				j=N*3+1;
			printf("%ld*3+1=%ld\n",N,j);
			N=j;
			}

		}
		printf("End\n");
		return 0;
	}
}
*/
/*
#include<stdio.h>
int main()
{
long n;
scanf("%ld",&n);
while(n>1)
{
if(n%2!=0)
{
printf("%ld*3+1=%ld\n",n,n*3+1);
n=n*3+1;
}
if(n%2==0)
{
printf("%ld/2=%ld\n",n,n/2);
n=n/2;
}
}
printf("End\n");

return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n=0,s=0,i,use,j;
	for(i=1;i<13;i++)
	{
		scanf("%d",&use);
		s=300+s-use;
		if(s<0)
		{
			printf("%d",-i);
			return 0;
		}
		j=s/100; n+=j;
		s=s-100*j;
	}
	printf("%d",n*120+s);
	return 0 ;
}
*/
/*
300
300
300
300
300
300
300
300
300
300
300
30
*/
/*
#include<stdio.h>
int main()
{
	int m,n,i,sum=0,use,p=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&use);
		sum+=use;
		if(sum>m)
		{
			sum-=use;
			p++;
		}
	}
	printf("%d",p);
	return 0 ;
}
*/
/*
#include<stdio.h>
int main()
{
	int a,b,max=0,k=0,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90)	k++;
		else
		{
			if(max<k) max=k;
			k=0;
		}
	}
	if(max<k) max=k;
		printf("%d",max);
		return 0 ;
}
 //          切记在  if 成立之后无法进行else将数据保存！！！
*/
/*
#include<stdio.h>
int main()
{
	int g,s,b,q,n,i,p,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		q=p/1000;
		g=p%10;
		s=p/10%10;
		b=p/100%10;
		if((g-q-b-s)>0)	j++;
	}
	printf("%d",j);
	return 0;
}				//     个位，百位，十位，千位的 求个个为上的问题！！
*/
/*
#include<stdio.h>
int main()
{
	long int i=1;
	double su,sum=0;
	int k;
	scanf("%d",&k);
	for(i=1;;i++)
	{	su=1/(double)i;
		sum+=su;
		if(sum>k)
	{	printf("%
*/
/*
#include<stdio.h>
void printf_c();
int main()
{
	printf_c();
	while(1)
	return 0 ;
}
void printf_c()
{
	printf("               ************\n");
	printf("                **********\n");
	printf("                 ********\n");
	printf("                  ******\n");
	printf("                   ***\n");

}
*/
/*
#include<stdio.h>
int sum(int n);
int sum(int n)
{
	int i,result =0;
	for(i=1;i<=n;i++)
	{
		result+=i;
	}
	return result ;
}
int main()
{
	int result,n;
	scanf("%d",&n);
	result=sum(n);
	printf("%d\n",result);
	return 0 ;
}
*/
/*
#include<stdio.h>
int max(int a,int b);
int max(int a,int b)
{
	if(a<b)
	return b;
	else
	return a;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=max(a,b);
	printf("%d",a);
	return 0;
}
*/
/*
#include<stdio.h>
void swap(int *x,int *y);
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("in swap,x=%d,Y=%d",*x,*y);
}
int main()
{
	int x=3,y=5;
	swap(&x,&y);
	printf("\n%d    %d\n",x,y);
	return 0;
}
*/
/*
#include<stdio.h>
void cz(int b[5]);
void cz(int b[5])
{	int i;
	b[2]=666;
	for(i=0;i<5;i++)
	{
		printf("cz---b[%d]=%d\n",i,b[i]);
	}
}
int main()
{
	int i,a[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{
		printf("main---a[%d]=%d\n",i,a[i]);}
		printf("--\n");
		cz(a);
		return 0;

}
*/
/*
#include<stdio.h>
void cz(int a[5]);
void cz(int a[5])
{	int i;
	a[2]=666;
	for(i=0;i<5;i++)
	{
		printf("cz---a[%d]=%d\n",i,a[i]);
	}
}
int main()
{
	int i,a[5]={1,2,3,4,5};
	cz(a);
	printf("--\n");
	for(i=0;i<5;i++)
	{
		printf("main---a[%d]=%d\n",i,a[i]);}


		return 0;

}
*/
/*
#include<stdio.h>
int main()
{	long int  k;
	scanf("%ld",&k);
	int i,j=0,t,a[9],o=1,z,sum=0;
	t=k;
	while(k!=0)
	{
	k=k/10;
	j++;}
	if(t<0)
	{
		o=-o;
		printf("-");
	}
	for(i=0;i<j;i++)
	{
		a[i]=t%10;
		t=t/10;
	}
	for(i=0;i<j;i++)
	{

	for(z=i+1;z<j;z++)
	{
		a[i]=a[i]*10;

	}

		sum=sum+a[i];
	}
	printf("%d",sum*o);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int m,k,n,i,t,sum=0,a[5];
	scanf("%d %d",&m,&k);
	if(m%19==0) sum++;
	t=m;
	while(m!=0)
	{
	m=m/10;
	n++;}
	for(i=0;i<n;i++)
	{
		a[i]=t%10;
		t=t/10;
		if(a[i]==3) sum++;

	}
	if(sum==k+1)
	printf("YES");
	else
	printf("NO");
	return 0;
}
*/
/*

*/
/*
#include<stdio.h>
int main ()
{
	int i,n,a,b,c,d;
	 float t[20];
	float x,y;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	x=(b*1.0/a*1.0)*100;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&c,&d);
		t[i]=(d*1.0/c*1.0)*100-x;

	}
	for(i=0;i<n-1;i++)
	{
		if(t[i]>5)
		printf("better\n");

		if(t[i]<-5)
		printf("worse\n");
		if(t[i]<=5&&t[i]>=-5)
		printf("same\n");
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n,i;
	float x,y,a,b,z,c;
	scanf("%d",&n);
	scanf("%f%f",&x,&y);
	z=y/x;
	for(i=1;i<=n;i++)
	{

		scanf("%f%f",&a,&b);

		c=b/a;

			if((c-z)>0.05)
			printf("better");
		if((z-c)>0.05)
		printf("worse");
		else
		printf("same");
}



	return 0;
	}
*/
/*
#include<stdio.h>
int main()
{
	int N,M,i,j=2,o=-1,a[5000];
	scanf("%d%d",&N,&M);
	for(i=0;i<N;i++) a[i]=-1;
	while(j<M+1)
{
	for(i=j;i<N;i+=i)
	{
		a[i]=a[i]*-1;
	}
	j++;
}
	for(i=1;i<=N;i++)
	{
		if(a[i]<0)
		printf("%d ",i);
	}
	return 0;
}*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,n,t,k=0,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
        if(a[i]==a[j]&&i!=j)
            {
                k++;
                b[j]=k;
                k=0;

            }
        }
    for(i=0;i<n;i++)
    {

        if(b[i]==0)
            printf("%d",i);
    }
    return 0;
}
}
*/
/*
#include<stdio.h>
int main()
{
	 int a , b,d;
	scanf("%d%d",&a,&b);
	if((a*a+b*b)>100)
	printf("%d",a*a+b*b);
	else
	printf("%d",a+b);
	return 0;
}
*/
/*
#include<stdio.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;*a=*b;*b=t;
}
int main()
{
	int a=20,b=30;
	swap (&a,&b);
	printf("%d %d",a,b);
	return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	int i,t;
	char str[100];
	scanf("%s",str);
	t=strlen(str)-1;
	for(i=0;i<t;i++)
	{
		if(str[i]!=str[t-1-i])
		{
			printf("No"); return 0;
		}
	}

	printf("Yes");
	return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,t;
	char str[101];
	scanf("%s",str);
	t=strlen(str)-1;
while(str[i]!='.')
{
	if(str[i]!=str[t-1-i])
		{
			printf("No"); return 0;
		}
		i++;
}
printf("Yes");
	return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int fun(char *p)
{
char *q;
q = p;
while(*q)
q++;
q--;
while(p<q)
{
if(*p!=*q)
return 0;
p++;
q--;
}
return 1;
}
int main()
{
char str[100],ch;
int i=0;
while((ch=getchar())!='.')
str[i++]=ch;
str[i]='\0';
if(fun(str))
printf("Yes");
else
printf("No");
return 0;
}
*/
/*
#include <stdio.h>
#include <time.h>
int main()
{
	int i;
	i=rand()%6;
	printf("%d",i);
	return 0 ;
}
*/
/*
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
   int i,y;


for( i=0;i<10;i++)
{
printf("%d\n",rand()%10+1);
}


   return 0;
}
*/
/*
//第二个问题：
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int i,a[7]={2,4,5,6,7,11,14};
   time_t t;
   srand((unsigned) time(&t));
   i=rand()%7;
   printf("%d\n",a[i]);
   return 0;
}
*/

/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{   int people,i,j,a[50],sj,m,u,s=0,win,td;
    printf("请输入赌徒人数：");
    scanf("%d",&people);
    printf("将赌徒依次编号为：1-%d\n",people);
    for(i=0,j=1;i<people;i++,j++)
    {
        a[i]=j;
    }


    for(i=0;i<people-1;i++)
    {
        time_t t;
       srand((unsigned) time(&t));
        sj=rand()%10+1;
        printf("第%d轮开始\n",i+1);
        for(u=0;u<8;u++)
            for(j=0;j<people;j++)
            {
                if(a[j]!=0)
				   s++;
                if(s==sj)
                {
                    td=a[j];
                	a[j]=0;
                	break;
                }
            }
        printf("        从编号为%d的人开始,枪在第1次扣动扳机时会响\n",td);
        printf("        编号为%d的人退出赌博,剩余赌徒的编号依次是：",td);
        s=0;
	//	td=0;
        for(j=0;j<people;j++)
            {
                if(a[j]!=0) printf(" %d",a[j]);
            }
        printf("\n");
        printf("\n");
    }
    for(j=0;j<people;j++)
            {
                if(a[j]!=0)
                win=a[j];
            }
    printf("最后胜出的赌徒的编号是:%d",win);
    return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct GameMan{
    int number;
}GameMan;

int main(){
    int PersonNum;//游戏人数
    int round=1;//游戏回合
    int PersonPos=1;//起始人位置
    int BulletPos;//子弹位置
	int i;//中枪人位置
    srand((int)time(0));//使用当前时间作为rand()函数的随机数的种子
	printf("请输入赌徒人数： ");
    scanf("%d",&PersonNum);
    printf("将赌徒依次编号为：1-%d \n\n",PersonNum);
    GameMan GameMans[100];//存储游戏人员编号的数组
    for (int j=1;j<=PersonNum;j++) {//依次为参加者分配编号
        GameMans[j].number=j;
    }
    //当只剩余一个人时，此场结束
    while (PersonNum!=1) {
        BulletPos=rand()%6+1;//左轮旋转后的子弹位置（利用随机数1~6表示）
		printf("第 %d 轮游戏,从编号为 %d 的人开始,枪在第 %d 次扣动扳机时会响!\n\n",round,GameMans[PersonPos].number,BulletPos);
        for (i=PersonPos;i<PersonPos+BulletPos-1;i++);//找到每轮退出的人的位置 i
        //由于参与者排成的是环，当人数少时可能会回到开头，所以需要对求得 i 值进行取余处理
        //当 i=0时，实际上指的是位于数组结尾的参与者，需要重新调整 i 的值
        if(!(i=i%PersonNum)){i=PersonNum;PersonPos=1;}
		else PersonPos=i;//PersonPos表示的是下一轮开始的位置
        printf("编号为 %d 的赌徒退出赌博,剩余赌徒编号依次为:",GameMans[i].number);
        //使用顺序存储时，如果删除元素，需要将其后序位置的元素进行全部前移
        PersonNum--;//此时参与人数减一
		//先将i位置后成员向前依次移动
        for (int j=i;j<=PersonNum;j++) {
            GameMans[j]=GameMans[j+1];
        }
		//再打印剩余成员
		for (int k=1; k<=PersonNum; k++) {
            printf("%d ",GameMans[k].number);
        }
        printf("\n\n");
        round++;//到回合数加一
    }
    printf("最终胜利的游戏人员编号是：%d \n\n",GameMans[1].number);
}
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
	int i,t;
	char str[101];
	scanf("%s",str);
	t=strlen(str);
	for(i=0;i<t;i++)
	{
		if(str[i]!=str[t-1-i])
		{
			printf("No");
        return 0;
		}
	}

	printf("Yes");
	return 0;
}
*/
/*
bool ListDelete(Sqlist  *&L,int I , Elemtype &e)
{
	int  j;
	if(  i<1|| i>L->length)
 		return false ;
	i --;                  //将顺序表位序数转为data下标
e=L->data[i];
for(j=i;j<L->length-1;j++) //将data[i]之后的元素前移
	L->data[j]=L->data[j+1];
	L->length--;           //顺序表长度-1
	return ture;
*/

/*

#include<stdio.h>
#include<string.h>
int main()
{
 int a[5],i , j , t;
 for(i=0;i<5;i++)	scanf("%d",&a[i]);
 for(i=0;i<4;i++)
 for(j=0;j<4-i;j++)
 {
 	if(a[j]>a[j+1])
 	{
 		t=a[j];
 		a[j]=a[j+1];
 		a[j+1]=t;
	}
 }
 for(i=0;i<5;i++)
 printf("%d",a[i]);
 return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main ( )
{
char str[3][10];
char string[10];
int i;
for (i=0;i<3;i++)
gets (str[i]);
if (strcmp(str[0],str[1])>0)
strcpy(string,str[0]);
else
strcpy(string,str[1]);
if (strcmp(str[2],string)>0)
strcpy(string,str[2]);
printf("%s\n",string);
return 0;
}
*/
/*
#include<stdio.h>
int main( )
{
float x,y;
scanf("%f",&x);
switch((int)x/10)
{
case 0:y=1.0;printf("y=%f\n",y);break;
case 1:y=2*x+1;printf("y=%f\n",y);break;
case 2:y=3*x*x+2;printf("y=%f\n",y);break;
default:
printf("No definition.\n");
}
return 0;
}
*/
/*
#include<stdio.h>
void swap(int a,int b)
{
	int t;
	t=b;
	b=a;
	a=t;
	printf("%d %d",a,b);
}
int main( )
{
int x=1,y=2;
swap(x,y);
printf("%d %d",x,y);

return 0;
}
*/

/*
#include<stdio.h>
void swap(int x, int y)
{
	int t;
    t=x;
	x=y;
	y=t;
	printf("a=%d,b=%d",x,y);
}
int main()
{
	int a=1,b=2;
	swap(a,b);
	printf("a=%d,b=%d",a,b);
	return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char c1[200];
	scanf("%s",c1);
	int i,len=0,j;
	char *p;
	p=c1;
	//len = strlen(c1);

	for(i = 0 ; i >= 0 ; i--)
	{
		if(*(p+i)==0&&*(p+i+1)!=0)
		printf(" ");
		printf("%c",*(p+i));
	}
	printf("\n%d",len);
	printf("\n%d",sizeof(c1));
	return 0 ;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
char s[500];
int n,i,count=0,j;
scanf("%s",s);
n=strlen(s);
printf("888   %d   888\n",n);
s[n]=' ';
for(i=0;i<=n;i++)
{
if(s[i]!=' ')
{
count++;
continue;
}
else
{
for(j=i-1;j>i-1-count;j--)
{
printf("%c",s[j]);
}
count=0;
printf("%c",s[i]);
}
}
return 0;
}*/
/*
#include<stdio.h>
int main()
{
	int i,sum=0;
	scanf("%d",&i);
	if(i%3==0)
	{printf("3");sum++;}
	if(i%5==0)
	{ if(sum!=0) printf(" ");printf("5");sum++;}
	if(i%7==0)
	{ if(sum!=0) printf(" ");printf("7");sum++;}
	if(sum==0)
		printf("n");


	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int light[5000],a[5000];
	int M,N,i,j,arguments=-1;
	scanf("%d%d",&N,&M);
	for(i=1;i<=N;i++)
	  light[i]=1;
 for(j=1;j<=M;j++)
     for(i=1;i<=N;i++)
		if(i%j==0)
		light[i]*=arguments;
		int t=0;
	for(i=1;i<=N;i++)
		if(light[i]<0)
		{
			a[t]=i;
			t++;
		}
		printf("%d",a[0]);
	for(i=1;i<=t;i++)
		{	if(a[i]!=0)
			printf(",%d",a[i]);
		}
	    return 0;
}
*/	//													开关灯问题
/*
#include <stdio.h>
int x,n;
long pow(int base, int power) {
    long result = 1;
    while(power > 0) {
        if(power % 2 == 1)
            result = result*base;
        base = base * base;
        power = power / 2;
    }
    return result;
}

int main() {
    scanf("%d%d", &x, &n);
    printf("%lld", pow(x,n));
}
*/
/*
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int e,f;
	b=a*60+b;
	d=c*60+d;
	e=(d-b)/60;
	f=(d-b)%60;
	printf("%d %d",e,f);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a[10],b[10];
	int i,sum=0,k;
	string c[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
		if(a[i]<0)
		a[i]=-a[i];
	}
	for(i=0;i<9;i++)
	{
		sum=sum+a[i]*(i+1);
	}
	k=(sum%11)*-1;
	if(k==b[9])
	{
		printf("Right");
		return 0;
	}
	else
	{
		b[9]=k;
		for(i=0;i<10;i++)
	{	if(i==9&&b[i]==0)
		printf("-%d",b[i]);
		printf("%d",b[i]);

	}
		return 0;
	}
}
*/
/*
#include<stdio.h>
int main()
{
	int a[10],b[10];
	int i,sum=0,k;
	char c[13];
	scanf("%d",&c);
	for(i=0;i<10;i++)
	{
		if(i!=2&&i!=6&&i!=12)
		{

		}
	}








	for(i=0;i<9;i++)
	{
		sum=sum+a[i]*(i+1);
	}
	k=(sum%11)*-1;
	if(k==b[9])
	{
		printf("Right");
		return 0;
	}
	else
	{
		b[9]=k;
		for(i=0;i<10;i++)
	{	if(i==9&&b[i]==0)
		printf("-%d",b[i]);
		printf("%d",b[i]);

	}
		return 0;
	}
}
*/
/*
#include<stdio.h>
int main()
{
	int a,b;
  double s;
  scanf("%d %d",&a,&b);
  s=0.5*a*b;
  printf("%.2lf",s);
  return 0;
}*/
/*
#include<stdio.h>
int main()
{
	int k,n,i;
	scanf("%d",&n);
	printf("(");
	if(n/10>=1)
	{
		for(i=0;i<n/10;i++)
		printf("=");
		printf(">");
	}
	else
	{
		printf(">");
	}
	printf(")");
	return 0;

}
*/
/*
#include<stdio.h>
int main()
{
	int n,x,y;
	scanf("%d%d%d",&n,&x,&y);
	double k;
	k=y*1.0/x*1.0;
	x=(int)(k+0.99);
	printf("%d",n-x);
	return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
	long int x[3],y[3];
	double s,a,b,c,p;
	int i;
	for(i=0;i<3;i++)
	  scanf("%ld%ld",&x[i],&y[i]);

	  a=sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
	  b=sqrt((x[2]-x[1])*(x[2]-x[1])+(y[2]-y[1])*(y[2]-y[1]));
	  c=sqrt((x[2]-x[0])*(x[2]-x[0])+(y[2]-y[0])*(y[2]-y[0]));

	  if(a+b>c&&a+c>b&&b+c>a)
	  {
	  	p=0.5*(a+b+c);
	  	s=sqrt(p*(p-a)*(p-b)*(p-c));
	  	printf("%.2lf",s);
	  	return 0;
	  }
	  else
	{  printf("NO");
	  return 0;
}					/*					ZHUYIZHUYI
                          ！！！！！！！取值范围！！！！！！！！ */

/*
#include<stdio.h>
int main()
{
	int i,x,n;
	scanf("%d%d",&x,&n);
	double sum;
	sum=x*1.0;
	for(i=0;i<n;i++)
	{
		sum=sum*0.001;
	}
	printf("%lf",sum);
	return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    int i,sum,n,x[1000],y[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=x[i]*y[i];
    }
    printf("%d",sum);
    return 0;
}
*/
/* 
#include<stdio.h>
int main()
{
int i,j,k,sum=0;
scanf("%d",&j);
for(k=1;k<j;k++)
{
    for(i=1;i<=k;i++)
	{	sum++;
		if(sum<10)
		printf("0%d",sum);
		else
		printf("%d",sum);
	}
	printf("\n");
}
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	double p[30],q[30];
	int j,i;
	p[1]=1;
	q[1]=2;
	double sum=0;
	scanf("%d",&j);
	for(i = 1;i <= j; i++)
	{	
		sum+=q[i]/p[i];
		q[i+1] = q[i]+p[i];
		p[i+1] = q[i];	
	}
	printf("%.4lf",sum);
	return 0 ;	
} 
*/
/*
#include<stdio.h>
int main()
{	
	int n ,i,k=1; 
	double sum=0;
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		sum=sum+1.0*k/i*1.0;
		k=-k;
	}
	printf("%.4lf",sum);
	return 0 ;
}
*/
/*
#include<stdio.h>
int main()
{
	double k=1,sum=0;
	int n,i;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=k*i*1.0;
		sum+=1/k;
	}
	printf("%.10lf",sum+1);
	return 0;
}
*/
/* 
#include<stdio.h>
int main()
{
	double x,n,i,sum=1,k=1;
	scanf("%lf%lf",&x,&n);
	for(i=1;i<=n;i++)
	{
		k=k*x;
		sum=sum+k;
	}
	printf("%.2lf",sum);
	return 0;
}
*/ /*
#include<stdio.h>
int main()
{
	double h,s;
	s=h;
	int i;
	scanf("%lf",&h);
	for(i=0;i<10;i++)
	{
		s+=h;
		h=h/2;	
	}
	printf("%lf\n%lf",s,h);
	return 0;
}*/
/*
#include<stdio.h>
int main()
{
	int han(int i);
	int chu(int i);
	int s,sum=0,i,y1,y2;
	scanf("%d",&s);
	for(i = 1;i <= s; i++)
	{	
		y1=han(i);y2=chu(i);
		if(y1||y2)
		
		else
		sum=sum+i*i;	
	}
	printf("%d",sum);
}
int han(int i)
{
	int a,t=1,k=0;
	a=i;
	if(a%10==7||a/10%10==7)
		return t;
		return k;
}
int chu(int i)
{
	int k,p=1,s=0;
	if(k%7==0)
	return p;
	return s;
}
*/
/*
#include<stdio.h>
int main()
{
int s=0,i;
	scanf("%d",&s);
	for(i = 1;i <= s; i++)
	{
		if(i%10==7||i/10%10==7||i/100%10==7)
		printf(" %d",i);
		
	}
	return 0;
}
*/
/*
#include<stdio.h>
main()
{int n,sum=0,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(!(i%7==0||i%10==7||i/10==7))
sum+=i*i;
}
printf("%d",sum);
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		if(i%10==1) sum++;
		if(i>=10&&i/10%10==1) sum++;
		if(i>=100&&i/100%10==1)sum++;
		if(i>=1000&&i/1000%10==1)sum++;
		if(i>=10000&&i/10000==1)sum++;
	}
	printf("%d",sum);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int L,R,i,sum=0;
	scanf("%d%d",&L,&R);
	for(i = L; i <= R; i++)
	{
		if(i%10==2) sum++;
		if(i>=10&&i/10%10==2) sum++;
		if(i>=100&&i/100%10==2)sum++;
		if(i>=1000&&i/1000%10==2)sum++;
		if(i>=10000&&i/10000==2)sum++;
	}
	printf("%d",sum);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int G,k,T,i,j;
	char f; 
	scanf("%d %d %c %d",&G,&k,&f,&T);
	for(i = 1; i <= k; i++)
		{
			printf("%c",f);
		}
		printf("\n");
	for(j = 2; j < G; j++)
	{	
		for(i = 1; i <= k; i++)
		{
			if(i == 1||i == k) 
			printf("%c",f);
			else 
				{
					if(T==0)
					printf(" ");
					else
					printf("%c",f);
				}
		}
		printf("\n");
	}
	for(i = 1; i <= k; i++)
		{
			printf("%c",f);
		}
		return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int K,i;
	char f; 
	scanf("%d %c",&K,&f);
	for(i = 1; i <= K; i++)
		{
			printf("%c",f);
		}
	printf("\n");
	for(i = 1; i <= K; i++)
		{
			printf("%c",f);
		}
		return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char l1[256];
	int i,sum=0;
	scanf("%s",l1);
	for(i = 0; i < sizeof(l1); i++ )
	{
		printf("%d\n",'l1[i]');
		if(l1[i] >='0' && l1[i] <= '9')	sum++;	
	}
	printf("%d",sum);
	return 0;
}	
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	/*char l;
	int i;
	//int i,sum=0;
	scanf("%d",&i);
	
	for(i = 0; i < sizeof(l1); i++ )
	{
		if(l1[i] >= 48 && 'l1[i]' <= 57)	sum++;	
	}
	
	l='i';
	printf("%d",'0');
	return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
int n=0,i;
char a[1000];
gets(a);
for(i=0;i<strlen(a);i++)
{
if(a[i]>='0'&&a[i]<='9')
n++;
}
printf("%d",n);
return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
 	int i,j,sum=0;
 	char a[100001];
 	gets(a);
 	for(j = 0;j < strlen(a); j++)
 	{	sum=0;
 		for(i = 0; i < strlen(a); i++)
 		{
 			if(i!=j&&a[j]==a[i]) 
			 {
			 sum++;
			 break;
			 }
 		}
 		if(sum==0) 	
		{
		printf("%c",a[j]);
		return 0;
		}
	}	
		printf("no");
		return 0;
}
	//	printf("%s",a);
	//	printf("%d",strlen(a));
	*/
/*
#include<stdio.h>
int main()
	char a[15];
	gets(a);
	int i=0,sum=0;
	double k=1.5;
	k++;
	//for(i = 0; i < 15; i=i+3 )
//	{
		printf("%lf\n",k+5);
		printf("\n%d",sum);
//	}
	
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
int a[2000];
char b[110000];
memset(a,0,sizeof(a));
int k;
scanf("%s",b+1);
k=strlen(b+1);
for(int i=1;i<=k;i++)
{
a[b[i]]++;
}
for(int i=1;i<=k;i++)
{
if(a[b[i]]==1)
{
printf("%c",b[i]);
return 0;
break;
}
}
printf("no");
return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{	
	double sum=0,t;
	int i;
	char a[501];
	char b[501];
	scanf("%lf",&t);
	scanf("%s",a);
	scanf("%s",b);
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i]==b[i]) 
			sum++;
	}
	if(sum/(double)strlen(a)>=t)
	printf("yes");
	else
	printf("no");
	return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
int i;
double n,l,s=0;
char a[501],b[501];
scanf("%lf",&n);
scanf("%s",a);
scanf("%s",b);
l=strlen(a);
for(i=0;i<=l;i++)
{
if(a[i]==b[i])
s++;
}
if(n<=s/l)
printf("yes");
else
printf("no");
return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
int n,i,s=0;
float t,a;
char l1[550];
char l2[550];
scanf("%f", &t);
scanf("%s", l1);
scanf("%s", l2);
for(i=0;i<strlen(l1);i++)
{
if(l1[i]==l2[i])
s++;
}
a = (float)s;
if(a/n>=t)
printf("yes");
else
printf("no");
return 0;
}*/
/*
#include<stdio.h>
float aver(float a[]){
	int i;
	float sum=0;
	for(i = 0; i < 5; i++ ){
		sum=sum+a[i];
	}
	sum=sum/5;
	return sum;
}
int main()
{
	flaot t[5];
	int i;
	for(i = 0; i < 5; i++){
		scanf("%lf",&t[i]); 
	}
	float k;
	k = aver(t);
	printf("%lf",k);
	return 0;
}
*/

#include<stdio.h>fa'f'w 
int main() 
{
/*int a,b=0;
for(a=1;a<=5;a++)
{   
       if(b>=5) continue;
       b=b+a;
}
printf("%d,%d\n",a,b);*/
int x=3,y = 10;
if(x=1) y=x;
y++;
 printf("%d %d",x,y);
	return 0;
}



































































































