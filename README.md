# C-cheat-sheet

vari programmi autoesplicativi sull'utillizzo del linguaggio C

## CONDIZIONI

roadmap + esempi per scrivere una condizione ...

### operatori

    >   --> maggiore
    <   --> minore
    ==  --> uguale
    !=  --> diverso
    !(condizione) --> non il risultato della condizione tra parentesi 
    
### operatori logici

    && and  
    || or
    !  not
    ^  xor
    
### gerarchia degli operatori
    
    ! > && > ||
    ovvero: ! vince sull' && che vince sul' || 
    un po' come il * vince sul +
    
### sintassi di un'espressione
    
    (valopre <CONDIZIONE> valore) <OPERATORE> !(valopre <CONDIZIONE> valore) <OERATORE> valore
    
### esempi con l'AND

    (1 > 2) && (1 == 1)  --> falso e vero --> falso
    !(1 > 2) && (1 == 1) --> vero e vero  --> vero
    
### esempi con l'OR
    
    (1 > 2) || (1 == 1) --> falso o vero  --> vero
    (1 > 2) || (1 != 1) --> falso o falso --> falso
    
    A = 2
    B = 4
    C = 7
    
    (C > A) && (C > B) --> vero e vero --> vero
    
## TABELLE DI CONDIZIONE
    
### OR: ||
    vero  || vero  --> vero
    vero  || falso --> vero
    falso || vero  --> vero
    falso || falso --> falso 
    
### AND: &&
    vero  && vero  --> vero
    vero  && falso --> falso
    falso && vero  --> falso
    falso && falso --> falso 
    
### XOR: ^
    vero  ^ vero  --> falso
    vero  ^ falso --> vero
    falso ^ vero  --> vero
    falso ^ falso --> falso 
    
### NOT: !
    !vero --> falso 
    !falso --> vero
