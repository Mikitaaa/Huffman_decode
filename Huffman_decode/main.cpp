#include <algorithm>
#include <iostream>
#include <string>
#include <map>

void decode(){
    std::string encode_letter,encode_str;
    int number_of_letters, bit_volume,iter=0;
    char letter;
    std::map<std::string,char> output_values;
    
    std::cin>>number_of_letters>>bit_volume;
    for (int i=0; i<number_of_letters; ++i) {
        std::cin>>letter;
        std::cin.ignore(2);
        getline(std::cin,encode_letter);
        output_values[encode_letter]=letter;
    }
    getline(std::cin,encode_str);
    
    std::string tree_key = "";
    for(auto &i : encode_str){
        tree_key+=i;
        auto check = output_values.find(tree_key);
        if(check != output_values.end()){
            std::cout<<check->second;
            tree_key.clear();
        }
    }
}

int main(){
    decode();
    return 0;
}
