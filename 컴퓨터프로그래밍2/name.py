name = input("안녕하세요?\n이름이 어떻게 되시나요? ")
print("만나서 반갑습니다."+name+"씨")
print("이름의 길이는 다음과 같군요: ",end='')
print(len(name))
age = int(input("나이가 어떻게 되나요? "))
print("내년이면", str(age+1), "이 되시는 군요.")
########################################################
print('')
year = input('오늘의 연도를 입력하시오: ')
month = input('오늘의 월을 입력하시오: ')
day = input('오늘의 일을 입력하시오: ')
print('오늘은', year+"년", month+"월", day+"일입니다.")
########################################################
print('')
import time

now = time.time()
thisyear =  int(1970 + now//(365*24*3600))
print("올해는", str(thisyear)+"입니다")
myage = int(input('몇 살이신지요? '))
print("2050년에는", str(myage + 2050-thisyear)+"살 이시군요.")
########################################################
print('')
friendlist = []

friend = input("친구의 이름을 입력하시오: ")
friendlist.append(friend)

friend = input("친구의 이름을 입력하시오: ")
friendlist.append(friend)

friend = input("친구의 이름을 입력하시오: ")
friendlist.append(friend)

friend = input("친구의 이름을 입력하시오: ")
friendlist.append(friend)

friend = input("친구의 이름을 입력하시오: ")
friendlist.append(friend)

print(friendlist)
