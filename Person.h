class CPerson
{
public:
	CPerson(int iIndex, short shAge, double dSalary);//���캯��
	CPerson(CPerson& copyPerson);//���ƹ��캯��
	int m_iIndex;
	short m_shAge;
	double m_dSalary;
	int getIndex();
	short getAge();
	double getSalary();
};
