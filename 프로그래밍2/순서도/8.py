s = int(input('초 단위의 시간: '))
h = s//3600
s = s%3600
m = s//60
s = s%60
print(h, '시간', m, '분', s, '초')
