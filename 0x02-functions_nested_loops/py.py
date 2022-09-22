from requests import head


class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class linkedlist():
    
    def __init__(self) -> None:
        self.head = None
        self.tail = None

    def  addNode(self,data, pos):
        Newdata = Node(data)
        if self.head == None:
            self.head = Node(data)
            self.tail = Node(data)
            

        elif pos == 0:
            Newdata.next = self.head
            self.head = Newdata
        
        elif pos == 1:
            temp = self.head
            while temp.next != None :
                temp = temp.next
            temp.next = Node(data)
        
        else:
            N = 1
            movin_pointer = self.head
            while (N < pos-1):
                N +=1
                movin_pointer = movin_pointer.next
    
            NextVall = movin_pointer.next
            movin_pointer.next = Newdata
            Newdata.next = NextVall

        return self.head

    def display(self) -> None:
        pointer = self.head
        while pointer != None:
            print(pointer.data)
            pointer = pointer.next
        


llk = linkedlist()

llk.addNode(10, 1)
llk.addNode(20, 1)
llk.addNode(30, 1)
llk.addNode(40, 1)
llk.addNode(11, 1)
llk.addNode(5,  1)
llk.display()

