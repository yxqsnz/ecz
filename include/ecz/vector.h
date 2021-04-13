#include <vector>
#include <iostream>
inline auto convert_str_vector_to_str_array(std::vector<std::string> vec) {
    auto arr = vec.data();
    return *arr;
}