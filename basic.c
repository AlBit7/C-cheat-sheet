#include <stdio.h>          // capia e incolla il contenuto del file stdio.h --> standard input output . header
#include <math.h>    

#define NOME_MAIN main()    // copia e incolla il valore dovunque si presenta il nome nel programma

int NOME_MAIN {

    int num;                                    // numero intero 8/16 bit (dipende)
    const float numeroDecimale = 3.5;           // numero decimale costante (solo leggibile) de 32 bit
    double numeroMoltoLungo = 87954126875623;   // numero decimale de 64 bit
    char carattere = 'r';                       // carattere da 4 bit

    printf("inserisci u\tn numero: \n");
    scanf("%d", &num);

    printf("il numero e': %d %.2f %.0lf %c\n", num, numeroDecimale, numeroMoltoLungo, carattere);

    int a = 4;
    int b = 5;
    int tmp;

    printf("%d %d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;

    printf("%d %d\n", a, b);

    /*
    
    OPERATORI MATEMATICE PER LE VARIABILI

    a++;
    ++a;
    a--;
    --a;
    a += 2; --> a = a + 2
    a -= 2;
    a /= 2;
    a *= 2;
    
    */
    
    /*
    
    CONDIZIONI

    >
    <
    ==
    !=
    !(condizione) --> non 
    
    OPERATORI LOGICI

    && and   && > || tipo * > +
    || or
    !  not
    ^  xor
    
    (valopre <CONDIZIONE> valore) <OPERATORE> (valopre <CONDIZIONE> valore) <OERATORE> valore

    esempi con l'AND
    (1 > 2) && (1 == 1) --> falso e vero --> falso
    !(1 > 2) && (1 == 1) --> vero e vero --> vero
    
    esempi con l'OR
    (1 > 2) || (1 == 1) --> falso o vero --> vero
    (1 > 2) || (1 != 1) --> falso o falso --> falso
    
    A = 2
    B = 4
    C = 7
    
    (C > A) && (C > B) --> vero e vero --> vero
    
    tabelle di condizione:
    
    OR: (||)
    vero || vero   --> vero
    vero || falso  --> vero
    falso || vero  --> vero
    falso || falso --> falso 
    
    AND: (&&)
    vero && vero   --> vero
    vero && falso  --> falso
    falso && vero  --> falso
    falso && falso --> falso 
    
    NOT: (!)
    !vero --> falso 
    !falso --> vero
    
    */

    #ifndef NOME_MAIN
    if (/* condizione */) {
        // ...
    } else if () {
        // ...
    } else {
        // ...
    }

    switch (/* variabile / espressione */) {
    
    case 1 /* il valore dell'espressione è 1 */:
        /* code */
        break;
    
    case 2 /* il valore dell'espressione è 2 */:
        /* code */
        break;

    default:
        // se l'espressione non corrisponde a nessun case allora..
        // esegui questo codice
        break;
    
    }

    for ( /* dichiarazzione */; /* condizione */; /* modifica (incremento / decremento) */) {
        // ...
    }

    do
    {
        /* code */
    } while (/* condition */);

    while (/* condition */)
    {
        /* code */
    }

    #endif

    for (unsigned char i = 0; i < 255; ++i) {
        // i = [0; 254] - eseguito 255 volte

        printf("%d\t-->\t%c\n", i, i);

    }

    unsigned char i = 0;
    while (i < 255)
    {
        ++i;

        printf("%d\t-->\t%c\n", i, i);
        
    }
    

    // --------------------- funzioni matematiche ---------------------

    // importare #include <math.h> per utilizzarle

    // seno = sin(angoloInRadianti)
    // radice = sqrt(radicando)
    // potenza = pow(base, esponente)
    // potenzaDiE = exp(potenza)
    // logaritmo = log(base, argomento)

}
