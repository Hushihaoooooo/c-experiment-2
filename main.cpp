#include <iostream>   //��Ҫ�޸�������
#include "student.h" 
using namespace std;
int main()
{
	Student s;
	// ����һ�����󼴿ɣ��ڸö�����������Թ���10��ѧ������ 
	s.Get_Data(5);   //�Ӽ����϶�ȡ5��ѧ�������� 
	s.Prt_Data();   //������ݵ���Ļ �����ܷ�, ������ 
	cout << "\n---------------------------------\n";  //��ʾʱ���ݷָ�	
	s.Sort_Data();
	//�Զ�������stu[10]�е�ǰcounter�����ݽ������� 
	s.Prt_Data();   //������ݵ���Ļ �����ܷ� �������� 
}