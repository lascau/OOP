from multiset import *

A = {}
B = {}

n = int(input('Dati nr de elemente ale multimii multiple A: '))
print('Dati elementele multimii multiple A:')
read(n, A)
m = int(input('Dati nr de elemente ale multimii multiple B: '))
print('Dati elementele multimii multiple B:')
read(m, B)

print('''MENIU
Apasati tasta 0 pentru afisarea unei multimi
Apasati tasta 1 pentru afisarea lungimii/cardinalului unei multimi
Apasati tasta 2 pentru afisarea suportului unei multimi
Apasati tasta 3 pentru afisarea uniuni celor 2 multimi multiple
Apasati tasta 4 pentru afisarea intersectii celor 2 multimi multiple
Apasati tasta 5 pentru afisarea diferentei celor 2 multimi multiple
Apasati tasta 6 pentru compararea celor 2 multimi pe baza operatiei de comparare
Apasati tasta 7 pentru a determina numarul k(e, M) pentru un element e specificat
Apasati tasta 8 pentru a verifica daca o multime e vida
Apasati tasta 9 pentru a verifica daca un element exista in multime 
Scrieti cuvantul stop pentru a opri programul''')

while 1:
    command = str(input("Dati comanda: "))
    if command == '0':
        multime = str(input("Asupra carei multime(A/B) sa se execute comanda? "))
        if multime == 'A':
            write(A)
        else:
            write(B)
    elif command == '1':
        multime = str(input("Asupra carei multime(A/B) sa se execute comanda? "))
        if multime == 'A':
            print(length(A))
        else:
            print(length(B))
    elif command == '2':
        multime = str(input("Asupra carei multime(A/B) sa se execute comanda? "))
        if multime == 'A':
            print(supp(A))
        else:
            print(supp(B))
    elif command == '3':
        union(A, B)
    elif command == '4':
        intersection(A, B)
    elif command == '5':
        difference(A, B)
    elif command == '6':
        print(compare(A, B))
    elif command == '7':
        e = int(input("Dati elementul e: "))
        multime = str(input("Asupra carei multime(A/B) sa se execute comanda? "))
        if multime == 'A':
            print(k(e, A))
        else:
            print(k(e, B))
    elif command == '8':
        multime = str(input("Asupra carei multime(A/B) sa se execute comanda? "))
        if multime == 'A':
            print(is_empty(A))
        else:
            print(is_empty(B))
    elif command == '9':
        e = int(input("Dati elementul e: "))
        multime = str(input("Asupra carei multime(A/B) sa se execute comanda? "))
        if multime == 'A':
            print(find(e, A))
        else:
            print(find(e, B))
    else:
        if command == 'stop':
            break









