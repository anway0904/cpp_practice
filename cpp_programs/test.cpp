#include<iostream>

int fun(void *Ptr){
    std::cout << static_cast<char*>(Ptr);
    return 0;
}
int main(){
    std::cout << "AA" << std::endl;

}