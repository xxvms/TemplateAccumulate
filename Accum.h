//
// Created by tombr on 14/08/2017.
//

#ifndef TEMPLATEACCUMULATE_ACCUM_H
#define TEMPLATEACCUMULATE_ACCUM_H

template <class T>
class Accum {
private:
    T total;
public:
    Accum(T start) : total(start){}
    T operator += (const T& t) { return total = total + t; };
    T GetTotal() {return total;}

};


#endif //TEMPLATEACCUMULATE_ACCUM_H
