#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int maths,maths1,nlc,nlc1,o,o1,p,p1,q1,q2,r,total,R,K1,K2,K3,K4,K5;
char b[20],ch[20],a[50],e[8],d[30],grade,result[5],remark[16],q,x,y,u,v;
char s[] = "PASS";
char s1[] = "FAIL";
char s3[] = "CONGRAGULATIONS";
char s4[] = "     ";
void input(){
	printf("NAME   : ");
	scanf("%d",&n);
	printf("PLACE : ");
	scanf("%d",&p);
	printf("COLLEGE NAME : ");
	scanf("%d",&c);
	printf("DATE      : ");
	scanf("%d",&d);
	printf("MEDIUM    : ");
	scanf("%d",&m);
	printf("ROLL NO    : ");
	scanf("%d",&r);
	printf("\nMATHEMATICS ");
	scanf("%d",&maths);
	    if(maths>=80){
		        printf("\nplz enter less than 80 ");
		}
		printf("\n MATHEMATICS  ");
	    scanf("%d",&maths1);
	    if(maths1>=20){
		        printf("\nplz enter less than 20 ");
		}
		printf("\nNETWORK LINEAR CIRCUIT  ");
	    scanf("%d",&nlc);
	    if(nlc>=80){
		        printf("\nplz enter less than 80 ");
		}
		printf("\nNETWORK LINEAR CIRCUIT PRACTICALS:  ");
	    scanf("%d",&nlc1);
	    if(nlc1>=20){
		        printf("\nplz enter less than 20 ");
        }
		printf("\nEnter Electronic Measurement Instrumentation ");
	    scanf("%d",&o);
	    if(o>=80){
		        printf("\nplz enter less than 80 ");
        }
		printf("\nEnter Electronic Measurement Instrumentation PRACTICAL ");
	    scanf("%d",&o1);
	    if(o1>=20){
		        printf("\nplz enter less than 20 ");
		}
		printf("\nEnter C program ");
	    scanf("%d",&p);
	    if(p>=80){
		        printf("\nplz enter less than 80 ");
		}
		printf("\nEnter C program practical ");
	    scanf("%d",&p1);
	    if(p1>=20){
		        printf("\nplz enter less than 20 ");
		}
		printf("\nNetwork Analysis & Synthesis ");
	    scanf("%d",&q1);
	    if(q1>=80){
		        printf("\nplz enter less than 80 ");
		}
		printf("\nNetwork Analysis & Synthesis ");
	    scanf("%d",&q2);
	    if(q2>=20){
		        printf("\nplz enter less than 20 ");
		}
}
void main()
{
	int i=0,i1=0,j=0,j1=0,k=0,k1=0,l=0,l1=0;
	while(i1<113){
		printf("*");
		i1++;}
    printf("\n|");
	printf("\n| \t\t\t SEMESTER OF ENGINEERING        ");
	printf("\n|\n");
	while(i<113){
		printf("-");
		i++;
	}
	printf("\n| NAME : %s \t \t",ch);
	printf("\n| DATE : %s  \t\t\t\t\t\t  PLACE : %s",d,b);
	printf("\n| CLG NAME : %s \t \t ",a);
	printf("\n| MEDIUM : %s \t \t \t \t \t\t  ROLL NO. : %d \n",e,r);
	while(j<113){
		printf("-");
		j++;
	}
	printf("\n|\t SUBJECTS     \t\t\t\t| marks\t\t| practical\t|\tTotal \t| Obtained\t|\n");
	while(k<113){
		printf("-");
		k++;
	}
	printf("\n|       MATHEMATICS         \t\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d %c\t|",maths,maths1,maths+maths1,q);
	printf("\n| Network linear circuit  \t\t\t| %d\t\t| --\t\t|\t80 \t|\t%d %c\t|",nlc,nlc,x);
	printf("\n| Network linear circuit practical\t\t| --\t\t| %d\t\t|\t20 \t|\t%d \t|",nlc1,nlc1);
	printf("\n| Electronic Measurement Instrumentation \t| %d\t\t| --\t\t|\t80 \t|\t%d %c\t|",o,o,y);
	printf("\n| Electronic Measurement Instrumentation practical| --\t\t| %d\t\t|\t20 \t|\t%d \t|" ,o1,o1);
	printf("\n| c programming     \t\t\t\t| %d\t\t| --\t\t|\t80 \t|\t%d %c\t|",p,p,u);
	printf("\n| c programming practical\t\t\t| -- \t\t| %d\t\t|\t20 \t|\t%d \t|",p1,p1);
	printf("\n| Network Analysis & Synthesis \t\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d %c\t|\n",q1,q2,q1+q2,v);
	while(l<113){
		printf("-");
		l++;
		}
	printf("\n|\tTotal marks obt\t\t| \t Out of Marks\t |     PERCENTAGE\t|  \t Result    |    GRADE   |\n");
	while(l1<113){
		printf("-");
		l1++;
		}
	printf("\n|\t\t%d\t\t|\t    500 \t|\t    %d  \t|   \t %s      |\t   %c    |\n",total,R,result,grade);
	while(k1<113){
		printf("*");
		k1++;}
	printf("\n|");
	
	printf("\n| \n");
	while(j1<113){
		printf("*");
		j1++;}
	printf("\n\n\n");
	printf("\n\t\t\t\t\t\tMADE BY Abinaya \n");
	
}
int calculations(){
	
	
	K1=m+m1;
	K2=n+n1;
	K3=o+o1;
	K4=p+p1;
	K5=q1+q2;
	total = K1+K2+K3+K4+K5;
	R = total/5;
	
	
	if(R>= 90)
	      grade = 'A';
    else if(R>= 80)
          grade = 'B';
    else if(R>= 70)
          grade = 'C';
	else if(R>= 60)
          grade = 'D';
	else if(R>= 40)
          grade = 'E';
	else 
          grade = 'F';
}
void abi1(){
	if(K1<40){
		q ='#';

	}
	else
	    q = ' ';
	
}
void abi2(){
	if(K2<40){
		x ='#';
		
	}
	else
	    x = ' ';
	
}
void abi3(){
	if(K3<40){
		y ='#';
		
	}
	else
	    y = ' ';
	
}
void abi4(){
	if(K4<40){
		u ='#';
		
	}
	else
	    u = ' ';
	
}
void abi5(){
	if(K5<40){
		v ='#';
		
	}
	else
	    v = ' ';
	
}
void resultfunction(){
	if(R>40){
		strcpy(result,s);
	}
	else
	    strcpy(result,s1);
}
void remarkfunction(){
	if(R>40){
		strcpy(remark,s3);
	}
	else
	    strcpy(remark,s4);
}
int main(){
	input();
	calculations();
	 abi1();
     abi2();
     abi3();
     abi4();
     abi5();
	resultfunction();
	remarkfunction();
	show();
	return 0;
	
}
