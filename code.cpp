#include<iostream>
using namespace std;
int main()
{
 int p1t1,p1t2,p1t3,p1t4,p1t5,p2t1,p2t2,p2t3,p2t4;
 bool flag=false;
	cout<<"1|2|3"<<endl;
	cout<<"-----"<<endl;
	cout<<"4|5|6"<<endl;
	cout<<"-----"<<endl;
	cout<<"7|8|9"<<endl;
	
	cout<<"Player 1 Turn:";
	cin>>p1t1;
	
	cout<<"Player 2 Turn:";
	cin>>p2t1;
	
	cout<<"Player 1 Turn:";
	cin>>p1t2;
	
	cout<<"Player 2 Turn:";
	cin>>p2t2;
	
	cout<<"Player 1 Turn:";
	cin>>p1t3;
	flag=false;
	

	
	while(p1t1 && p2t2 >0)
	{
		
	if(p1t1==1 && p1t2==2 && p1t3==3)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==3 && p1t2==2 && p1t3==1)
	{
	cout<<"P1 WINS!";
	break;
    }
	
	if(p1t1==4 && p1t2==5 && p1t3==6)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==6 && p1t2==5 && p1t3==4)
	{
	cout<<"P1 WINS!";
	break;
    }
	
	if(p1t1==7 && p1t2==8 && p1t3==9)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==9 && p1t2==8 && p1t3==7)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==1 && p1t2==5 && p1t3==9)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==9 && p1t2==5 && p1t3==1)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==3 && p1t2==5 && p1t3==7)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==7 && p1t2==5 && p1t3==3)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==1 && p1t2==4 && p1t3==7)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==7 && p1t2==4 && p1t3==1)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==3 && p1t2==6 && p1t3==9)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==9 && p1t2==6 && p1t3==3)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==2 && p1t2==5 && p1t3==8)
	{
	cout<<"P1 WINS!";
	break;
    }
    
    if(p1t1==8 && p1t2==5 && p1t3==2)
	{
	cout<<"P1 WINS!";
	break;
    }
    
	if(p2t1==1 && p2t2==2 && p2t3==3)
	{
	cout<<"P2 WINS!";
	break;
    }
    
    if(p2t1==3 && p2t2==2 && p2t3==1)
	{
	cout<<"P2 WINS!";
	break;
    }
		
	if(p2t1==4 && p2t2==5 && p2t3==6)  
	{
	cout<<"P2 WINS!";
	break;
    }
    
    if(p2t1==6 && p2t2==5 && p2t3==4)
	{
	cout<<"P2 WINS!";
	break;
    }
	
	if(p2t1==7 && p2t2==8 && p2t3==9)
	{
	cout<<"P2 WINS!";
	break;
    }
    
    if(p2t1==9 && p2t2==8 && p2t3==7)
	{
	cout<<"P2 WINS!";
	break;
    }
    
    if(p2t1==1 && p2t2==5 && p2t3==9)
	{
	cout<<"P2 WINS!";
	break;
    }
    
    if(p2t1==9 && p2t2==5 && p2t3==1)
	{
	cout<<"P2 WINS!";
	break;
    }
    
    if(p2t1==1 && p2t2==4 && p2t3==7)
	{
	cout<<"P2 WINS!";
	break;
    }
    
     if(p2t1==7 && p2t2==4 && p2t3==1)
	{
	cout<<"P2 WINS!";
	break;
    }
    
     if(p2t1==9 && p2t2==6 && p2t3==3)
	{
	cout<<"P2 WINS!";
	break;
    }
    
     if(p2t1==3 && p2t2==6 && p2t3==9)
	{
	cout<<"P2 WINS!";
	break;
    }
    	cout<<"Player 2 Turn:";
	cin>>p2t3;
    
    cout<<"Player 1 Turn:";
    cin>>p1t4;
    
    
    
    if(p1t4==1 && p1t2==2 && p1t3==3)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==3 && p1t2==2 && p1t3==1)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==4 && p1t2==5 && p1t3==6)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==6 && p1t2==5 && p1t3==4)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==7 && p1t2==8 && p1t3==9)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==9 && p1t2==8 && p1t3==7)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==1 && p1t2==4 && p1t3==7)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==7 && p1t2==4 && p1t3==1)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==3 && p1t2==6 && p1t3==9)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==9 && p1t2==6 && p1t3==3)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==1 && p1t2==5 && p1t3==9)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==9 && p1t2==5 && p1t3==1)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==2 && p1t2==5 && p1t3==8)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==8 && p1t2==5 && p1t3==2)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==3 && p1t2==5 && p1t3==7)
 {
 cout<<"P1 WINS!";
 break;
}

if(p1t4==7 && p1t2==5 && p1t3==3)
 {
 cout<<"P1 WINS!";
 break;
}

if(p2t4==1 && p2t2==2 && p2t3==3)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==3 && p2t2==2 && p2t3==1)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==4 && p2t2==5 && p2t3==6)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==6 && p2t2==5 && p2t3==4)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==7 && p2t2==8 && p2t3==9)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==9 && p2t2==8 && p2t3==7)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==1 && p2t2==4 && p2t3==7)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==7 && p2t2==4 && p2t3==1)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==1 && p2t2==5 && p2t3==9)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==9 && p2t2==5 && p2t3==1)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==3 && p2t2==6 && p2t3==9)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==9 && p2t2==6 && p2t3==3)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==3 && p2t2==5 && p2t3==7)
{
cout<<"P2 WINS!";
break;
}

if(p2t4==7 && p2t2==5 && p2t3==3)
{
cout<<"P2 WINS!";
break;
}
if(p1t4==1 && p1t2==2 && p1t3==3)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==3 && p1t2==2 && p1t3==1)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==4 && p1t2==5 && p1t3==6)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==6 && p1t2==5 && p1t3==4)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==7 && p1t2==8 && p1t3==9)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==9 && p1t2==8 && p1t3==7)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==1 && p1t2==4 && p1t3==7)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==7 && p1t2==4 && p1t3==1)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==2 && p1t2==5 && p1t3==8)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==8 && p1t2==5 && p1t3==2)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==3 && p1t2==6 && p1t3==9)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==9 && p1t2==6 && p1t3==3)
{
cout<<"P1 WINS!";
break;	
}	

if(p1t4==1 && p1t2==5 && p1t3==9)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==9 && p1t2==5 && p1t3==1)
{
cout<<"P1 WINS!";
break;
	}
	
if(p1t4==3 && p1t2==5 && p1t3==7)
{
cout<<"P1 WINS!";
break;	
}

if(p1t4==7 && p1t2==5 && p1t3==3)
{
cout<<"P1 WINS!";
break;	
}

if(p2t4==1 && p2t2==2 && p2t3==3)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==3 && p2t2==2 && p2t3==1)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==4 && p2t2==5 && p2t3==6)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==6 && p2t2==5 && p2t3==4)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==7 && p2t2==8 && p2t3==9)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==9 && p2t2==8 && p2t3==7)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==1 && p2t2==4 && p2t3==7)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==7 && p2t2==4 && p2t3==1)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==2 && p2t2==5 && p2t3==8)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==8 && p2t2==5 && p2t3==2)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==3 && p2t2==6 && p2t3==9)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==9 && p2t2==6 && p2t3==3)
{
cout<<"P2 WINS!";
break;	
}


if(p2t4==1 && p2t2==5 && p2t3==9)
{
cout<<"P2 WINS!";
break;	
}

if(p2t4==9 && p2t2==5 && p2t3==1)
{
cout<<"P2 WINS!";
break;	
}

if(p2t4==3 && p2t2==5 && p2t3==7)
{
cout<<"P2 WINS!";
break;	
}

if(p2t4==7 && p2t2==5 && p2t3==3)
{
cout<<"P2 WINS!";
break;	
}


  cout<<"Player 1 Turn:";
   cin>>p1t5;
   
   cout<<"DRAW!!";

}
 
}
