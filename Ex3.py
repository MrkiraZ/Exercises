import json
# abrindo arquivo json
f = open('dados.json')
data = json.load(f)

valor=[] # vetor que irá receber todos os valores do json
mes=[]   # vetor que irá receber todos os valores >0.0 do json
for i in data:
 valor.append(i['valor']) # inserindo valores no primeiro vetor
#contadores
total=0
cont=0
cont2=0
for i in valor:
    if i>0.0:
        mes.append(i)# inserindo valores >0.0 no primeiro vetor
        total+=i
        cont+=1
# media sera igual ao total de faturamento dividido pelos dias em que o valor foi >0.0
media=total/cont 
print ("O menor faturamento do mes foi: R$",min(mes))
print("O maior faturamento do mes foi: R$",max(mes))
#apos obtermos a media mensal desejada, esse loop apenas irá contar quantos dias o valor diario foi maior que a media
for i in mes:
    if i>media:
        cont2=cont2+1
print("Total dias no mes em que o valor de faturamento diario foi superior a media mensal:",cont2)
# fechando o arquivo json