#include <stdio.h>
int is_prime(int n,int i)
 {
    if(i==1) 
	{
        return 1; 
    }
    if (n<=2) 
	{
        return 1; 
    }
    if (n%i==0)
	 {
        return 0; 
    }
    if (i*i>n)
	 {
        return 1; 
    }
    return is_prime(n,i+1);
}
void generate_primes(int n)
 {
    for (int i=2;i<=n;i++)
	 {
        if (is_prime(i,2)) 
		{
            printf("%d",i);
        }
    }
    printf("\n");
}

int main()
 {
    int num;
    printf("Enter a number:\n ");
    scanf("%d", &num);
    printf("Prime numbers up to %d are:\n ", num);
    generate_primes(num);
    return 0;
}
