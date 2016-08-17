#include"Password.h"


void Password6digitCombo::load()
{
	string line="";
	int index = 0;
	while (getline(reader, line))
	{
		alphabet[index] = line[0];
		index++;
	}
}

void Password6digitCombo::crack()
{
	int length = 6;
	while (1)
	{
		generate("", length);
		length++;
	}
}



void Password6digitCombo::generate(string s,int n)
{
	if (n == 0)
	{
		cout << s << endl;
		writer << s << endl;
		return;
	}

	for (int i = 0; i < SIZE; i++)
	{
		string appended = s + alphabet[i];
		generate(appended, n - 1 );
	}

}

