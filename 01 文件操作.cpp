#include<iostream>
using namespace std;
#include<string>
#include<fstream>//����ͷ�ļ�
int main()
{
	ofstream ofs;//����������
	ofs.open("text.txt", ios::out);//ָ���򿪷�ʽ
	//д����
	ofs << "������ ����" << endl;
	ofs << "�Ա� ��" << endl;
	ofs << "���䣺 18" << endl;
	ofs.close();//�ر��ļ�
	system("pause");
	return 0;
}