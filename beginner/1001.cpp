#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void _1037();
void _1036();
void _1035();
// no problems available in this interval
void _1021();
void _1020();
void _1019();
void _1018();
void _1017();
void _1016();
void _1015();
void _1014();
void _1013();
void _1012();
void _1011();
void _1010();
void _1009();
void _1008();
void _1007();
void _1006();
void _1005();
void _1004();
void _1003();
void _1002();
void _1001();

int main(){

	_1037();
	return 0;
}

void _1037(){
	float value;
	scanf ("%f", &value);

	if(value >= 0 && value <= 100){
		printf("Intervalo ");

		if(value >= 0 && value <= 25){
		printf("[0,25]\n");
		}
		else if(value > 25 && value <= 50){
			printf("(25,50]\n");	
		}
		else if(value > 50 && value <= 75){
			printf("(50,75]\n");
		}
		else if(value > 75 && value <= 100){
			printf("(75,100]\n");
		}
	}
	else{
		printf("Fora de intervalo\n");
	}
}

void _1036(){
	float a, b, c;
	float delta, r1, r2;

	scanf("%f %f %f", &a, &b, &c);

	if(a <= 0){
		printf("Impossivel calcular\n");
	}
	else{
		delta = (b*b) - 4*a*c;
		if(delta < 0){
			printf("Impossivel calcular\n");		
		}
		else{
			r1 = (-b + sqrt(delta)) / (2*a);
			r2 = (-b - sqrt(delta)) / (2*a);
			printf("R1 = %.5f\n", r1);
			printf("R2 = %.5f\n", r2);
		}

	}
}

void _1035(){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(b > c && d > a && (c+d) > (a+b) && c >= 0 && d >= 0 && (a%2) == 0){
		printf("Valores aceitos\n");
	}
	else{
		printf("Valores nao aceitos\n");	
	}
}

// not accepted
void _1021(){
	float value;
	scanf("%f", &value);

	int c; // counter

	// notes
	printf("NOTAS:\n");
	for(c=0; value >= 100; c++)
		value -= 100;
	printf("%d nota(s) de R$ 100.00\n", c);
	
	for(c=0; value >= 50; c++)
		value -= 50;
	printf("%d nota(s) de R$ 50.00\n", c);
	
	for(c=0; value >= 20; c++)
		value -= 20;
	printf("%d nota(s) de R$ 20.00\n", c);
	
	for(c=0; value >= 10; c++)
		value -= 10;
	printf("%d nota(s) de R$ 10.00\n", c);
	
	for(c=0; value >= 5; c++)
		value -= 5;
	printf("%d nota(s) de R$ 5.00\n", c);
	
	for(c=0; value >= 2; c++)
		value -= 2;
	printf("%d nota(s) de R$ 2.00\n", c);

	// coins
	printf("MOEDAS:\n");

	c = 0;
	if(value >= 1) {
		value -= 1;
		c = 1;
	}
	printf("%d moeda(s) de R$ 1.00\n", c);
	
	c = 0;
	if(value >= 0.50) {
		value -= 0.50;
		c = 1;
	}
	printf("%d moeda(s) de R$ 0.50\n", c);
	
	for(c=0; value >= 0.24	; c++)
		value -= 0.25;
	printf("%d moeda(s) de R$ 0.25\n", c);
	
	for(c=0; value >= 0.09; c++)
		value -= 0.10;
	printf("%d moeda(s) de R$ 0.10\n", c);
	
	c = 0;
	if(value >= 0.05) {
		value -= 0.05;
		c = 1;
	}
	printf("%d moeda(s) de R$ 0.05\n", c);
	
	for(c=0; value >= 0.009; c++) // 0.01, actually
		value -= 0.01; 
	printf("%d moeda(s) de R$ 0.01\n", c);

}

void _1021_(){
	float value;
	scanf("%f", &value);
	int notes = (int) value;
	int coins = (value - notes) * 100;

	// notes
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", notes/100);
	notes = notes % 100;
	printf("%d nota(s) de R$ 50.00\n", notes/50);
	notes = notes % 50;
	printf("%d nota(s) de R$ 20.00\n", notes/20);
	notes = notes % 20;
	printf("%d nota(s) de R$ 10.00\n", notes/10);
	notes = notes % 10;
	printf("%d nota(s) de R$ 5.00\n", notes/5);
	notes = notes % 5;
	printf("%d nota(s) de R$ 2.00\n", notes/2);
	
	if(notes%2 == 1){
		coins += 100;
	}
	//coins += (notes*100);
	printf("coins %d - notes %d\n", coins, notes);

	// coins
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", coins/100);
	coins = coins % 100;
	printf("%d moeda(s) de R$ 0.50\n", coins/50);
	coins = coins % 50;
	printf("%d moeda(s) de R$ 0.25\n", coins/25);
	coins = coins % 25;
	printf("%d moeda(s) de R$ 0.10\n", coins/10);
	coins = coins % 10;
	printf("%d moeda(s) de R$ 0.05\n", coins/5);
	coins = coins % 5;
	printf("%d moeda(s) de R$ 0.01\n", coins/1);

}

void _1020(){
	int n;
	scanf("%d", &n);
	int year = n / 365;
	int month = (n % 365) / 30;
	int day = (n % 365) % 30;
	printf("%d ano(s)\n", year);
	printf("%d mes(es)\n", month);
	printf("%d dia(s)\n", day);
}

void _1019(){
	int n;
	scanf("%d", &n);
	int hour = n / 3600;
	int min = (n % 3600) / 60;
	int sec = (n % 3600) % 60;
	printf("%d:%d:%d\n", hour, min, sec);
}

void _1018(){
	int value;
	scanf("%d", &value);
	printf("%d\n", value);
	printf("%d nota(s) de R$ 100,00\n", value/100);
	value = value % 100;
	printf("%d nota(s) de R$ 50,00\n", value/50);
	value = value % 50;
	printf("%d nota(s) de R$ 20,00\n", value/20);
	value = value % 20;
	printf("%d nota(s) de R$ 10,00\n", value/10);
	value = value % 10;
	printf("%d nota(s) de R$ 5,00\n", value/5);
	value = value % 5;
	printf("%d nota(s) de R$ 2,00\n", value/2);
	value = value % 2;
	printf("%d nota(s) de R$ 1,00\n", value/1);
}

void _1017(){
	int time, avg_speed;
	scanf("%d", &time);
	scanf("%d", &avg_speed);
	printf("%.3f\n", ((time*avg_speed)/12.0));
}

void _1016(){
	int distance;
	scanf("%d", &distance);
	printf("%d minutos\n", distance*2);

}

void _1015(){
	float x1, x2, y1, y2;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	float a = pow((x2-x1), 2);
	float b = pow((y2-y1), 2);
	printf("%.4f\n", sqrt(a+b));
}

void _1014(){
	int km;
	float fuel;
	scanf("%d", &km);
	scanf("%f", &fuel);
	printf("%.3f km/l\n", km/fuel);
}

void _1013(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int greatest1 = (a+b+abs(a-b)) / 2;
	int greatest2 = (b+c+abs(b-c)) / 2;

	if(greatest1 > greatest2){
		printf("%d eh o maior\n", greatest1); 
	}
	else{
		printf("%d eh o maior\n", greatest2); 
	}
}

// not accepted
void _1012(){
	float a, b, c;
	float PI = 3.14156;
	scanf("%f %f %f", &a, &b, &c);
	float triangle = a*c/2;
	float circle = (float) PI * (c*c);
	float trapezium = ((a+b) * c)/2;
	float square = b*b;
	float rectangle = a * b;

	printf("TRIANGULO: %.3f\n", triangle);
	printf("CIRCULO: %.3f\n", circle);
	printf("TRAPEZIO: %.3f\n", trapezium);
	printf("QUADRADO: %.3f\n", square);
	printf("RETANGULO: %.3f\n", rectangle);
}

// not accepted
void _1011(){
	float PI = 3.14159;
	float r;
	scanf("%f", &r);
	double a = 4.0/3;
	double r3 = (r*r*r);
	double v = a * PI * r3;
	printf("VOLUME = %.3f\n", v);
}

void _1010(){
	int code, units;
	float price;
	float amount;
	scanf("%d %d %f", &code, &units, &price);
	amount = units * price;
	scanf("%d %d %f", &code, &units, &price);
	amount += units * price;
	printf("VALOR A PAGAR: R$ %.2f\n", amount);
}

void _1009(){
	string name;
	float salary, sold;
	cin >> name;
	scanf("%f", &salary);
	scanf("%f", &sold);
	printf("TOTAL = R$ %.2f\n", salary + (sold*0.15));
}

void _1008(){
	int number, hours;
	float one_hour;
	scanf("%d", &number);
	scanf("%d", &hours);
	scanf("%f", &one_hour);
	printf("NUMBER = %d\n", number);
	printf("SALARY = U$ %.2f\n", hours * one_hour);
}

void _1007(){
  	int a, b, c, d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	int diferenca = (a*b) - (c*d);
	printf("DIFERENCA = %d\n", diferenca);
}

void _1006(){
  	float a, b, c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	float media = ((a*2) + (b*3) + (c*5)) / (2+3+5);
	printf("MEDIA = %.1f\n", media);
}

void _1005(){
  	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	float media = ((a*35) + (b*75)) / (35+75);
	printf("MEDIA = %.5f\n", media);
}

void _1004(){
	int a,b;
	scanf("%d", &a);
	scanf("%d", &b);
	int PROD = a*b;
	printf("PROD = %d\n", PROD);
}

void _1003(){
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);
	int SOMA = A+B;
	printf("SOMA = %d\n", SOMA);
}

// not accepted
void _1002(){
	float PI = 3.14159;
	float R;
	scanf("%f", &R);
	float A = PI*(R*R);
	printf("A=%.4f\n", A);
}

void _1001(){
	int a,b;
	cin >> a;
	cin >> b;
	cout << "X = " << a+b << endl;
}