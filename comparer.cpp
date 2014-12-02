#include "comparer.h"

Comparer::Comparer() {

}


Comparer::Comparer( string col ) {
    this->orderCol = col;
}


bool Comparer::operator()(const Person first, const Person second) {
    if(orderCol == "N") {
        return first.lastName < second.lastName;
    } else if(orderCol == "G") {
        return first.gender < second.gender;
    } else if(orderCol == "B") {
        return first.dateOfBirth < second.dateOfBirth;
    }

    throw; // Exception()
}
