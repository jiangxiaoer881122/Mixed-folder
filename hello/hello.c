#include <stdio.h>
int app(int a,int b,int c)
{
    int temp;
    int c_a;    
    if(a<b)
    {
        temp =a;
        a=b;
        b=temp;
    }
        c_a=c%a;
        if(c_a==0)
        {
            // printf("Yes");
            return 0;
        }else{
            if(c_a%b!=0)
            {
                if((c/a)>0)
                {
                    if((c_a+a)%b!=0)
                    {
                        printf("No %d %d %d\n",a,b,c);
                        return 0;
                    }                    
                }else{
                        printf("No %d %d %d\n",a,b,c);
                        return 0;                    
                }
            }
        }
        // printf("Yes");
        return 0; 
}
int main()
{
    int a,b,c;
    int i,j,k;
     printf("hello\n");
    // scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=10000;i++)
    {
        c=i;
        for(j=1;j<=100;j++)
        {
            a=j;            
            for(k=1;k<=100;j++)
            {

                b=k;

                app(a,b,c);
            }
        }
    }

     printf("end\n");
    return 0;
}
