#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		int age;
		
	public:
		student(const string& name,int age)
		:name(name),age(age){
			cout<<"constructor name\n"<<name<<endl;
		}
		~student(){
			cout<<"destructor name is:\n"<<name<<endl;
		}
		void display(){
			cout<<"name\n"<<name<<"age\n"<<age;
		}
	};
	int main(){
	
		student student1("shakthi",1922284);
		student student2("sam",1922233);
		
		student1.display();
		student2.display();
	

}
