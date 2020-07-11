from tkinter import *
from tkinter import messagebox

a=Tk()
a.title('Last Subject')
a.geometry('350x350')

lb1=Label(a, text='')
lb2=Label(a,text='호구 조사!', font=('맑은 고딕',20, 'bold'), bg='White')
lb3=Label(a, text='')
lb1.grid(row=1, column=1)
lb2.grid(row=2, column=4)
lb3.grid(row=3, column=1)

def change():
    str=''
    if Var1.get() == 1:
        str=str+'자동차 (O) \n'
    if Var2.get() == 1:
        str=str+'집 (O) \n'
    if Var3.get() == 1:
        str=str+'컴퓨터 (O) \n'
    show.configure(text=str)

Var1=IntVar()
Var2=IntVar()
Var3=IntVar()

cb1=Checkbutton(a,text="자동차",variable=Var1, command=change)
cb2=Checkbutton(a,text="집",variable=Var2, command=change)
cb3=Checkbutton(a,text="컴퓨터",variable=Var3, command=change)
txt=Label(a, text='소유자산')
show=Label(a)

cb1.grid(row=4, column=2)
cb2.grid(row=4, column=3)
cb3.grid(row=4, column=4)
txt.grid(row=4, column=5)
show.grid(row=5, column=5)

gender=Label(a, text='성별')
gender.grid(row=6, column=2)


def mygender():
    str=''
    if var1.get() == 1:
        str=str+'성별 : 남'
    if var1.get() == 2:
        str=str+'성별 : 여'
    gender1.configure(text=str)


var1=IntVar()

r1=Radiobutton(a,text='남',value=1,variable=var1, command=mygender)
r2=Radiobutton(a,text='여',value=2,variable=var1, command=mygender)
r1.grid(row=7, column=2)
r2.grid(row=7, column=3)

gender1=Label(a, text='성별 :')
gender1.grid(row=9, column=5)


et=Label(a)
et.grid(row=8, column=1)
info=Label(a, text='정보')
info.grid(row=8, column=5)

blood=Label(a, text='혈액형')
blood.grid(row=9, column=2)


def myblood():
    str=''
    if var2.get() == 1:
        str=str+'혈액형 : A'
    if var2.get() == 2:
        str=str+'혈액형 : AB'
    if var2.get() == 3:
        str=str+'혈액형 : B'
    if var2.get() == 4:
        str=str+'혈액형 : O'
    blood1.configure(text=str)


var2=IntVar()

q1=Radiobutton(a,text='A',value=1,variable=var2, command=myblood)
q2=Radiobutton(a,text='AB',value=2,variable=var2, command=myblood)
q3=Radiobutton(a,text='B',value=3,variable=var2, command=myblood)
q4=Radiobutton(a,text='O',value=4,variable=var2, command=myblood)

blood1=Label(a, text='혈액형 :')
blood1.grid(row=10, column=5)

q1.grid(row=10, column=2)
q2.grid(row=10, column=3)
q3.grid(row=11, column=2)
q4.grid(row=11, column=3)

def update():
    str=''
    if (var1.get() == 1 or var1.get() == 2) and (var2.get() == 1 or var2.get() == 2 or var2.get() == 3 or var2.get() == 4):
        str = str+'선택하신 내용으로 갱신되었습니다.'
    if str=='':
        str = '선택하지 않은 정보가 있습니다!'
    messagebox.showinfo('', str)


bu=Button(a,text='정보 갱신', fg='white', bg='blue', command=update)
bu.grid(row=6, column=5)
