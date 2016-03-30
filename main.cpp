#include "time.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	
	int size = -1, count_obj = -1, nomer_obj = -1, nomer_copy_obj = -1;
	
	while (size < 0)
	{
		cout << "Укажите размер массива для объектов Время: ";
		cin >> size;
		if (size < 0) cout << "Размер массива не должен быть отрицательным!" << endl;
	}	
	
	Time *time_array = new Time[size];
	
	char c = 0, c1 = 0;
	while (c != '0')
	{
		cout << endl << "-------------------------ГЛАВНОЕ МЕНЮ-------------------------" << endl;
		cout << "1. Создать новый объект Время и вставить его в массив" << endl;
		cout << "2. Вывести значения всех объектов Время из массива" << endl;
		cout << "3. Изменить содержимое объекта Время с заданным номером" << endl;
		cout << "4. Удалить объект Время с заданным номером из массива" <<endl;
		cout << "5. Вызвать любой метод для объекта Время с заданным номером" << endl;
		cout << "0. Выход" << endl;
		cout << "Введите номер команды: ";
		cin >> c;
		switch (c)
		{
			case '1':
				c1 = 0;
				cout << endl << "----------Создание объекта Время и вставка его в массив----------" << endl;
				cout << "1. Создать новый объект Время по умолчанию" <<endl;
				cout << "2. Создать новый объект Время с вводом значений" << endl;
				cout << "3. Создать новый объект как копия из существующего объекта" << endl;
				cout << "Введите номер команды: ";
				cin >> c1;
				
				switch (c1)
				{
					case '1': //Создание нового объекта по умолчанию
					{
						nomer_obj = -1;
						while ((nomer_obj < 0) || (nomer_obj >= size))
						{
							cout << "Введите номер в массиве для вставки создаваемого объекта: ";
							cin >> nomer_obj;
							if ((nomer_obj < 0) || (nomer_obj >= size))
							{
								cout << "Номер объекта введен некорректно!" << endl;
							}					
						}
						Time time;
						time.Reset();
						time_array[nomer_obj].SetTime(time);
						cout << "Значение времени для " << nomer_obj << "-ого элемента массива изменено на "; 
						time_array[nomer_obj].PrintTime();
						break;
					}
					
					case '2': //Создание нового объекта с вводом значений
					{
						nomer_obj = -1;
						while ((nomer_obj < 0) || (nomer_obj >= size))
						{
							cout << "Введите номер в массиве для вставки создаваемого объекта: ";
							cin >> nomer_obj;
							if ((nomer_obj < 0) || (nomer_obj >= size))
							{
								cout << "Номер объекта введен некорректно!" << endl;
							}					
						}
						Time time;
						time.InputTime();
						time_array[nomer_obj].SetTime(time);
						cout << "Значение времени для " << nomer_obj << "-ого элемента массива изменено на "; 
						time_array[nomer_obj].PrintTime();
						break;
					}
					
					case '3': //Создание нового объекта как копия из существующих объектов
					{
						nomer_obj = -1;
						while ((nomer_obj < 0) || (nomer_obj >= size))
						{
							cout << "Введите номер в массиве для вставки создаваемого объекта: ";
							cin >> nomer_obj;
							if ((nomer_obj < 0) || (nomer_obj >= size))
							{
								cout << "Номер объекта введен некорректно!" << endl;
							}					
						}
						nomer_copy_obj = -1;
						while ((nomer_copy_obj < 0) || (nomer_copy_obj >= size))
						{
							cout << "Введите номер копируемого объекта Время в массиве: ";
							cin >> nomer_copy_obj;
							if ((nomer_copy_obj < 0) || (nomer_copy_obj >= size))
							{
								cout << "Номер объекта введен некорректно!" << endl;
							}					
						}
						Time time;
						time.SetTime(time_array[nomer_copy_obj]);
						time_array[nomer_obj].SetTime(time);
						cout << "Значение времени для " << nomer_obj << "-ого элемента массива изменено на "; 
						time_array[nomer_obj].PrintTime();
						break;
					}

					default:
						cout << "Нет такой команды!" <<endl;
						break;
				}

				break;
			
			case '2':
				cout << endl << "----------Вывод всех значений объектов Время из массива----------" << endl;
				for (int i = 0; i < size; i++)
				{
					cout << "Время для " << i << "-ого элемента массива равно ";
					time_array[i].PrintTime();
				}
				break;
			
			case '3':
				cout << endl << "----------Изменение значения объекта Время с заданным номером----------" << endl;
				nomer_obj = -1;
				while ((nomer_obj < 0) || (nomer_obj >= size))
				{
					cout << "Введите номер изменяемого объекта Время из массива: ";
					cin >> nomer_obj;
					cout << endl;
					if ((nomer_obj < 0) || (nomer_obj >= size))
					{
						cout << "Номер объекта введен некорректно!" << endl;
					}					
				}
				time_array[nomer_obj].InputTime();
				cout << "Значение времени для " << nomer_obj << "-ого элемента массива изменено на "; 
						time_array[nomer_obj].PrintTime();
				break;
			
			case '4':
				cout << endl << "----------Удаление объекта Время с заданным номером из массива----------" << endl;
				nomer_obj = -1;
				while ((nomer_obj < 0) || (nomer_obj >= size))
				{
					cout << "Введите номер удаляемого объекта Время из массива: ";
					cin >> nomer_obj;
					if ((nomer_obj < 0) || (nomer_obj >= size))
					{
						cout << "Номер объекта введен некорректно!" << endl;
					}					
				}
				time_array[nomer_obj].Reset();
				cout << "Значение времени для " << nomer_obj << "-ого элемента массива удалено";
				break;
			
			case '5':
				cout << endl << "----------Вызов метода для объекта Время с заданным номером----------" << endl;
				nomer_obj = -1;
				while ((nomer_obj < 0) || (nomer_obj >= size))
				{
					cout << "Введите номер объекта Время из массива для вызова любого метода: ";
					cin >> nomer_obj;
					if ((nomer_obj < 0) || (nomer_obj >= size))
					{
						cout << "Номер объекта введен некорректно!" << endl;
					}					
				}
				c1 = 0;
				cout << "1. Вывести значение времени для выбранного объекта" <<endl;
				cout << "2. Сбросить значение времени для выбранного объекта" << endl;
				cout << "3. Изменить значение времени с вводом новых значений" << endl;
				cout << "4. Изменить значение времени как копию другого объекта" << endl;
				cout << "5. Прибавить указанное количество секунд к значению времени" << endl;
				cout << "6. Вывести количество созданных объектов Время" << endl;
				cout << "Введите номер команды: ";
				cin >> c1;
				
				switch (c1)
				{
					case '1':
						cout << "Время для " << nomer_obj << "-ого элемента массива равно ";
						time_array[nomer_obj].PrintTime();
						break;

					case '2':
						time_array[nomer_obj].Reset();
						cout << "Время для " << nomer_obj << "-ого элемента массива сброшено в  ";
						time_array[nomer_obj].PrintTime();
						break;

					case '3':
						time_array[nomer_obj].InputTime();
						cout << "Значение времени для " << nomer_obj << "-ого элемента массива изменено на "; 
						time_array[nomer_obj].PrintTime();
						break;

					case '4':
						nomer_copy_obj = -1;
						while ((nomer_copy_obj < 0) || (nomer_copy_obj >= size))
						{
							cout << "Введите номер копируемого объекта Время в массиве: ";
							cin >> nomer_copy_obj;
							if ((nomer_copy_obj < 0) || (nomer_copy_obj >= size))
							{
								cout << "Номер объекта введен некорректно!" << endl;
							}					
						}
						time_array[nomer_obj].SetTime(time_array[nomer_copy_obj]);
						cout << "Значение времени для " << nomer_obj << "-ого элемента массива изменено на "; 
						time_array[nomer_obj].PrintTime();
						break;

					case '5':
						count_obj = -1;
						while (count_obj < 0)
						{
							cout << "Введите количество прибавляемых секунд к значению времени: ";
							cin >> count_obj;
							if (count_obj < 0)
							{
								cout << "Количество секунд не должно быть отрицательным!" << endl;
							}					
						}
						for (int i = 0; i < count_obj; i++)
						{
							time_array[nomer_obj].IncSec();
						}
						cout << "Значение времени для " << nomer_obj << "-ого элемента массива изменено на "; 
						time_array[nomer_obj].PrintTime();
						break;

					case '6':
						cout << "Количество созданных объектов Время равно: " << time_array[nomer_obj].GetCount() << endl;
						break;

					default:
						cout << "Нет такой команды!" <<endl;
						break;
				}
				break;

			default:
				cout << "Нет такой команды!" <<endl;
				break;			
		}		
	}	
}
