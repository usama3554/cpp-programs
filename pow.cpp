#include<iostream>
using namespace std;


double myPow(double x, int n) {
        long long e = n;          
        if (e < 0) {
            x = 1.0 / x;
            e = -e;
        }

        double ans = 1.0;
        while (e > 0) {
            if (e & 1LL) ans *= x;
            x *= x;               
            e >>= 1;             
        }
        return ans;
        
}

//double pow(double x, int n){
//	
//	if(n==0) return 1.0;
//	if(x==0) return 0.0;
//	if(x==1) return 1.0;
//	if(x==-1 && n%2 == 0) return 1.0;
//	if(x==-1 && n%2 != 0) return 1.0;
//	
////	if(n<0){
////		x= 1/x;
////		n = -n;
////	}
//	
//	double ans=1.0;
//	
//	while(n>0){
//		if(n%2==1){
//			ans *= x;
//		}
//		x *= x;
//		n /=2;
//	}
//	
//	return ans;
//	
//}

int main(){
	
	int n = -2;
	
	double x = 3.0;
	
	cout<<myPow(x, n);
	
	return 0;
}
