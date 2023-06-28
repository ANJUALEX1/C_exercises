#include <iostream>
#include <vector>
#include <algorithm>



int main(){
std::vector<int> arry={ 3,7,9,1 };
    std::sort(arry.begin(), arry.end());
    std::cout<<"The sorted array is"<< std::endl;
for(int i=0; i<arry.size(); i++){
    std::cout<< arry[i] <<std::endl;
}
    


    return (0);
}