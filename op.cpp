#include <bits/stdc++.h>

using namespace std;


class Product{
//by deafault private
	int id;
	char name[100];
	int mrp;
	int selling_price;
public:
	//Constructor
	Product(){
		cout<<"Inside constructor"<<endl;
	}
	//Parameterised Constructor
	Product(int id,char *n,int mrp,int selling_price){
		this->id=id;
		this->mrp=mrp;
		this->selling_price=selling_price;
		strcpy(name,n);

	}

	Product(int &X){
		id:X.id;
		// name:X.name;
		strcpy(name,X.name);
		mrp:X.mrp;
		selling_price:X.selling_price;
	}
	//Setters
	void setMrp(int price){
		if(price>0){

		mrp=price;
		}

	}
	void setSelling_price(int price){
		if(price<mrp){

		selling_price=price;
		}
		else selling_price=mrp;
	}
	//Getters
	int getMrp()
	{
		return mrp;
	}

	int getSelling_price()
	{
		return selling_price;
	}
	void details(){
		cout<<name<<endl;
		cout<<mrp<<endl;
		cout<<selling_price<<endl;
		cout<<"-------------------------------"<<endl;
	}
};


int main(){
	 // Product camera;
	Product camera(01,"D5600",58000,51000);

	Product handcam=camera;
	handcam.details();
	Product nikon(camera);   //copy constructor
	 // camera.setMrp(10000);
	 // camera.setSelling_price(20000);
	 // camera.mrp=2000;
	 // camera.selling_price=1990;
	nikon.details();
	 cout<<"MRP: "<<camera.getMrp()<<endl;
	 cout<<"Selling Price: "<<camera.getSelling_price()<<endl;


}