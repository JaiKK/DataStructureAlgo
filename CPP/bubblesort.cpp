#include<iostream>

template <class T>
void swap(T &x, T &y){
    T tmp = x;
    x = y;
    y = tmp;
}

template <class T>
T *bubblesort(T *data){

    bool sort_flag = true;

    while(true){
        sort_flag = true;
        for(int i=0; i < 10 - 1; i++){
            if (data[i] > data[i+1]){
                swap(data[i] , data[i+1]);
                sort_flag = false;
            }
            // std::cout << data[i] << " ";
        }
        // std::cout << std::endl;
        if(sort_flag == true) break;
    }

    return data;
}


int main(){

    int data[10] = {10, 15, 4, 28, 5, 19, 8, 9, 1, 30};
    float dataf[10] = {10.7, 10.1, 4.0, 28.0, 5.2, 5.1, 10.5, 9.0, 1.0, 30.0};
    char dataa[10] = {'f', 'd', 'e', 'c', 'm', 'g', 'j', 'l', 'k', 'a'};

    // std::cout << "array: " << sizeof(data) << ", data:" << sizeof(data[0]) << std::endl;

    int *p = bubblesort(data);
    for(int i=0; i < 10; i++){
        std::cout << p[i] <<  " ";
    }
    std::cout << std::endl;

    float *f = bubblesort(dataf);
    for(int i=0; i < 10; i++){
        std::cout << f[i] << " ";
    }
    std::cout << std::endl;

    char *a = bubblesort(dataa);
    for(int i=0; i < 10; i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;    


     return 0;
}