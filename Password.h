#ifndef PASSWORD_H
#define PASSWORD_H
#include<string>
#include<vector>
#include<fstream>
#include<iostream>
#include<sstream>



using namespace std;



class IPasswordCombo
{
	
public:
	vector<string>data;

	IPasswordCombo()
	{

	}

	~IPasswordCombo()
	{

	}

	virtual void load() = 0;
	virtual void crack() = 0;
	
};


class Password6digitCombo :public IPasswordCombo
{
	char alphabet[26];
	ifstream reader;
	ofstream writer;
	const int SIZE = 26;
	vector<string>list;
	int password_size;
public:
	Password6digitCombo()
	{
		reader.open("alphabet.txt", ios::in);
		writer.open("password.txt", ios::out);
		password_size = 6;
	}

	~Password6digitCombo()
	{

	}

	void load();
	void crack();
	vector<string>getList(){ return list; }


private:
	void generate(string , int );

	
	
};























#endif