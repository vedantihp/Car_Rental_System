#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
class Cars
{
public:
string name;
string loc;
string num;
int km;
string city,coupon;
string start_date,end_date;
string type,color,brand,number;
string decide;
int amt=0,disc=0;
int days;
void display()
{
cout<<"********** RENT YOUR CAR !! **********"<<endl;
cout<<"******* Car Brands Available *******"<<endl;
cout<<"1.\t"<<"Maruti Suzuki"<<"\tSUV"<<endl;
cout<<"2.\t"<<"Skoda"<<"\t\tSedan"<<endl;
cout<<"3.\t"<<"Renault"<<"\t\tSedan"<<endl;
cout<<"4.\t"<<"Toyota"<<"\t\tSUV"<<endl;
cout<<"5.\t"<<"KIA"<<"\t\tSUV"<<endl;
cout<<"6.\t"<<"Hyundai"<<"\t\tSedan"<<endl;
cout<<"7.\t"<<"Honda"<<"\t\tSUV"<<endl;
cout<<"8.\t"<<"Mahindra"<<"\tSUV"<<endl;
cout<<"9.\t"<<"TATA"<<"\t\tSedan"<<endl;
cout<<"10.\t"<<"INDICA"<<"\t\tSedan"<<endl;
}
void user_input()
{
cout<<"Customer Name:"<<endl;
getline(cin,name);
cout<<"Customer Contact Number:"<<endl;
getline(cin,num);
if(num.length()==10)
{
cout<<"";
}
else
{
cout<<"Re-enter 10-Digit Number:"<<endl;;
cin>>num;
}
cout<<"Location Required"<<endl;
cin>>loc;
cout<<"Enter Start Date (dd/mm/yyyy): "<<endl;
cin>>start_date;
cout<<"Enter End Date (dd/mm/yyyy): "<<endl;
cin>>end_date;
}
void options()
{
int ch;
cout<<"Choose the Car(Sr.No): ";
cin>>ch;
switch(ch)
{
case 1:
{
brand="MARUTI SUZUKI";
type="SUV";
color="RED";
cout<<"MARUTI SUZUKI"<<endl;
cout<<"Enter number of kilometers traveled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=2;
int price_d=2;
int price_b=3;
cout<<"Price in Mumbai is ₹2/km"<<endl;
cout<<"Price in Delhi is ₹2/km"<<endl;
cout<<"Price in Bangalore is ₹3/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="MH 04 HP 6420";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="MH 04 LP 6420";
}
else
{
amt=(2*km*days);
number="MH 04 LP 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="DL 03 BF 2536";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="DL 03 BF 2536";
}
else
{
amt=(2*km*days);
number="DL 03 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="KA 01 LL 7781";
}
else if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="KA 01 LO 7781";
}
else
{
amt=(3*km*days);
number="KA 01 LP 7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
case 2:
{
brand="SKODA";
type="SEDAN";
color="BLUE";
cout<<"SKODA"<<endl;
cout<<"Enter number of kilometers travelled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=2;
int price_d=2;
int price_b=3;
cout<<"Price in Mumbai is ₹2/km"<<endl;
cout<<"Price in Delhi is ₹2/km"<<endl;
cout<<"Price in Bangalore is ₹3/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="MH 04 PP 6420";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="MH 04 HG 6420";
}
else
{
amt=(2*km*days);
number="MH 04 HG 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="DL 05 BF 2536";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="DL 05 BF 2536";
}
else
{
amt=(2*km*days);
number="DL 05 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="KA 01 BF 7781";
}
else if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="KA 01 BF 7781";
}
else
{
amt=(3*km*days);
number="KA 01 BF 7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
case 3:
{
brand="RENAULT";
type="SEDAN";
color="BLUE";
cout<<"RENAULT"<<endl;
cout<<"Enter number of kilometers travelled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=3;
int price_d=3;
int price_b=3;
cout<<"Price in Mumbai is ₹3/km"<<endl;
cout<<"Price in Delhi is ₹3/km"<<endl;
cout<<"Price in Bangalore is ₹3/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="MH 04 LG 6420";
}
else if(coupon=="flat20")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="MH 04 GP 6420";
}
else
{
amt=(3*km*days);
number="MH 04 KL 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="DL 01 BF 2536";
}
else if(coupon=="flat20")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="DL 01 BF 2536";
}
else
{
amt=(3*km*days);
number="DL 01 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="KA 01 BF 7781";
}
else if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="KA 01 CF 7781";
}
else
{
amt=(3*km*days);
number="KA 01 CF 7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
case 4:
{
brand="TOYOTA";
type="SUV";
color="WHITE";
cout<<"TOYOTA"<<endl;
cout<<"Enter number of kilometers travelled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=3;
int price_d=4;
int price_b=3;
cout<<"Price in Mumbai is ₹3/km"<<endl;
cout<<"Price in Delhi is ₹4/km"<<endl;
cout<<"Price in Bangalore is ₹3/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="MH 04 OQ 6420";
}
else if(coupon=="flat20")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="MH 04 OQ 6420";
}
else
{
amt=(3*km*days);
number="MH 04 OQ 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(4*km*days)-((4*km*days)*0.1);
number="DL 03 BF 2536";
}
else if(coupon=="flat20")
{
amt=(4*km*days)-((4*km*days)*0.2);
number="DL 03 BF 2536";
}
else
{
amt=(4*km*days);
number="DL 03 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="KA 01 FG 7781";
}
else if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="KA 01 FG 7781";
}
else
{
amt=(3*km*days);
number="KA 01 FG 7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
case 5:
{
brand="KIA";
type="SEDAN";
color="BLACK";
cout<<"KIA"<<endl;
cout<<"Enter number of kilometers travelled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=3;
int price_d=2;
int price_b=3;
cout<<"Price in Mumbai is ₹3/km"<<endl;
cout<<"Price in Delhi is ₹2/km"<<endl;
cout<<"Price in Bangalore is ₹3/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="MH 04 GG 6420";
}
else if(coupon=="flat20")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="MH 04 GG 6420";
}
else
{
amt=(3*km*days);
number="MH 04 GG 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="DL 03 BF 2536";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="DL 03 BF 2536";
}
else
{
amt=(2*km*days);
number="DL 03 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="KA 01 LK 7781";
}
else if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="KA 01 BM 7781";
}
else
{
amt=(3*km*days);
number="KA 01 LL 7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
case 6:
{
brand="HYUNDAI";
type="SEDAN";
color="RED";
cout<<"HYUNDAI"<<endl;
cout<<"Enter number of kilometers travelled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=2;
int price_d=2;
int price_b=2;
cout<<"Price in Mumbai is ₹2/km"<<endl;
cout<<"Price in Delhi is ₹2/km"<<endl;
cout<<"Price in Bangalore is ₹2/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="MH 04 PQ 6420";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="MH 04 PQ 6420";
}
else
{
amt=(2*km*days);
number="MH 04 PQ 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="DL 03 BF 2536";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="DL 03 BF 2536";
}
else
{
amt=(2*km*days);
number="DL 03 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="KA 01 LP 7781";
}
else if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="KA 01 LP 7781";
}
else
{
amt=(2*km*days);
number="KA 01 LP 7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
case 7:
{
brand="HONDA";
type="SUV";
color="BLUE";
cout<<"HONDA"<<endl;
cout<<"Enter number of kilometers travelled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=3;
int price_d=4;
int price_b=3;
cout<<"Price in Mumbai is ₹3/km"<<endl;
cout<<"Price in Delhi is ₹4/km"<<endl;
cout<<"Price in Bangalore is ₹3/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="MH 04 GG 6420";
}
else if(coupon=="flat20")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="MH 04 FR 6420";
}
else
{
amt=(3*km*days);
number="MH 04 FP 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(4*km*days)-((4*km*days)*0.1);
number="DL 03 BF 2536";
}
else if(coupon=="flat20")
{
amt=(4*km*days)-((4*km*days)*0.2);
number="DL 03 BF 2536";
}
else
{
amt=(4*km*days);
number="DL 03 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="KA 01 BL 7781";
}
else if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="KA 01 BL 7781";
}
else
{
amt=(3*km*days);
number="KA 01 BL 7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
case 8:
{
brand="MAHINDRA";
type="SUV";
color="WHITE";
cout<<"MAHINDRA"<<endl;
cout<<"Enter number of kilometers travelled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=3;
int price_d=3;
int price_b=3;
cout<<"Price in Mumbai is ₹3/km"<<endl;
cout<<"Price in Delhi is ₹3/km"<<endl;
cout<<"Price in Bangalore is ₹3/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="MH 04 FF 6420";
}
else if(coupon=="flat20")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="MH 04 FF 6420";
}
else
{
amt=(3*km*days);
number="MH 04 FF 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="DL 03 BF 2536";
}
else if(coupon=="flat20")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="DL 03 BF 2536";
}
else
{
amt=(3*km*days);
number="DL 03 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="KA 01 LL 7781";
}
else if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="KA 01 LP 7781";
}
else
{
amt=(3*km*days);
number="KA 01 WK7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
case 9:
{
brand="TATA";
type="SEDAN";
color="BLUE";
cout<<"TATA"<<endl;
cout<<"Enter number of kilometers travelled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=2;
int price_d=2;
int price_b=2;
cout<<"Price in Mumbai is ₹2/km"<<endl;
cout<<"Price in Delhi is ₹2/km"<<endl;
cout<<"Price in Bangalore is ₹2/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="MH 04 PL 6420";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="MH 04 PL 6420";
}
else
{
amt=(2*km*days);
number="MH 04 PL 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="DL 07 BF 2536";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="DL 07 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="KA 01 LL 7781";
}
else if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="KA 01 LP 7781";
}
else
{
amt=(3*km*days);
number="KA 01 WK7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
case 10:
{
brand="INDICA";
type="SEDAN";
color="BLACK";
cout<<"INDICA"<<endl;
cout<<"Enter number of kilometers travelled in a day:"<<endl;
cin>>km;
cout<<"Enter number of days"<<endl;
cin>>days;
int price_m=2;
int price_d=3;
int price_b=3;
cout<<"Price in Mumbai is ₹2/km"<<endl;
cout<<"Price in Delhi is ₹3/km"<<endl;
cout<<"Price in Bangalore is ₹3/km"<<endl;
cout<<"Enter your city: "<<endl;
cin>>city;
transform(city.begin(), city.end(), city.begin(), ::tolower);
cout<<"Enter Coupon Code if applicable:"<<endl;
cin>>coupon;
transform(coupon.begin(),coupon.end(),coupon.begin(),::tolower);
if(city=="mumbai")
{
if(coupon=="flat10")
{
amt=(2*km*days)-((2*km*days)*0.1);
number="MH 04 HK 6420";
}
else if(coupon=="flat20")
{
amt=(2*km*days)-((2*km*days)*0.2);
number="MH 04 BF 6420";
}
else
{
amt=(2*km*days);
number="MH 04 LK 6420";
}
}
else if(city=="delhi")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="DL 03 BF 2536";
}
else if(coupon=="flat20")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="DL 03 BF 2536";
}
}
else if(city=="bangalore")
{
if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.1);
number="KA 01 LL 7781";
}
else if(coupon=="flat10")
{
amt=(3*km*days)-((3*km*days)*0.2);
number="KA 01 LP 7781";
}
else
{
amt=(3*km*days);
number="KA 01 WK7781";
}
}
else
{
cout<<"Re-Enter your city: "<<endl;
cin>>city;
}
cout<<"Amount is:"<<"₹"<<amt<<endl;
break;
}
default:
{
cout<<"Enter valid input";
cin>>ch;
}
}
cout<<"Do you want to re-book? yes or no"<<endl;
cin>>decide;
if(decide=="no")
{
{
cout<<"**** E-Invoice ****"<<endl;
cout<<endl;
cout<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Billing Amount: "<<"₹"<<amt<<endl;
cout<<"Phone number: "<<num<<endl;
cout<<"City: "<<loc<<endl;
cout<<"Booking Dates: "<<start_date<<"--"<<end_date<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"**** Car Details ****";
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"The Car Brand is: "<<brand<<endl;
cout<<"The Car Model is: "<<type<<endl;
cout<<"The Car Colour is: "<<color<<endl;
cout<<"The Car Number is: "<<number<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"Helpline Number: 1408-400438"<<endl;
cout<<endl;
} cout<<"*** THANK YOU ****"<<endl;
}
else
{
options();
}
}
};
int main()
{
Cars obj;
obj.display();
obj.user_input();
obj.options();
return 0;
}
