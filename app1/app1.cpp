// app1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#pragma comment(lib,"libmysql.dll")
#include <iostream>
#include <stdio.h>
#include <string>
#include <io.h>
#include <process.h>
#include <windows.h>
#include <csignal>
#include <vector>
#include <list>
#include <mysql.h>
using namespace std;
int main()
{
	MYSQL *sql=(MYSQL *)calloc(sizeof(MYSQL),1);
	//if (sql == NULL) {
	//	exit(-1);
	//}
	//char db[10] = "abc";
	//sql->db = db;

	MYSQL_RES* res;
	MYSQL_ROW row;
	mysql_init(sql);
	//mysql_server_init();
	mysql_options(sql, MYSQL_SET_CHARSET_NAME, "gbk");
	if (mysql_real_connect(sql, "localhost", "root", "123456", "荆雪虎的数据库1s", 3306,NULL, 0) == NULL) {
		cerr << "连接数据库失败" << endl;
	}
	else {
		cout << "链接数据库成功" << endl;
	}
	return 0;
}
//int time_count = 0;
//void fun_c(void) {
//	int overtime_ms = 3000;
//	int overtime_count = 0;
//	int current_bus_state = 1;
//	while (1) {
//		overtime_count = time_count + overtime_ms;
//		while (1) {
//			if (overtime_count <= time_count) {
//				send_idle();
//				break;
//			}
//			else {
//				continue;
//			}
//		}
//	}
//}