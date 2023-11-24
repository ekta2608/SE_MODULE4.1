

#include<iostream>

using namespace std;
class Cricketer{
	public:
		int age;
		char name[30];
		
		void inputData(){
			cout<<"Enter Cricketer Name: ";
			//cin>> name;
			gets(name);
			cout<<"Enter Cricketer Age:";
			cin>>age;
		}		
};

class Batsman:public Cricketer{
	public:
		int totalRuns, bestPerformance, totalInn, totalNo;
		float averageRuns;
		
		void inputbatsmanData(){
			inputData();
			cout<<"Enter Total Runs(Runs): "<<endl;
			cin>>totalRuns;
			cout<<"Enter Best Performance: "<<endl;
			cin>>bestPerformance;
			cout<<"Enter Total Innings Played(Inn):"<<endl;
			cin>>totalInn;
			cout<<"Enter Total NotOut(NO):"<<endl;
			cin>>totalNo;
		}
		void calculateAverageRuns(){
			if(bestPerformance!=0)
			{
				averageRuns=(float)totalRuns / (totalInn - totalNo);
			}
			else
			{
				averageRuns=(float)0.0;
			}
		}
		void displayData() {
        cout << "\nBatsman Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age <<" Years" <<endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: "<< bestPerformance << endl;
   		}	
};
int main() {
    Batsman bm;

    bm.inputbatsmanData();
    bm.calculateAverageRuns();
    bm.displayData();

    return 0;
}
