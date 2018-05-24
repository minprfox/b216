#include<iostream>
 using namespace std;
 int main(){
 	int x,y,price=0,r=0,s[9]{0};

 	for(int i=0;i<9;i++){
 		cin>>x>>y;
		 if(x>0 &&x<10){
		 	if(y>0 &&y<10){
		 		price=price+8;
		 		s[7]=1;
			}
		 	if(y>10 && y<20){
		 		price=price+5;
			 	s[8]=1;		 		
			 }
			 if(y>20 &&y<30){
			 	price=price+8;
			 	s[9]=1;
			 }
		}
		if(x>10 &&x<20){
		 	if(y>0 &&y<10){
		 		price=price+5;
		 		s[4]=1;
			}
		 	if(y>10 && y<20){
		 		price=price+2;
			 	s[5]=1;		 		
			 }
			 if(y>20 &&y<30){
			 	price=price+5;
			 	s[6]=1;
			 } 
		}
		if( x>20 && x<30){
		 	if(y>0 &&y<10){
		 		price=price+8;
		 		s[1]=1;
			}
		 	if(y>10 && y<20){
		 		price=price+5;
			 	s[2]=1;		 		
			 }
			 if(y>20 &&y<30){
			 	price=price+8;
			 	s[3]=1;
			 }
		 }
					 	
	 }
	 
 	if(s[1]+s[2]+s[3]==3)
 		r++;
 	if(s[4]+s[5]+s[6]==3)
 		r++;
 	if(s[7]+s[8]+s[9]==3)
 		r++;
	if(s[4]+s[1]+s[7]==3)
 		r++;
 	if(s[5]+s[2]+s[8]==3)
 		r++;
 	if(s[9]+s[6]+s[3]==3)
 		r++;
 	cout<<r<<"  "<<price;
 }
