#ifndef STU_H  //���������ã�������͡���Ȼֱ�ӿ��԰ٶȽ����
#define STU_H
struct My_student {
	char name[11]; //ѧ������ 
	float eng_score; //��Ӣ��ɼ���float��
	float math_score;//����ѧ�ɼ���float��
	float chinese_score;//�����ģ�float��
	float total;//���ܳɼ���float����   
};

class Student {
public:
	Student();  //���캯�� 
	void  Get_Data(int num);
	// �Ӽ���������num������ĳ�Աֵ
	void  Prt_Data();   // ��ӡcounter������Ԫ�صĳ�Աֵ 
	void  Sort_Data();   //����total��ֵ��������,ʵ�ʸ���Ϊcounter 
private:
	struct My_student  stu[10]; //�������10��ѧ��
	int counter;       //����ʵ��ʹ�õĸ���    
	const int LIMIT;   //�������󳤶�,��10              	
};
#endif