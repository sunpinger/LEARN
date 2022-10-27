def f1(n, A, B, C):
    if(n == 1):
        print(A,"->",C)
        return
    f1(n-1,A, C, B)
    f1(1,A, B, C)
    f1(n-1,B,A, C)


def strToList(sentence:str) ->list :
    '''
    Turn str into list, word is the element.
    '''
    result = []
    alphabet = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
    start = 0
    end = 0
    
    for i,c in enumerate(sentence):
        if c not in alphabet:
            end = i
            result.append(sentence[start:end])
            start = i+1

    return result

def f2(l:list) -> str:
    """
    Just esverse the sentence and the word don't change.
    """
    if len(l) == 1:
        return l[0]
    else:
        return f2(l[1:]) + " " +l[0]


if __name__ == "__main__":
    s1 = "This is a book"
    print(f2(s1.split()))
    f1(3, "A", "B", "C")
