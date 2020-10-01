import os
class Cell(object):
    def __init__(self, x = 0):
        self.current_state = x
        self.previous_state = x    

class TableGenerationStates:
    def __init__(self, matrix):
        self.length = len(matrix)
        self.table = [[Cell(matrix[i][j]) for j in range(self.length)] for i in range(self.length)] #creeam o matrice de obiecte Cell(celula)
  
    def print_current_generation(self):#afisarea generatiei curente
        os.system("cls")
        for i in range(self.length):
            for j in range(self.length):
                if self.table[i][j].current_state == 1:
                    print(chr(9619) + chr(9619), end = '') #afisam unicodul pentru un patratel alb(celula vie)
                else:
                    print(chr(9617) + chr(9617), end = '') #afisam unicodul pentru un patratel negru(celula moarta)
            print('\n', end = '')
        keyword = input("Press Enter for next generation!")
       
       
    def is_inside(self, i, j): #verificare daca o pozitie (i,j) se afla in matrice
        if i < 0 or i >= self.length or j < 0 or j >= self.length:
            return False
        return True

    def is_alive(self, i, j): #verificare daca o celula este vie
        assert i >= 0 and i < self.length and j >= 0 or j < self.length, "Celula aflata pe pozitia ({}, {}) nu se afla in matrice".format(i, j)
        if self.table[i][j].previous_state == 1:
            return True
        return False

    def nth_generation(self, n): #generarea tuturor generatiilor pana la cea cu numarul n
        for curr_generation in range(n):
            cells_borns = 0 #nr de celule vii la generatia curenta
            cells_dies = 0 #nr de celule moarte la generatia curenta
            for i in range(self.length):
                for j in range(self.length):
                    neighbours_alive = 0
                    #iteram prin lista de vecini si numaram cati vecini/celule vii are
                    for dx, dy in ((i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1), (i - 1, j - 1), (i - 1, j + 1), (i + 1, j - 1), (i + 1, j + 1)):
                        if self.is_inside(dx, dy):
                            if self.is_alive(dx, dy):
                                neighbours_alive += 1
                    
                    if self.table[i][j].previous_state == 0 and neighbours_alive == 3: # daca celula este moarta si are 3 vecini vii
                        cells_borns += 1
                        self.table[i][j].current_state = 1
                    
                    if self.table[i][j].previous_state == 1 and neighbours_alive != 2 and neighbours_alive != 3: # daca celula este vie si nu are 2 sau 3 vecini vii, ea moare
                        cells_dies += 1
                        self.table[i][j].current_state = 0  
            self.print_current_generation()
            for ii in range(self.length):
                for jj in range(self.length):
                    self.table[ii][jj].previous_state = self.table[ii][jj].current_state 
            

