#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string b[50000],a[5000][9],fw[5000];
	ifstream agra;
	ofstream dor1;
	int i=0;
	for(int x=0;x<5000;x++)
	{
		for(int y=0;y<9;y++)
		{
			a[x][y]="NA";
			
		}

	}
	int f=0;
	agra.open("sample1.prn");
	dor1.open("dorf.txt");
	while(!agra.eof())
{
	agra>>b[i];
	i++;
}
	
	int j=0;
	int k;
for(k=0;k<=i;k+=14)
{

 if(b[k]=="Breakfast")
	
	{
	a[j][0]=b[k+1];
	a[j][1]=b[k+3];
	a[j][2]=b[k+5];
	a[j][3]=b[k+7];
	a[j][4]=b[k+9];
	a[j][5]=b[k+11];
	a[j][6]=b[k+15];
	
	if(b[k+17]=="WiFi")
	{
	a[j][7]=b[k+18];
	if(b[k+16]=="Free")
	{
		fw[j]="yes";
	
	}
	else
	{
		fw[j]="no";
	
	}
	if(b[k+19]=="Rooms")
	{
		a[j][8]=b[k+20];
		k=k+2;
	}
	k=k+3;
} else 

if(b[k+16]=="Rooms")
  {
  	a[j][8]=b[k+17];
  	k=k+2;
  	
  	
  }
	j++;
	k=k+2;
	

}

else 	if(b[k]=="Cleanliness")
	{
		{
    a[j][1]=b[k+1];
    a[j][2]=b[k+3];
    a[j][3]=b[k+5];
    a[j][4]=b[k+7];
    a[j][5]=b[k+9];
	a[j][6]=b[k+13];

	if(b[k+15]=="WiFi")
	{
	a[j][7]=b[k+16];
    if(b[k+14]=="Free")
    {
    	fw[j]="yes";
	}
	else
	{
		fw[j]="no";
		
	}
	if(b[k+17]=="Rooms")
	{
		a[j][8]=b[k+18];
		k=k+2;
	}
		k=k+3;
} else if(b[k+14]=="Rooms")
  {
  	a[j][8]=b[k+15];
  	k=k+2;
  	
  }

    
	j++;
	}
	
}
}
string h[10]={"Breakfast","Cleanliness","Comfort","Location","Facilities","Staff","ValueforMoney","WiFi","Rooms","FreeWiFi?"};
dor1<<h[0]<<" "<<h[1]<<" "<<h[2]<<" "<<h[3]<<" "<<h[4]<<" "<<h[5]<<" "<<h[6]<<" "<<h[7]<<" "<<h[8]<<" "<<h[9]<<std::endl;

for(int x=0;x<j;x++)
{
	for(int y=0;y<9;y++)
	{
		dor1<<a[x][y]<<" ";
	}
	
	dor1<<fw[x]<<std::endl;
}
	return 0;
}
