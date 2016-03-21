#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "BMI.h"
using namespace std;
int main(){
    Record record;
	float bmi,tmp1,tmp2;
	 
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening file.in"<<endl;
		exit(1);
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr<<"Failed opening file.out"<<endl;
		exit(1);
	}
	while(inFile>>tmp1>>tmp2){
		if(tmp1==0&&tmp2==0)
		break;	
		record.set_height(tmp1);
		record.set_weight(tmp2);
		bmi = record.BMI(record.get_height(),record.get_weight());
		outFile<<fixed<<setprecision(2)<<bmi<<"\t"<<record.category(bmi)<<endl;	//set 2 decimal point
	}
	return 0;
}			
