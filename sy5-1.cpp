#include<iostream>
using namespace std;
class Matrix{  //����һ��������
private:
	int x,y;
	int **pMatrix;
	
public:
	

	Matrix(int a,int b){   //���캯��
		x=a;
		y=b;
		pMatrix=new int*[a];
		for(int i=0;i<x;i++)
		{
			pMatrix[i]=new int[b];

		}
		for( i=0;i<x;i++)
			for(int j=0;j<y;j++)
			{
				cout<<"�������"<<i+1<<"��,��"<<j+1<<"�У�"<<endl;
				cin>>pMatrix[i][j];
			}
	}
	~Matrix(){  //��������
		delete pMatrix;
	}
	void print(){
for(int i=0;i<x;i++)
			for(int j=0;j<y;j++)
			{
				
				cout<<pMatrix[i][j]<<' ';
				
			}
	cout<<endl;}



friend Matrix& operator* (Matrix n,Matrix m){  //���������*
	if(n.y!=m.x)
	{
		cout<<"\nCannot multipiy Matrix a with b!\n ����n:";
		return n;
	}
   int ix,iy,iz;
   Matrix c(n.x,m.y);
         c.x=n.x;
		 c.y=m.y;
   for(ix=0;ix<n.x;ix++)
   for(iy=0;iy<m.y;iy++)
   {
     c.pMatrix[ix][iy]=0;
      for(iz=0;iz<n.y;iz++)
	  {
        c.pMatrix[ix][iy]+=n.pMatrix[ix][iz]*m.pMatrix[iz][iy];
	  }
   }
return c;

}
};
void main(){
	Matrix e(2,2);
	Matrix c(2,2);
	c.print();
	e.print();
    (e*c).print();

   
}
