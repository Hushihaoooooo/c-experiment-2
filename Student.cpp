#include <bits/stdc++.h> 
#include "Student.h" 
using namespace std;
bool cmp(My_student& a, My_student& b)
{
	return a.total > b.total;
}
Student::Student() :LIMIT(10) //以前没有见过这样书写，后面讨论
//构造函数 --不要修改！后面在解释！
{
	for (int i = 0; i < 10; i++)
	{
		stu[i].name[0] = '\0'; //学生姓名为空，为什么不是 name[11]="" //或 name[0] =""; 或name[0]="\0"; 
		stu[i].eng_score = 0.0; //（英语成绩，float）
		stu[i].math_score = 0.0;//（数学成绩，float）
		stu[i].chinese_score = 0.0;//（语文，float）
		stu[i].total = 0.0;//（总成绩，float）。
	}
	counter = 0;   //刚刚开始时，数组中实际元素为 0 
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