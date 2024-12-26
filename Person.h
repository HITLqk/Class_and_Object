class CPerson
{
public:
	CPerson(int iIndex, short shAge, double dSalary);//构造函数
	CPerson(CPerson& copyPerson);//复制构造函数
	int m_iIndex;
	short m_shAge;
	double m_dSalary;
	int getIndex();
	short getAge();
	double getSalary();
};
