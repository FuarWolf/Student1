#include <iostream>
#include <string>
using namespace std;
class Student {
private:
	int id;
	string FIO;
	int marks[3];
public:
	Student() { cout << " Hi, Student" << endl; };

	~Student() { cout << endl << " GoodBye, Student" << endl; };
	void setId(int z) { id = z; };
	int getId() { return id; };

	void setFIO(string Name) { FIO = Name; };
	string getFIO() { return FIO; };
	void setMarks(int a, int b, int c);
	void getMarks();
};
void Student::setMarks(int a, int b, int c)
{
	marks[0] = a;
	marks[1] = b;
	marks[2] = c;
}
void Student::getMarks()
{
	for (int i = 0;i < 3;i++)
		cout << marks[i] << " ";
}
int main() {
	int size, i;
	cout << "Enter number of students: ";
	cin >> size;
	Student* arr = new Student[size];
	for (i = 0; i < size; i++) {
		arr[i].setId(i);
		arr[i].setFIO("Ivanov Ivan");
	}

	cout << "Are in array: \n";
	for (i = 0; i < size; i++)
		cout << arr[i].getId() << " " << arr[i].getFIO() << endl;
	return 0;
}

