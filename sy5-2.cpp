#include<iostream>
using namespace std;
class BaseFly//第二题
{
public:
 virtual void Fly()
{ cout<<"\n-------Class BaseFly::Fly()------\n"; }
};
//第三题
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
	//第四题
cout<<"\n 测试继承中的多态性（Virtual）:\n"<<endl;
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
