#include <iostream>
#include <type_traits>
#include <string>
#include <vector>

template<typename SEARCH, typename TUPLE,size_t start_from=0>
struct contains_type
{
    /* data */
};


bool contains (const std::string& search,const std::vector<std::string>& v,size_t start_from=0){
    if(v[start_from]==search){
    return true;}
    else{
        if(start_from == v.size()-1){
            return false;
        }
        else{
            return contains(search,v,start_from+1);
        }
    }

}


int main(){
    std::vector<std::string> vec{"int","bool","float"};
    std::cout<<std::boolalpha<<contains("bool",vec)<<"\n";
    std::cout<<std::boolalpha<<contains("double",vec)<<"\n";

    std::tuple<int,bool,float> tuple;
}