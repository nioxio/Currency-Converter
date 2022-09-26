#include <stdio.h>
#pragma warning(disable : 4996)
float convert = 0;
float converted = 0;
int main() {
	printf("\033[36mConversion Rates Last Updated 2022-09-19 @ 10:40 CEST\n\033[37m(1)\033[37mSEK to USD\n\033[37m(2)\033[37mSEK to GBP\n\033[37m(3)\033[37mSEK to CNY\n\033[37m(4)\033[37mSEK to EUR\n\033[31m(Q)\033[31mQuit\n\033[32mWhat currency do you want to convert to?");
	// Getch to get input without needing to press enter
	char input = getch();
	// Switch case for each valid input
	switch (input) {
		case '1':
			toUSD();
			break;
		case '2':
			toGBP();
			break;
		case '3':
			toCNY();
			break;
		case '4':
			toEUR();
			break;
		case 'q':
			printf("\nBye.\033[30m");
			return 0;
			break;
		case 'Q':
			printf("\nBye.\033[30m");
			return 0;
			break;
		default:
			printf("\nInvalid input\n");
	}
	// Repeat
	main();
}
int toUSD() {
	printf("\n\033[36mConverting SEK to USD\n");
	while (convert <= 0) {
		printf("How much do you want to convert? Only positive numbers are allowed! : ");
		scanf("%f", &convert);
		// Go through scanf buffer in case a letter is inputted
		fseek(stdin, 0, SEEK_END);
	}
	// Multiply input in SEK by USD conversion rates to get value in USD
	converted = convert * 0.09236809;
	printf("\033[32m%.2f SEK is %.2f USD\n", convert, converted);
	convert = 0;
	converted = 0;
}
int toGBP() {
	printf("\n\033[36mConverting SEK to GBP\n");
	while (convert <= 0) {
		printf("How much do you want to convert? Only positive numbers are allowed! : ");
		scanf("%f", &convert);
		// Go through scanf buffer in case a letter is inputted
		fseek(stdin, 0, SEEK_END);
	}
	// Multiply input in SEK by GBP conversion rates to get value in GBP
	converted = convert * 0.08115087446;
	printf("\033[32m%.2f SEK is %.2f GBP\n", convert, converted);
	convert = 0;
	converted = 0;
}
int toCNY() {
	printf("\n\033[36mConverting SEK to CNY\n");
	while (convert <= 0) {
		printf("How much do you want to convert? Only positive numbers are allowed! : ");
		scanf("%f", &convert);
		// Go through scanf buffer in case a letter is inputted
		fseek(stdin, 0, SEEK_END);
	}
	// Multiply input in SEK by CNY conversion rates to get value in CNY
	converted = convert * 0.6487078474;
	printf("\033[32m%.2f SEK is %.2f CNY\n", convert, converted);
	convert = 0;
	converted = 0;
}
int toEUR() {
	printf("\n\033[36mConverting SEK to EUR\n");
	while (convert <= 0) {
		printf("How much do you want to convert? Only positive numbers are allowed! : ");
		scanf("%f", &convert);
		// Go through scanf buffer in case a letter is inputted
		fseek(stdin, 0, SEEK_END);
	}
	// Multiply input in SEK by EUR conversion rates to get value in EUR
	converted = convert * 0.09256433174;
	printf("\033[32m%.2f SEK is %.2f EUR\n", convert, converted);
	convert = 0;
	converted = 0;
}