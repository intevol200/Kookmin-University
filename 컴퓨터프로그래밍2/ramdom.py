import random
answer = random.randrange(100)

chance = 5

print("up-down Game !")
print("정답이 생성되었습니다.")

while True:
    print("남은 기회 : " + str(chance))
    if chance == 0:
            print("실패 ㅠㅠ")
            break
        
    guess = int(input("정답을 입력하세요 : "))

    if guess > answer:
            print("Down !")
            chance = chance - 1
    
    elif guess < answer:
            print("Up !")
            chance = chance - 1
            
    else:
            print("정답입니다!")
            break
