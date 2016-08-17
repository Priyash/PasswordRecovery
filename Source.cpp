#include"Password.h"
#include<iostream>

using namespace std;



int main()
{

	IPasswordCombo* pcombo = new Password6digitCombo();
	pcombo->load();
	pcombo->crack();



	return 0;
}