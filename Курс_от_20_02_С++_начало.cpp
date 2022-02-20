


// GitHub
int main()   // start
{ // Локальная область
	int I; I = 1443434; // 4 байт
	//long LL; // 4 байт

	long long LL2; LL2 = -1349820948329048; // 8 байт
	long long int LLI = 14342; //  8 байт

	__int32 I32 = 0; 
	__int64 LL64;  // 8 байт

	char C;  // 1 байт ascii 256 
	C = 'a'; // '' один символ
	C = 97;
	C = 32;
	C = '0'; 

	//char32_t C32; // 4 байт


	// f 10 выполнения по шагам

	//string
	float F; F = 1.443434; // 4 байт
	double D; D = 1.325472348957894375; // 8 байт

	bool B;
	B = 1;  B = true; 
	B = 0;  B = false;
	I32 + 100ll;

	100; // int 4 байт

	100ll; // long long
	1.f;// float
	1. ;// double 8 байт
	


	// Unreal Engine (C++)
	int AmountBrick = I32;

	// Арифметические операции
	//  +   -    *     /               % 

	AmountBrick = 5;
	F = 10;
	D = 52;
	I32 = 92192123434;
	LL64 = -2343252345;

	I32 = (AmountBrick + F) * (D)   ;
	(AmountBrick * F) / D;// <-

	LL64 = I32 = 0;

	LL64 =  10 + ( I32 = (AmountBrick + F) * (D) ); // = 15  (+ 6 )
	// float  /  (вещественное)



	LL64 = I32 / 100;
	D = I32 / 100;


	LL64 = F / 100;
	D = F / 100;


	LL64 = I32 / 100.;
	D = I32 / 100.;




	// c++   float   Делитель или частное  -> вещественные
	// c++  оба целочисл   -> целочисленный

	// f9 точка остановки f5 запуск с отладкой
	bool bAiming;

	//int InAmount;
	//int OutAmount;

	//int amountBrick;
	//int Amount_Brick;

	// + - / *    %
	//    ~    negative
	//    |     or   (+)
	//    &     and  (*)
	//    ^   XOR
	//   <<
	//   >>
	// a = 10 b =  11 c = 12 d = 13 e = 14 f = 15
	int LL = 0xb;
	int R = 0xc; // 16 запись hex

	int M;

	M = LL | R;
	M = LL || R; // 0  1


	M = LL & R; // &
	M = LL ^ R;
	LL = M ^ R;

	//(false == 0)

	//(true == 1)

	(M);
		// M - > true M!=0   
		// M -> false M == 0


	M = LL << 5;
	M = (LL == 1) >> 3;
	M = ~LL;

	//


	// bool   true false
	// and  &&
	// or   ||
	// > < 
	//<=   >=  
	// !
	// !=
	// ==  


	bool flag  = (10 % 6 == 4);
	20 % 6 == 2;


	M = M + 1;

	int L = 0;
	M = 0;
	L = ++M; // Сразу же переприсваиваем

	L = 0;
	M = 0;
	L = M++; // Переприсваиваем после всего

	M = M + 1;

	M = M + LL;
	M += LL;

	M /= LL;
	M %= LL;

	M = ~0; // 4 байт 32 бит
	

	M >>= 6; //    / 2^6
	M <<= 5; //    * 2^5

	//M = M // + * / 

	M |= 10;
	M ^= 123;


	++M;
	M++;

	--M;
	M--;

	int Num = 100;

	int *Name; // Указатель (он хранит адрес)
	int* Adress;// = 0x00bef990;

	// Адрес   <- 100  

	Name = &Num; // & (получения адреса) на клавишу 7 написать амперсанд
	Adress = Name;


	int Res; //= Num;

	Res = *Adress; // * Взятия значения по адресу (обратная &)


	int **AdresAdres = &Adress; // Указатель на указатель


	int a = 10;

	int* A1 = &a;
	(*A1) = 1000;

	int* B1 = &a;
	(*B1) = 200;

	
	int &Psevdo = *A1; // Ссылка aka псевдоним
	Psevdo = 10340;

}