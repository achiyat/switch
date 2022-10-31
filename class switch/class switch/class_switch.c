#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

/*
א.כתוב תוכנית המדפיסה את המספרים מ-1 עד 10 חוץ מהמספר 7
ב.הדפס את כל המספרים בין 1 ל100 המתחלקים ב3 וב7
ג.כתוב פונקציה המקבלת מספר ומחשבת את העצרת שלו
ד.כתוב פונקציה המקבלת שני מספרים ומעלה אחד בחזקת השני
*/
int main()
{
	
	int num1, num2, len;
	
	printf("-----------class exercise-----------\n");
	printf("exercise 1 \n");

	for (int i = 1; i <= 10; i++)
	{
		if (i != 7)
		{
			printf("%d,",i);
		}
	}

	printf("\n\nexercise 2 \n");

	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 3 == 0)
		{
			printf("%d,", i);
		}
	}

	printf("\n\nexercise 3 \n");

	printf("please enter a number: ");
	scanf("%d", &num1);
	printf("How much is an assembly of the number? \n");

	int sum = 1;
	for (int i = 1; i <= num1; i++)
	{
		printf("%d", i);
		sum = sum * i;

			if (i < num1)
			{
				printf("*");
			}
		
	}
	printf(" = %d", sum);

	printf("\n\nexercise 4 \n");

	printf("please enter 2 number: \nnumber1: ");
	scanf("%d", &num1);
	printf("number2: ");
	scanf("%d", &num2);
	printf("How much is %d to the %drd power ?",num1,num2);
	sum = 1;
	for (int i = 1; i <= num2; i++)
	{
		sum = sum * num1;
	}
	printf("\n%d", sum);
	printf("");



	printf("\n-----------Homework-----------\n");
	/*
	א.כתבו פונקציה שמקבלת מספר  ומחזירה את הסיפרה הימנית ביותר 
	עבור 1234 יחזיר 4  
	עבור 4529 יחזיר 9 

	ב.כתבו פונקציה שמקבלת פרמטר ומחזירה את הספרה השניה מצד ימין
	עבור 4529 יחזיר 2 
	עבור 1234 יחזיר 3 

	ג.כתבו פונקציה שמקבלת פרמטר מספר ומחזירה 1 אם המספר ראשוני, אחרת מחזירה 0 
	(מספר ראשוני הוא מס שלא מתחלק בשום מספר מלבד עצמו ובאחד) 
	לדוגמא - המספר 11 הוא ראשוני 

	ד.כתבו פונקציה שבודקת אילו מספרים ראשוניים נמצאים בטווח של 1 עד 100000 

	ה.כתבו פונקציה שמקבלת מספר ובודקת האם המספר הוא מספר ראי. לדוגמא: מספר ראי הוא 123321
	(כמו כן,מובטח שכמוס הספרות הוא זוגי)
	*/
	
	printf("exercise 1 \n");
	scanf("%d", &num1);
	printf("%d", num1 % 10);

	printf("\n\nexercise 2 \n");
	printf("%d", num1 % 100 / 10);

	printf("\n\nexercise 3 \n");
	scanf("%d", &num1);
	int a = 0;
	int b = 0;
	for (int i = 2; i <= num1; i++)
	{
		if (i % num1 == 0)
		{
			a = a + 1;
		}
		b = i;
	}
	
	if (a == 1)
	{
		printf("%d - 'Prime number'", b);
	}
	else
	{
		printf("%d - 'Prime number'", b);
	}
	
	printf("\n\nexercise 4 \n");
	a = 0;
	b = 2;
	for (int i = 2; i <= 100; i++)
	{
		if (i % b == 0)
		{
			a = a + 1;
			b = b + 1;
		}
		
		if (a == 1)
		{
			printf("%d,", i);
		}
	}


	printf("\n\nexercise 4 \n");
	a = 0;
	for (int i = 2; i <= 10000; i++)
	{
		a = 0;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				a = a + 1;
			}
		}

		if (a == 1)
		{
			printf("%d,", i);
		}
	}
	
	printf("\n\nexercise 5 \n");
	scanf("%d", &num1);
	int counter = 0;
	int test = 0;
	int denominator = 1;
	int mudulu = 10;

	len = num1;
	while (len != 0)
	{
		counter++;
		len = len / 10;
	}

	sum = 1;

	for (int i = 1; i <= counter; i++)
	{
		sum = sum * 10;
	}

	for (int i = 1; i <= counter / 2; i++)
	{
		a = num1 % mudulu / denominator;
		b = num1 % sum / (sum / 10);
		printf("\n%d = %d", a, b);

		if (a == b)
		{
			test = test + 1;
		}
		denominator = denominator * 10;
		mudulu = mudulu * 10;
		sum = sum / 10;
	}

	if (test == counter / 2)
	{
		printf("\nMirror exercise");
	}
	else
	{
		printf("\nnot Mirror exercise");
	}

	
	printf("\n");
    return 0;
}
