BMI_calc: BMI.o BMI_calc.o
	g++ -o BMI_calc BMI_calc.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

BMI_calc.o: BMI_calc.cpp BMI.h
	g++ -c BMI_calc.cpp

clean:
	rm BMI_calc *.o
