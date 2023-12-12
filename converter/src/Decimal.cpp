#include "Decimal.hpp"

Decimal::Decimal(const std::string& number){

    this->valid = not number.empty() and number.find_first_not_of("0123456789", 1) == std::string::npos;

    if(not this->valid){

        return;
    }

    this->auxNumber = std::stoi(number);
    // for(size_t i = 0; i < number.size(); i++){
    //
    //     this->auxNumber.push_back(number[i] - '0');
    // }
}

std::string Decimal::convertToBinary(){

    std::string output;

    long unsigned copy = auxNumber;
    
    while(copy != 0){

        output = std::to_string(copy%2) + output;
        copy /= 2;
    }

    return output;
}

std::string Decimal::convertToOctal(){

    std::string output;

    return output;
}

std::string Decimal::convertToDecimal(){

    return std::to_string(this->auxNumber);
}

std::string Decimal::convertToHexadecimal(){

    std::string output;

    return output;
}
