#include <cstdlib>
#include <string>
using namespace std;
class Record{
	public:
		Record();
		void set_weight(float a);
		void set_height(float a);
		float get_height();
		float get_weight();
		float BMI(float a,float b);
		string category(float bmi);
	private:	
		float height;
		float weight;
};

	
