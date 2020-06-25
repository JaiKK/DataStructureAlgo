#include<iostream>


int main(){

    int data[10] = {10, 15, 4, 20, 2, 12, 8, 9, 1, 30};
    bool sort_flag = true;

    std::cout << "array: " << sizeof(data) << ", data:" << sizeof(data[0]) << std::endl;

    std::cout << "Before: ";
    for(const int &n : data){
        std::cout << n << " ";
    }
    std::cout << std::endl;

//for(int j=0; j < 10; j++){
while(true){
    sort_flag = true;
    for(int i=0; i < 10; i++){
        if (data[i] > data[i+1]){
            int tmp = data[i];
            data[i] = data[i+1];
            data[i+1] = tmp;
            sort_flag = false;
        }
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    if(sort_flag == true) break;
}


    // for(const int &n : data){
    //     std::cout << n << " ";
    // }

    return 0;
}