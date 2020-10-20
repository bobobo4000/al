// ***********************************************************************************************************************************************************************************
// 순환적인 거듭제곱 계산 프로그램(순환 알고리즘)
// ***********************************************************************************************************************************************************************************

double power(double x, int n) {
	if (n==0) return 1;
	else if ( (n%2) == 0 ) return power(x*x, n/2);
	else return x*power(x*x, (n-1)/2);
}

int main() {
	double x;
	int n;
	scanf("%lf %d", &x, &n);
	double a = power(x, n);
	printf("%.1lf", a);
}