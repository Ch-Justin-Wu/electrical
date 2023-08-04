#include <stdio.h>

// ����һ���� 
class student
{
public:
	// ������� 
    void Init(char *__name, int __year); // ��ʵ����һ�ָ���׼����˵�����˵ĳ�ʼ����ʽ, ���������������Щ���� 
    void PrintInfo();
    
    // һ�ֳ�Ա������������ʽ 
    void foo()
    {
    	printf("%d\n", 1);
	}
protected:
    // ����������������(�̳�)�ڷ��� 
	char *name;
	int year;
private:
	// ���������ڷ��� 
	int useless;
};

void student::Init(char *__name, int __year)
{
	name = __name;
	year = __year;
}

void student::PrintInfo()
{
	printf("Student`s name is %s. Enrollment year is %d\n", name, year);
}

// ���������̳� 
// student�������˴���, ����˵����̳���student
// �̳з�ʽΪpublic 
class student_with_department : public student
{
public:
    void Init(char *__name, int __year, int __department); // ���������Ḳ��, ֮ǰ�Ĳ������� 
    // ����ʾ�� 
    void PrintInfo(int a, int b)
    {
    	printf("Student`s name is %s. Enrollment year is %d\n", name, year);
	}
    void PrintInfo(int a, int b, int c)
    {
    	printf("Student`s name is %s. Enrollment year is %d. Department code is %d\n", name, year, department);
	}
protected:
	int department;
};

void student_with_department::Init(char *__name, int __year, int __department)
{
	name = __name;
	year = __year;
	department = __department; 
}

int main()
{
	student_with_department newstudent;
	newstudent.Init("Yij", 2018, 6);
	newstudent.PrintInfo(1, 1);
	newstudent.PrintInfo(1, 1, 1);
} 
