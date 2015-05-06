# Ese036-ElencoStudentiSalvaCSV

[CSV] (http://it.wikipedia.org/wiki/Comma-separated_values) è un _formato testuale_ per salvare dati organizzati in tabella. CSV è l'acronimo
di Comma-Separated Values, poichè i valori in ogni riga sono separati da virgole.
In realtà è possibile impiegare anche altri caratteri, come, ad esempio, punto e
virgola.

Il formato CSV può essere letto, ad esempio, da Microsoft Excel o Open Office Calc.

Realizza un programma C che richieda all'utente di inserire i dati di N studenti, 
con N definito dal programmatore pari a 3, e li salvi nel file `elenco.csv`.

I dati di uno studente, da richiedere in questo esatto ordine, sono:

1. nome: stringa di lunghezza massima MAX_STRLEN, definita dal programmatore pari a 30
2. cognome: stringa di lunghezza massima MAX_STRLEN
3. età: intero non negativo
4. classe: stringa di lunghezza massima MAX_STRLEN

Oltre a scrivere i dati, il programma scrive anche la prima riga del file, che
contiene i nomi dei campi. Il carattere impiegato per separare i campi è il punto e virgola.

Esempio
```
nome;cognome;eta';classe
nicola;malfagia;13;3ainf
francesco;corbucci;5;3binf
```
