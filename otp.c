#include <stdio.h>
#include <time.h>
int otpfour(int n)
{
	int otp = n % 10000;
	return otp;
}
int otpsix(int n)
{
	int otp = n % 1000000;
	return otp;
}
int main(void)
{
	int otp_4,otp_6;
	int ch;
	time_t t;
	t = time(NULL);
	printf("Enter 1 for Four Digit OTP and 2 for 6 Digit OTP\n");
	do
	{
		scanf("%d",&ch);
	}while((ch < 1) || (ch >2));
	if(ch == 1)
	{
		otp_4 = otpfour(t);
		printf("otp 4 is %4d\n",otp_4);
	}
	if(ch == 2)
	{
		otp_6 = otpsix(t);
		printf("otp 6 is %6d\n",otp_6);
	}
	return 0;
}

