#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
string NIC,n;
int N,l;
std::cout<<"INPUT NIC NUMBER (WITHOUT V) : ";
cin>>NIC;
n=NIC.substr(2,3);
N = atoi(n.c_str());
l=NIC.length();
if (!(l==9)){
		cout<<" WRONG NIC NUMBER ";
	}
else if (N>500){
	cout<<"GENDER : "<<" FEMALE "<<endl;
	N=N-500;
   if(N<= 31){
   	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"1"<<"-"<<N;
   }
  else if(N <= 60){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"2"<<"-"<<(N-31);
  }
  else if(N <= 91){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"3"<<"-"<<(N-60);
  }
  else if(N <= 121){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"4"<<"-"<<(N-91);
  } 
  else if(N <= 152){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"5"<<"-"<<(N-121);
  }
  else if(N <= 182){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"6"<<"-"<<(N-152);
  }
  else if(N <= 213){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"7"<<"-"<<(N-182);
  }
  else if(N <= 244){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"8"<<"-"<<(N-213);
  }
  else if(N <= 274){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"9"<<"-"<<(N-244);
  }
  else if(N <= 305){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"10"<<"-"<<(N-274);
  }
  else if(N <= 335){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"11"<<"-"<<(N-305);
  }
  else if(N <= 366){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"12"<<"-"<<(N-355);
  } 
  else{
  	cout<<" WRONG NIC NUMBER";
  }
}
else{
	cout<<"GENDER : "<<"MALE"<<endl;
 if(N<= 31){
   	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"1"<<"-"<<N;
   }
  else if(N <= 60){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"2"<<"-"<<(N-31);
  }
  else if(N <= 91){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"3"<<"-"<<(N-60);
  }
  else if(N <= 121){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"4"<<"-"<<(N-91);
  } 
  else if(N <= 152){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"5"<<"-"<<(N-121);
  }
  else if(N <= 182){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"6"<<"-"<<(N-152);
  }
  else if(N <= 213){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"7"<<"-"<<(N-182);
  }
  else if(N <= 244){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"8"<<"-"<<(N-213);
  }
  else if(N <= 274){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"9"<<"-"<<(N-244);
  }
  else if(N <= 305){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"10"<<"-"<<(N-274);
  }
  else if(N <= 335){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"11"<<"-"<<(N-305);
  }
  else if(N <= 366){
  	cout<<"BIRTHDAY : "<<"19"<<NIC.substr(0,2)<<"-"<<"12"<<"-"<<(N-355);
  } 
  else{
  	cout<<" WRONG NIC NUMBER";
  }
}


return 0;
}

