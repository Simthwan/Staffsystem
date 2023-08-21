#include<iostream>
#include "workerManager.h"
using namespace std;

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	//ʵ���������߶���
	WorkerManager wm;

	int choice = 0;
	while (true)
	{
		wm.show_Menu();
		cout << "����������ѡ��: " << endl;
		cin >> choice;

		switch (choice) 
		{
		case 0: { //�˳�ϵͳ
			wm.ExitSystem();
			break;
		}
		case 1: { //����Ա��
			wm.Add_Emp();
			break;
		}
		case 2: { //��ʾԱ��
			wm.Show_Emp();
			break;
		}
		case 3: { //ɾ��Ա��
			wm.Del_Emp();
			break;
		}
		case 4: { //�޸�Ա��
			wm.Mod_Emp(); 
			break;
		}
		case 5: { //����Ա��
			wm.Find_Emp();
			break;
		}
		case 6: { //����
			wm.Sort_Emp();
			break;
		}
		case 7: { //����ĵ�
			wm.Clean_File();
			break;
		}
		default: {
			system("cls");
			break;
		}
		}
	}

	//���ó�Ա����
	wm.show_Menu();
	system("pause");
	return 0;
}