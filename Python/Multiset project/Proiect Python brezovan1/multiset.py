#adauga un element in multimea multipla
def add(e, M):
    if e in M:
        M.update({e : M[e] + 1})
    else:
        M.update({e : 1})

#adauga n elemente in multimea multipla
def read(n, M):
    for i in range(0, n):
        x = int(input())
        add(x, M)

#verifica daca multimea multipla e vida 
def is_empty(M):
    if len(M) == 0:
        return True
    return False

#calculeaza numarul de elemente din multimea multipla
def length(M):
    len_M = 0
    for no_occurencies_e in M.values():
        len_M = len_M + no_occurencies_e
    return len_M

#afiseaza multimea multipla
def write(M):
    L = []
    for key, value in M.items():
        for times in range (0, value):
            L.append(key)
    print(sorted(L))
 

#verifica daca un element apartine multimii multiple
def find(e, M):
    if e in M:
        return True
    return False

#determina suportul multimii multiple
def supp(M):
    L = []
    for e in M:
        L.append(e)
    return L
    
#return M.keys() e o alternativa dar afiseaza cam urat

#determina numarului k(e, M) pentru un element e specificat
def k(e, M):
    if e in M: # sau if find(e, M)
        return M[e]
    return 0

#compara 2 multimi multiple pe baza operatiei de incluziune
def compare(M1, M2):
    if len(M1) == 0: #multimea vida e inclusa din orice multime
        return True
    if len(M1) > len(M2): 
        return False 
    for e in M1:
        if k(e, M1) > k(e, M2):
            return False
    return True
    
#afiseaza reuniunea a doua multimi multiple
def union(M1, M2):
    if is_empty(M1) and is_empty(M2): #daca ambele multimi sunt vide
        write({})
    elif is_empty(M1): #daca prima multime e vida o afisez pe a 2 a
        write(M2)
    elif is_empty(M2): #daca a 2 a multime e vida o afisez pe prima
        write(M1)
    else:
        L = []
        for e in M1:
            for x in range(0, k(e, M1) + k(e, M2)):
                L.append(e)
        for e in M2:
            if find(e, M1) == False:
                for times in range(0, k(e, M2)):
                    L.append(e)
        print(sorted(L))

#afiseaza intersectia a doua multimi multiple
def intersection(M1, M2):
    if is_empty(M1) and is_empty(M2): #daca ambele multimi sunt vide
        write({})
    elif is_empty(M1) or is_empty(M2):
        write({})
    else:
        L = []
        for e in M1:
            for times in range(0, min(k(e, M1), k(e, M2))):
                L.append(e)
        print(sorted(L))

# afiseaza diferenta a doua multimi multiple
def difference(M1, M2):
    L = []
    for e in M1:
        if find(e, M2) and k(e, M1) > k(e, M2):
            for times in range(0, k(e, M1) - k(e, M2)):
                L.append(e)
        elif find(e, M2) == False:
            for times in range(0, k(e, M1)):
                L.append(e)
    print(sorted(L))
