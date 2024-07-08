andar = 0

print("Andares do Hotel, sem o 13° andar e utilizando a estrutura FOR: ")

for andar in range(20,0,-1):
    if andar == 13:
        continue
    print("{}° andar".format(andar))

print("----------------------------------------------------")

print("Andares do Hotel, sem o 13° andar e utilizando a estrutura WHILE: ")
cont = 20
andar_2 = 12

while (cont <= 20 and cont > 13):

    print("{}° andar".format(cont))

    cont -= 1


while (andar_2 < 13 and andar_2 > 0):


    print("{}° andar".format(andar_2))


    andar_2 -= 1



