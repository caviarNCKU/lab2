#include "BMI.h"

		Record::Record(){
		     set_weight(weight);
		     set_height(height);
		}
		void Record::set_weight(float a){
		     weight=a;	
		}
		void Record::set_height(float a){
		     height=a;	
		}
		float Record::get_height(){
		    return height;	
		}
		float Record::get_weight(){
		    return weight;
		}
		float Record::BMI(float a,float b){
			a = a/100;
			float bmi;
			bmi = b/(a*a);
			return bmi;
		}
		string Record::category(float bmi){
			string str1("Very severely underweight");
			string str2("Severely underweight");
			string str3("Underweight");
			string str4("Normal");
			string str5("Overweight");
			string str6("Obese Class I(Moderately obese)");
			string str7("Obese Class II(Severely obese)");
			string str8("Obese Class III(Very severely obese)");
			if(bmi<15)			
			return str1;
			else if(bmi>=15.0&&bmi<16.0)
			return str2;
			else if(bmi>=16.0&&bmi<18.5)
			return str3;
			else if(bmi>=18.5&&bmi<25)
			return str4;
			else if(bmi>=25&&bmi<30)
			return str5;
			else if(bmi>=30&&bmi<35)		
			return str6;
			else if(bmi>=35&&bmi<40)
			return str7;
			else return str8;
		}
