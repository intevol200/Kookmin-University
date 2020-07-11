from tkinter import *
from tkinter import messagebox

def myFunc():
    if chk.get() == 1:
        messagebox.showinfo('', 'ON')
    else:
        messagebox.showinfo('', 'OFF')

def classes():
    str=''
    if Var1.get() == 1:
        str=str+'전산학! \n'
    if Var2.get() == 1:
        str=str+'기계학! \n'
    if str=='':
        str = '선택되지 않음'
    messagebox.showinfo('', str)

def change():
    str=''
    if Var1.get() == 1:
        str=str+'전산학!'
    if Var2.get() == 1:
        str=str+'기계학!'
    if str=='':
        str = '선택되지 않음'
    txt.configure(text=str)

def grade():
    str=''
    if var1.get()==1:
        str=str+'1학년'
    if var1.get()==2:
        str=str+'2학년'
    if var1.get()==3:
        str=str+'3학년'
    if var1.get()==4:
        str=str+'4학년'
    hak.configure(text=str)
    messagebox.showinfo('학년', str)
    
a=Tk()
a.title('Last Subject')
a.geometry('400x400')

chk=IntVar()
cb=Checkbutton(a, text='체크박스', variable=chk, command=myFunc)
cb.pack()


blk=Label(a, text='--------------------------------------')
blk.pack()

Var1=IntVar()
Var2=IntVar()
cb1=Checkbutton(a,text='전산학',variable=Var1, command=change)
cb2=Checkbutton(a,text='기계학',variable=Var2, command=change)
bu=Button(a,text='수강과목',command=classes)
txt=Label(a, text='선택한 과목')

cb1.pack()
cb2.pack()
bu.pack()
txt.pack()

blk2=Label(a, text='--------------------------------------')
blk2.pack()

var1=IntVar()

r1=Radiobutton(a,text="1학년",value=1,variable=var1, command=grade)
r2=Radiobutton(a,text="2학년",value=2,variable=var1, command=grade)
r3=Radiobutton(a,text="3학년",value=3,variable=var1, command=grade)
r4=Radiobutton(a,text="4학년",value=4,variable=var1, command=grade)
bu1=Button(a,text="학년 선택", command=grade)
hak=Label(a)

r1.pack()
r2.pack()
r3.pack()
r4.pack()
bu1.pack()
hak.pack()
