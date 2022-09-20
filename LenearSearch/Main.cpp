
#include <iostream>
using namespace std;

//�������� ����� ������� ��������� ��������� Value � ������ arr. ����� ���������� � ������� Begin �� ���������= 0
template <typename T>
int search_index(T arr[], const int lenght, T value, int begin = 0) {
	for (int i = begin; i < lenght; i++)
		if (arr[i] == value)
			return i;
	return -1;
}
//�������� ����� ���������� ��������� ��������� Value � ������ arr. 
template <typename T>
int search_last_index(T arr[], const int lenght, T value) {
	for (int i = lenght - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
//�������� ����� ���������� ��������� ��������� Value � ������ arr. ����� ���������� � ������� Begin
template <typename T>
int search_last_index(T arr[], const int lenght, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

//����� �������� � ������� ������� sym
void subword(char arr[], const int lenght, char sym) {
	int index = search_index(arr, lenght, sym);
	if (index == -1)
		cout << "ERROR\n";
	else{
	for (int i = index; i < lenght; i++)
		cout << arr[i];
	cout << '\n';
}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	const int size = 10;
	int arr[size]{ 6, 4, 1, 7, -6, 1, 0, 1, 11, 9 };

	//Search_index
	cout << "������� ����� 7 � ������� = " << search_index(arr, size, 7) << '\n';//3
	cout << "������ ������� ����� 1 � ������� = " << search_index(arr, size, 1) << '\n';//2

	if (search_index(arr, size, 100) == -1)
		cout << "����� 100 ��� � �������\n";
	else
	cout << "������� ����� 100 � ������� = " << search_index(arr, size, 100) << '\n';//-1

	cout << "������ ������� ����� 1 ������� � ������� 4  = " << search_index(arr, size, 1, 4) << '\n';

	//Search_Last-index
	cout << "������� ����� 7 � ������� = " << search_last_index(arr, size, 7) << '\n';//3
	cout << "��������� ������� ����� 1 � ������� = " << search_last_index(arr, size, 1) << '\n';//7

	cout << "��������� ������� ����� 1 ������� � ������� 4  = " << search_last_index(arr, size, 1, 4) << '\n';

	//������� "��������"
	cout << "����������� �����:\n";
	const int letters = 8;
	char word[letters]
	{ 'f', 'u', 'n','c','t', 'i', 'o', 'n' };
	for (int i = 0; i < letters; i++)
		cout << word[i];
	cout << "\n��������:\n";
	subword(word, letters, 'a');

	return 0;
}
