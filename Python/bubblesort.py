
def swap(a, b):
    tmp = a
    a = b
    b = tmp
    # print(a,b)
    return a,b

def bubblesort(data):
    while True:
        sort_flag = True        
        for i in range(len(data) - 1):
            if data[i] > data[i+1]:
                data[i], data[i+1] = swap(data[i], data[i+1])
                sort_flag = False
        # print(data)
        if sort_flag:
            break

    return data


def main():
    # print("Test")
    # a = 10
    # b = 20
    # print(a,b)
    # print(swap(a,b))
    # print(a,b)
    data = [1,0,2,9,3,8,4,7,5,6]
    data = [0,9,8,7,6,5,4,3,2,1]
    print( data )
    bubblesort(data)
    print( data )


if __name__ == '__main__':
    main()
