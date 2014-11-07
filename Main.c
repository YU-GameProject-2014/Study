#ifdef HEAD_GARD
#define HEAD_GARD
#include "main.h"
#endif



int Main(){
	int a,b,ans;
	a=1;
	b=1;
	ans=Calc(a,b);
	printf("%d+%d=%d",a,b,ans);
}