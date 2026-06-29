#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
struct product
{
string name;
int price;
int quantity;
};
bool login()
{
 string username, password;
 const string validUsername = "Generalstore";
 const string validPassword = "Password";
 cout << "Enter username: ";
 cin >> username;
 cout << "Enter password: ";
 cin >> password;
 if (username == validUsername && password == validPassword)
 {
 return true;
 }
 else
 {
 cout << "Invalid username or password! Access Denied." << endl;
 return false;
 }
}
void addproduct(product items[],int &itemcount)
{
product item;
cout<<"Enter product name: ";
cin>>item.name;
cout<<"Enter product price: ";
cin>>item.price;
cout<<"Enter product quantity: ";
cin>>item.quantity;
items[itemcount] = item;
 itemcount++;
cout<<" Product added successfuly !"<<endl;
}
void displayproduct(const product items[],int itemcount)
{
 cout<<"\n--------Product List--------\n";
 cout<<"Name\tPrice\tQuantity\n";
 for(int i=0;i<itemcount;i++)

cout<<items[i].name<<"\t"<<items[i].price<<"\t"<<items[i].quantity<<endl;
}
void searchproduct(const product items[],int itemcount)
{
string pname;
cout<<" Enter product name: ";
cin>>pname;
bool found=false;
for(int i=0;i<itemcount;i++)
{
if(items[i].name==pname)
{
cout<<"Product found "<<endl;
cout<<"Name: "<<items[i].name<<endl;
cout<<"Price: "<<items[i].price<<endl;
cout<<"Quantity: "<<items[i].quantity<<endl;
found=true;
break;
 }
}
if(!found)
cout<<"Product not found "<<endl;
}
void totalInventoryPrice(const product items[], int itemcount)
{
 int total_price = 0;
 for (int i = 0; i < itemcount; i++)
 {
 total_price += items[i].price * items[i].quantity;
 }
 cout << "Total inventory price: " << total_price << endl;
}
void updateInventory(product items[], int &itemcount)
{
 string pname;
 cout << "Enter product name to update: ";
 cin >> pname;
 bool found = false;
 for (int i = 0; i < itemcount; i++)
 {
 if (items[i].name == pname)
 {
 found = true;
 cout << "Product found" << endl;
 cout << "Product Name we want to update: " << items[i].name<<endl;
 cout << "Enter new quantity: ";
 cin >> items[i].quantity;
 cout << "Product updated successfully!" << endl;
 break;
 }
 }
 if (!found)
 {
 cout << "Product not found!" << endl;
 }
}
void deleteProduct(product items[], int& itemcount)
{
 string pname;
 cout << "Enter product name to delete: ";
 cin >> pname;
 bool found = false;
 for (int i = 0; i < itemcount; i++)
 {
 if (items[i].name == pname)
 {
 found = true;

 for (int j = i; j < itemcount - 1; j++)
 {
 items[j] = items[j + 1];
 }
 itemcount--;
 cout << "Product deleted successfully!" << endl;
 break;
 }
 }
 if (!found)
 {
 cout << "Product not found!" << endl;
 }
}
const int max_item=50;
int _tmain(int argc, _TCHAR* argv[])
{
product item[max_item];
int itemcount=0;
int choice;
if(!login())
{
return 0;
}
do
{
cout<<"\t General Store Management System \t"<<endl;
cout<<"1. Add Product "<<endl;
cout<<"2. Display Product "<<endl;
cout<<"3. Search Product "<<endl;
cout<<"4. Total inventory price "<<endl;
cout<<"5. Update inventory "<<endl;
cout<<"6. Delete Product"<<endl;
cout<<"7. End "<<endl;
cout<<"Enter your choice ";
cin>>choice;
switch(choice)
{
case 1:
addproduct(item,itemcount);
cout<<"-------------------------------------------"<<endl;
break;
case 2:
displayproduct(item,itemcount);
cout<<"-------------------------------------------"<<endl;
break;
case 3:
searchproduct(item,itemcount);
cout<<"-------------------------------------------"<<endl;
break;
case 4:
totalInventoryPrice(item,itemcount);
cout<<"-------------------------------------------"<<endl;
break;
case 5:
updateInventory(item,itemcount);
cout<<"-------------------------------------------"<<endl;
break;
case 6:
deleteProduct(item,itemcount);
cout<<"-------------------------------------------"<<endl;
break;
case 7:
cout<<" Program end ";
break;
default:
cout<<" Invalid choice ";
}
}
while(choice!=7);
system("pause");
return 0;
}