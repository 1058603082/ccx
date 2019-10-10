 #include"box.h" 
#include"box.cpp"
using namespace std;
int main(){
	
	Box t;
	int a,b,c;
	cin>>a>>b>>c;
	t.setLen(a,b,c);
	int ans=t.getV();
	cout<<ans<<endl;
	return 0;
} 
