Лабораторная работа №1 "Разработка класса" по дисциплине "Информатика и программирование (2 часть). С++".

Вариант № 3. Время.
Класс обеспечивает хранение времени. Конструкторы, и методы установки значений проверяют входные данные на корректность. Предусмотреть инкремент секунд.  Реализовать функцию, возвращающую строковое представление времени.

Задание:

1. Разработка класса.
Реализуйте в заголовочном файле интерфейс класса. Исходя из варианта задания, включите в класс необходимые данные-члены, конструкторы, деструктор, и остальные методы. 
Класс должен включать в себя:
•	Данные-члены, типы и количество которых хорошо подходят для хранения и представления соответствующих значений.
•	Конструктор по умолчанию, конструктор с параметрами (возможно, не один), конструктор копирования и деструктор. 
•	Методы установки значений и вывода значений на экран (использовать потоковый ввод/вывод). 
•	Static-счетчик количества существующих объектов класса.
•	В подходящих для этого методах, используйте параметры по умолчанию.
•	Используйте в конструкторах список инициализации. 
В файле методов реализуйте интерфейс класса.

2. Реализация пользовательского интерфейса.
1) После разработки класса можно протестировать правильность его работы, создав в функции void main() объект разработанного класса. Проверьте правильность работы его конструкторов, вызовите методы класса, убедитесь в том, что все они работают верно. 
2) Реализуйте динамическую структуру хранения объектов класса (массив указателей). При запуске программы пользователю должна предоставляться возможность указания размера массива. 
3) В программе должен присутствовать пользовательский интерфейс, в котором есть возможность выбрать любую из предоставляемых классом операцию (работа всех методов должна быть наблюдаема). 
Пользовательский интерфейс должен обеспечивать возможность:
•	Создание нового объекта (со значениями по умолчанию, как копия уже существующего в массиве указателей, с вводом значений) и вставку его в массив.
•	Просмотра содержимого всех объектов массива (предусмотреть форматированный вывод).
•	Изменение содержимого объекта с заданным номером.
•	Удаление объекта с заданным номером (сдвиг массива указателей учитывать не обязательно).
•	Вызов любого метода для объекта с заданным номером.
