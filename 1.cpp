#include<iostream>
using namespace std;
class Box {
	private :
		int  length;
		int  height;
		int  width;
	public :
		void setLens(int l,int h,int w);
		int  getV();
		
};

void Box:: setLens(int l,int h,int w) {
	length=l;
	height=h;
	width=w;
}
int  Box::getV() {

	return length*height*width;
}
int main() {
	int a,b,c;
	Box t1,t2,t3;
	cout<<"�����1���������ĳ����"<<endl;
	cin>>a>>b>>c;
	t1.setLens(a,b,c);
	cout<<"�����2���������ĳ����"<<endl;
	cin>>a>>b>>c;
	t2.setLens(a,b,c);
	cout<<"�����3���������ĳ����"<<endl;
	cin>>a>>b>>c;
	t3.setLens(a,b,c);
	cout<<"3��������������ֱ�Ϊ"<<endl;
	cout<<t1.getV()<<endl;
	cout<<t2.getV()<<endl;
	cout<<t3.getV()<<endl;


	return 0;
}
