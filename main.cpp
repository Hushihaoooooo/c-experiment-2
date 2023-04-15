#include <iostream>   //不要修改主程序。
#include "student.h" 
using namespace std;
int main()
{
	Student s;
	// 定义一个对象即可，在该对象中至多可以管理10个学生数据 
	s.Get_Data(5);   //从键盘上读取5个学生的数据 
	s.Prt_Data();   //输出数据到屏幕 ，带总分, 无排序 
	cout << "\n---------------------------------\n";  //显示时数据分隔	
	s.Sort_Data();
	//对对象数组stu[10]中的前counter个数据进行排序 
	s.Prt_Data();   //输出数据到屏幕 ，带总分 ，有排序 
}