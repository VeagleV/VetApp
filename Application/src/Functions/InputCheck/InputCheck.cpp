#include "./InputCheck.h"

bool isIntInputValid(const string& input) {
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool isStringInputValid(string input) {
    for (char c : input) {
        if (!isalpha(c)) {
            return false;
        } 
    }
    return true;
}