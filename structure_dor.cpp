#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string b[50000];
	ifstream agra;
	ofstream dor1;
	int i=0;
	
	agra.open("sample.prn");
	dor1.open("dor1.txt");
	while(!agra.eof())
{
	agra>>b[i];
	i++;
}

	dor1<<b[0]<<b[1]<<" "<<b[3]<<b[4]<<b[5]<<b[6]<<" "<<b[8]<<b[9]<<b[10]<<b[11]<<" "<<b[13]<<b[14]<<b[15]<<b[16]<<" "<<b[18]<<b[19]<<b[20]<<b[21]<<b[22];
	dor1<<std::endl;
	
for(int k=0;k<=i;k=k+24){
dor1<<b[k+2]<<" "<<b[k+7]<<" "<<b[k+12]<<" "<<b[k+17]<<" "<<b[k+23];
dor1<<std::endl;
}
	return 0;
}
