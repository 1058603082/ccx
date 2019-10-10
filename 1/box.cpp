#include"box.h" 
void Box :: setLen(int length,int width,int height){

		  m_iLength=length;
		  m_iWidth=width;
		  m_iHeight=height;
	
}
int Box:: getV(){
	return m_iLength*m_iWidth*m_iHeight;
}

