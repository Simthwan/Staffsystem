//普通职工头文件
#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class Employee :public Worker //继承抽象父类 重写纯虚函数，实现多态
{
public:
	//构造函数
	Employee(int id,string name,int dId);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();
};