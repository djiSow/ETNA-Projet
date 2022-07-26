from typing import List

def daemon(numbers: List[int], k: int) -> bool:

    

    for j in numbers[:k]: #k est l'index de reference et le depart d'iteration
        # print("k = ",numbers[k])
        # print("j = ",j)
        if j >= numbers[k]: #je verifie si il n'y a pas un nombre plus grand ou égal
            # print("faux plus grand ou egal")
            return False
        

    for i in numbers[k+1:]:#je verifie si il n'y a pas un nombre plus petit 
        # print("k = ",numbers[k])
        # print(i)
        if i < numbers[k]:
            # print ("faux plus petit ")
            return False
    
    # print("c vrai")
    return True
    

daemon([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1], 0)
daemon([100, 97, 101, 109, 111, 110], 3)