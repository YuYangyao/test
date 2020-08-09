#include<iostream>
using namespace std;
#include<string>
#include<fstream>//引用头文件
int main()
{
	ofstream ofs;//创建流对象
	ofs.open("text.txt", ios::out);//指定打开方式
	//写内容
	ofs << "姓名： 张三" << endl;
	ofs << "性别： 男" << endl;
	ofs << "年龄： 18" << endl;
	ofs.close();//关闭文件
	system("pause");
	return 0;
}