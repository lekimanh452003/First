#include <iostream.h>
class sophuc
	{
		private:
		float thuc, ao;
		public:
		void nhap()
		{
			cout<<"\nPhan thuc: ";
			cin>>thuc;
			cout<<"\nPhan ao: ";
			cin>>ao;
		}
		void xuat()
		{
			cout<<"\na= "<<thuc<<" + "<<ao<<"*i"<<endl;
		}
		float getPT()
		{
			return thuc;
		}
		float getPA()
		{
			return ao;
		}	
	};
int main(int argc, char *argv[])
{
	sophuc a[2];
	for(int i=0; i<2; i++)
	{
		a[i].nhap();
	}
	cout<<"\nTong cua 2 so phuc: "
		<<a[0].getPT()+a[1].getPT()
		<<" + "<<a[0].getPA()+a[1].getPA()
		<<"*i"<<endl;
	return 0;
}