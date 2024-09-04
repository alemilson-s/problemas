import json

with open("faturamento.json", "r") as data_file:
    data = json.load(data_file)

faturamento = [item["valor"] for item in data]

menor_faturamento = float("inf")
maior_faturamento = float("-inf")

for valor in faturamento:
    if valor > 0: 
        menor_faturamento = min(menor_faturamento, valor)
        maior_faturamento = max(maior_faturamento, valor)

soma_faturamento = sum(valor for valor in faturamento if valor > 0)
dias_com_faturamento = sum(1 for valor in faturamento if valor > 0)
media_mensal = soma_faturamento / dias_com_faturamento

dias_acima_da_media = sum(1 for valor in faturamento if valor > media_mensal)

print("Menor faturamento diário:", menor_faturamento)
print("Maior faturamento diário:", maior_faturamento)
print("Dias com faturamento acima da média mensal:", dias_acima_da_media)
