#include<iostream>
using namespace std;
class Time {
	private :
		int hour;
		int minute;
		int second;
	public :
		void setTime(int h,int m,int s);
		void printTime();
		Time(int h,int m,int s);
		Time();
		Time(const Time &p);
		~Time();
};
void Time::setTime(int h,int m,int s) {
	hour=h;
	minute=m;
	second=s;
}
void Time::printTime() {
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
Time::Time(int h,int m,int s):hour(h),minute(m),second(s) {
	cout<<"调用带参构造函数"<<endl;
}
Time::Time():hour(0),minute(0),second(0) {

	cout<<"调用无参构造函数"<<endl;

}
Time ::Time(const Time &p) {
	cout <<"调用拷贝构造函数"<<endl;
	hour=p.hour;
	minute=p.minute;
	second=p.second;
}
Time ::~Time() {
	cout<<"End"<<endl;
}
int main() {
	Time t1;
	cout<<"t1:";
	t1.printTime();
	
	cout<<"输入时间："<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	t1.setTime(a,b,c);
	cout<<"t1:";
	t1.printTime();
	
	Time t2(1,2,3);
	cout<<"t2:";
	
	t2.printTime();
	Time t3(t2);
	
	cout<<"t3:";
	t3.printTime();

	return 0;
}
