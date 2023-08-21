#include<iostream>
#include "workerManager.h"
using namespace std;

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	//实例化管理者对象
	WorkerManager wm;

	int choice = 0;
	while (true)
	{
		wm.show_Menu();
		cout << "请输入您的选择: " << endl;
		cin >> choice;

		switch (choice) 
		{
		case 0: { //退出系统
			wm.ExitSystem();
			break;
		}
		case 1: { //增加员工
			wm.Add_Emp();
			break;
		}
		case 2: { //显示员工
			wm.Show_Emp();
			break;
		}
		case 3: { //删除员工
			wm.Del_Emp();
			break;
		}
		case 4: { //修改员工
			wm.Mod_Emp(); 
			break;
		}
		case 5: { //查找员工
			wm.Find_Emp();
			break;
		}
		case 6: { //排序
			wm.Sort_Emp();
			break;
		}
		case 7: { //清空文档
			wm.Clean_File();
			break;
		}
		default: {
			system("cls");
			break;
		}
		}
	}

	//调用成员函数
	wm.show_Menu();
	system("pause");
	return 0;
}