#include <bits/stdc++.h> 
#include "Student.h" 
using namespace std;
bool cmp(My_student& a, My_student& b)
{
	return a.total > b.total;
}
Student::Student() :LIMIT(10) //��ǰû�м���������д����������
//���캯�� --��Ҫ�޸ģ������ڽ��ͣ�
{
	for (int i = 0; i < 10; i++)
	{
		stu[i].name[0] = '\0'; //ѧ������Ϊ�գ�Ϊʲô���� name[11]="" //�� name[0] =""; ��name[0]="\0"; 
		stu[i].eng_score = 0.0; //��Ӣ��ɼ���float��
		stu[i].math_score = 0.0;//����ѧ�ɼ���float��
		stu[i].chinese_score = 0.0;//�����ģ�float��
		stu[i].total = 0.0;//���ܳɼ���float����
	}
	counter = 0;   //�ոտ�ʼʱ��������ʵ��Ԫ��Ϊ 0 
}
void Student::Get_Data(int num)
{
	for (int i = 0; i < num; i++)
	{
		cin >> stu[i].name;
		cin >> stu[i].eng_score;
		cin >> stu[i].math_score;
		cin >> stu[i].chinese_score;
		stu[i].total += stu[i].eng_score;
		stu[i].total += stu[i].math_score;
		stu[i].total += stu[i].chinese_score;
		counter++;
	}
}
void Student::Prt_Data()
{
	for (int i = 0; i < counter; i++)
	{
		cout << stu[i].name << " ";
		cout << stu[i].eng_score << " ";
		cout << stu[i].math_score << " ";
		cout << stu[i].chinese_score << " ";
		cout << stu[i].total << endl;
	}
}
void Student::Sort_Data()
{
	sort(stu, stu + counter, cmp);
}