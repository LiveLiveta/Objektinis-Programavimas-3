#ifndef UTILS_H
#define UTILS_H

#include "pagalbines.h"

template <typename T>
T calculateAverage(const vector<T>& data){
    if (data.empty()) {
        return T();
    }

    T sum = T();
    
    for(T element: data){
        sum += element;
    }

    return sum / data.size();
}

double** flipRowsAndColumns(double** matrix, int& numberOfRows, int& numberOfColumns);
void formatReadmeTable(double** allTestsTimes, int numberOfRows, int numberOfColumns, int strategyNumber, string& containerType);
int getNumberOfStudents(int index);

#endif