#include <stdio.h>
#include <locale.h>


int main()
{	system("clear");
    setlocale(LC_ALL, "Rus");
    int choice;
    printf("Добро пожаловать в программу Конвертер.\n\n");
    printf("Выберите тип конвертируемых величин:\n");
    printf("1. Длинна\n");
    printf("2. Масса\n");
    printf("3. Объем\n");
    printf("4. Объем информации\n");
    printf("5. Скорость\n\n");
    printf("Введите номер пункта: ");
    scanf("%d", &choice);
    return 0;
}