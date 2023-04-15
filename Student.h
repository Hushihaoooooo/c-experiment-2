#ifndef STU_H  //这里宏的作用，后面解释。当然直接可以百度解决。
#define STU_H
struct My_student {
	char name[11]; //学生姓名 
	float eng_score; //（英语成绩，float）
	float math_score;//（数学成绩，float）
	float chinese_score;//（语文，float）
	float total;//（总成绩，float）。   
};

class Student {
public:
	Student();  //构造函数 
	void  Get_Data(int num);
	// 从键盘上输入num个对象的成员值
	void  Prt_Data();   // 打印counter个数组元素的成员值 
	void  Sort_Data();   //依据total的值进行排序,实际个数为counter 
private:
	struct My_student  stu[10]; //至多管理10个学生
	int counter;       //数组实际使用的个数    
	const int LIMIT;   //数组的最大长度,即10              	
};
#endif