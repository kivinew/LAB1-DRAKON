#include "time.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	
	int size = -1, count_obj = -1, nomer_obj = -1, nomer_copy_obj = -1;
	
	while (size < 0)
	{
		cout << "������� ������ ������� ��� �������� �����: ";
		cin >> size;
		if (size < 0) cout << "������ ������� �� ������ ���� �������������!" << endl;
	}	
	
	Time *time_array = new Time[size];
	
	char c = 0, c1 = 0;
	while (c != '0')
	{
		cout << endl << "-------------------------������� ����-------------------------" << endl;
		cout << "1. ������� ����� ������ ����� � �������� ��� � ������" << endl;
		cout << "2. ������� �������� ���� �������� ����� �� �������" << endl;
		cout << "3. �������� ���������� ������� ����� � �������� �������" << endl;
		cout << "4. ������� ������ ����� � �������� ������� �� �������" <<endl;
		cout << "5. ������� ����� ����� ��� ������� ����� � �������� �������" << endl;
		cout << "0. �����" << endl;
		cout << "������� ����� �������: ";
		cin >> c;
		switch (c)
		{
			case '1':
				c1 = 0;
				cout << endl << "----------�������� ������� ����� � ������� ��� � ������----------" << endl;
				cout << "1. ������� ����� ������ ����� �� ���������" <<endl;
				cout << "2. ������� ����� ������ ����� � ������ ��������" << endl;
				cout << "3. ������� ����� ������ ��� ����� �� ������������� �������" << endl;
				cout << "������� ����� �������: ";
				cin >> c1;
				
				switch (c1)
				{
					case '1': //�������� ������ ������� �� ���������
					{
						nomer_obj = -1;
						while ((nomer_obj < 0) || (nomer_obj >= size))
						{
							cout << "������� ����� � ������� ��� ������� ������������ �������: ";
							cin >> nomer_obj;
							if ((nomer_obj < 0) || (nomer_obj >= size))
							{
								cout << "����� ������� ������ �����������!" << endl;
							}					
						}
						Time time;
						time.Reset();
						time_array[nomer_obj].SetTime(time);
						cout << "�������� ������� ��� " << nomer_obj << "-��� �������� ������� �������� �� "; 
						time_array[nomer_obj].PrintTime();
						break;
					}
					
					case '2': //�������� ������ ������� � ������ ��������
					{
						nomer_obj = -1;
						while ((nomer_obj < 0) || (nomer_obj >= size))
						{
							cout << "������� ����� � ������� ��� ������� ������������ �������: ";
							cin >> nomer_obj;
							if ((nomer_obj < 0) || (nomer_obj >= size))
							{
								cout << "����� ������� ������ �����������!" << endl;
							}					
						}
						Time time;
						time.InputTime();
						time_array[nomer_obj].SetTime(time);
						cout << "�������� ������� ��� " << nomer_obj << "-��� �������� ������� �������� �� "; 
						time_array[nomer_obj].PrintTime();
						break;
					}
					
					case '3': //�������� ������ ������� ��� ����� �� ������������ ��������
					{
						nomer_obj = -1;
						while ((nomer_obj < 0) || (nomer_obj >= size))
						{
							cout << "������� ����� � ������� ��� ������� ������������ �������: ";
							cin >> nomer_obj;
							if ((nomer_obj < 0) || (nomer_obj >= size))
							{
								cout << "����� ������� ������ �����������!" << endl;
							}					
						}
						nomer_copy_obj = -1;
						while ((nomer_copy_obj < 0) || (nomer_copy_obj >= size))
						{
							cout << "������� ����� ����������� ������� ����� � �������: ";
							cin >> nomer_copy_obj;
							if ((nomer_copy_obj < 0) || (nomer_copy_obj >= size))
							{
								cout << "����� ������� ������ �����������!" << endl;
							}					
						}
						Time time;
						time.SetTime(time_array[nomer_copy_obj]);
						time_array[nomer_obj].SetTime(time);
						cout << "�������� ������� ��� " << nomer_obj << "-��� �������� ������� �������� �� "; 
						time_array[nomer_obj].PrintTime();
						break;
					}

					default:
						cout << "��� ����� �������!" <<endl;
						break;
				}

				break;
			
			case '2':
				cout << endl << "----------����� ���� �������� �������� ����� �� �������----------" << endl;
				for (int i = 0; i < size; i++)
				{
					cout << "����� ��� " << i << "-��� �������� ������� ����� ";
					time_array[i].PrintTime();
				}
				break;
			
			case '3':
				cout << endl << "----------��������� �������� ������� ����� � �������� �������----------" << endl;
				nomer_obj = -1;
				while ((nomer_obj < 0) || (nomer_obj >= size))
				{
					cout << "������� ����� ����������� ������� ����� �� �������: ";
					cin >> nomer_obj;
					cout << endl;
					if ((nomer_obj < 0) || (nomer_obj >= size))
					{
						cout << "����� ������� ������ �����������!" << endl;
					}					
				}
				time_array[nomer_obj].InputTime();
				cout << "�������� ������� ��� " << nomer_obj << "-��� �������� ������� �������� �� "; 
						time_array[nomer_obj].PrintTime();
				break;
			
			case '4':
				cout << endl << "----------�������� ������� ����� � �������� ������� �� �������----------" << endl;
				nomer_obj = -1;
				while ((nomer_obj < 0) || (nomer_obj >= size))
				{
					cout << "������� ����� ���������� ������� ����� �� �������: ";
					cin >> nomer_obj;
					if ((nomer_obj < 0) || (nomer_obj >= size))
					{
						cout << "����� ������� ������ �����������!" << endl;
					}					
				}
				time_array[nomer_obj].Reset();
				cout << "�������� ������� ��� " << nomer_obj << "-��� �������� ������� �������";
				break;
			
			case '5':
				cout << endl << "----------����� ������ ��� ������� ����� � �������� �������----------" << endl;
				nomer_obj = -1;
				while ((nomer_obj < 0) || (nomer_obj >= size))
				{
					cout << "������� ����� ������� ����� �� ������� ��� ������ ������ ������: ";
					cin >> nomer_obj;
					if ((nomer_obj < 0) || (nomer_obj >= size))
					{
						cout << "����� ������� ������ �����������!" << endl;
					}					
				}
				c1 = 0;
				cout << "1. ������� �������� ������� ��� ���������� �������" <<endl;
				cout << "2. �������� �������� ������� ��� ���������� �������" << endl;
				cout << "3. �������� �������� ������� � ������ ����� ��������" << endl;
				cout << "4. �������� �������� ������� ��� ����� ������� �������" << endl;
				cout << "5. ��������� ��������� ���������� ������ � �������� �������" << endl;
				cout << "6. ������� ���������� ��������� �������� �����" << endl;
				cout << "������� ����� �������: ";
				cin >> c1;
				
				switch (c1)
				{
					case '1':
						cout << "����� ��� " << nomer_obj << "-��� �������� ������� ����� ";
						time_array[nomer_obj].PrintTime();
						break;

					case '2':
						time_array[nomer_obj].Reset();
						cout << "����� ��� " << nomer_obj << "-��� �������� ������� �������� �  ";
						time_array[nomer_obj].PrintTime();
						break;

					case '3':
						time_array[nomer_obj].InputTime();
						cout << "�������� ������� ��� " << nomer_obj << "-��� �������� ������� �������� �� "; 
						time_array[nomer_obj].PrintTime();
						break;

					case '4':
						nomer_copy_obj = -1;
						while ((nomer_copy_obj < 0) || (nomer_copy_obj >= size))
						{
							cout << "������� ����� ����������� ������� ����� � �������: ";
							cin >> nomer_copy_obj;
							if ((nomer_copy_obj < 0) || (nomer_copy_obj >= size))
							{
								cout << "����� ������� ������ �����������!" << endl;
							}					
						}
						time_array[nomer_obj].SetTime(time_array[nomer_copy_obj]);
						cout << "�������� ������� ��� " << nomer_obj << "-��� �������� ������� �������� �� "; 
						time_array[nomer_obj].PrintTime();
						break;

					case '5':
						count_obj = -1;
						while (count_obj < 0)
						{
							cout << "������� ���������� ������������ ������ � �������� �������: ";
							cin >> count_obj;
							if (count_obj < 0)
							{
								cout << "���������� ������ �� ������ ���� �������������!" << endl;
							}					
						}
						for (int i = 0; i < count_obj; i++)
						{
							time_array[nomer_obj].IncSec();
						}
						cout << "�������� ������� ��� " << nomer_obj << "-��� �������� ������� �������� �� "; 
						time_array[nomer_obj].PrintTime();
						break;

					case '6':
						cout << "���������� ��������� �������� ����� �����: " << time_array[nomer_obj].GetCount() << endl;
						break;

					default:
						cout << "��� ����� �������!" <<endl;
						break;
				}

				break;

			default:
				cout << "��� ����� �������!" <<endl;
				break;			
		}		
	}	
}