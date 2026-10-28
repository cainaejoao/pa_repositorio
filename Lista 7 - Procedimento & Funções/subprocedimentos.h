
//---------- SUBALGORITIMO ---------------

void multiplos(int m){
  printf("Os proximos 10 multiplos sao:\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d ", m * i);
	}
	}
	
//----------------------------------------------

	void Nmultiplos(int m, int v)
{
  printf("Os proximos %d numeros eh:\n",v);
    for (int i = 1; i <= v; i++) {
        printf("%d\n ", m * i);
	}
	}

//-----------------------------------------------
	
	void tabuada(int m){
  printf("A tabuada desse numero eh:\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", m, i, m * i );
	}
	}

//------------------------------------------------
	
	void tabuada2(int m, int v)
{
    for (int i = 1; i <= v; i++){
        printf("%d x %d = %d\n", m, i, m * i);
	}
	}

//--------------------------------------------------
	
	void tabuada3(int a, int b, int c)
{
    for (int i = b; i <= c; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
	}
	}
