#include<stdio.h>
#include<algorithm>
 
using namespace std;
 
int s[1000];
 
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i = 0; i < n; ++i){
			scanf("%d", s + i);
		}
		sort(s, s + n);
		int time = 0;
		while(n > 3){
			int time1 = s[1] + s[0] + s[n - 1] + s[1];
			int time2 = s[n - 1] + s[0] + s[n - 2] + s[0];
			time += time1 < time2 ? time1 : time2;
			if(time1<time2) printf("%d %d %d %d", s[1],s[0],s[n-1],s[1]);
			else
			printf("%d %d %d %d", s[n-1],s[0],s[n-2],s[0]);
			
			n -= 2;
		}
		if(n == 3){
			time += s[0] + s[1] + s[2];
		}else if(n == 2){
			time += s[1];
		}else if(n == 1){
			time = s[0];
		}
		printf("%d\n", time);
	}
	system("pause");
	return 0;
}
