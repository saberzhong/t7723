#include<iostream>
using namespace std;
class BaseFly//�ڶ���
{
public:
 virtual void Fly()
{ cout<<"\n-------Class BaseFly::Fly()------\n"; }
};
//������
class BirdFly:public BaseFly
{
public:
void Fly(){cout<<"\n------ Class BirdFly::Fly()-----\n";}
};
class DragonFly:public BaseFly
{
public:
void Fly(){cout<<"\n------ Class DragonFly::Fly()-----\n";}
};
class PlaneFly:public BaseFly
{
public:
void Fly(){ cout<<"\n------ Class PlaneFly::Fly()-----\n";}
};

void main(){
	PlaneFly a;
	a.Fly();
	//������
cout<<"\n ���Լ̳��еĶ�̬�ԣ�Virtual��:\n"<<endl;
BaseFly *pBase;
BirdFly *pBird=new BirdFly();
pBase=pBird;
cout<<"\nBirdFly->\n";
pBase->Fly();
DragonFly *pDragon=new DragonFly();
pBase =pDragon;
cout<<"\n DragonFly->\n";
pBase ->Fly();
PlaneFly *pPlane=new PlaneFly();
pBase = pPlane;
cout<<"\n PlaneFly->\n";
pBase ->Fly();
BaseFly * Pbase=new BirdFly;
Pbase->Fly();
Pbase=new DragonFly;
Pbase->Fly();
Pbase=new PlaneFly;
Pbase->Fly();

}
