#include "Array2D.h"
#include "BadDimsException.h"

std::ostream& operator << (std::ostream& out, const Array2D& array)
{
    for(unsigned i = 0; i < array._nRows; i++)
    {
        for(unsigned j = 0; j< array._nCols; j++)
            std::cout << array._flattenedArray[i*array._nCols + j] << "   ";
        std::cout << std::endl;
    }
    return out;
}

int* Array2D::operator [](unsigned nRow)
{
    return _flattenedArray + nRow*_nCols;
}

int& Array2D::at(unsigned row, unsigned column)
{
    if(row >= _nRows)
        throw std::out_of_range("Exception caught: out of range at i=" + std::to_string(row));
    else if(column >= _nCols)
        throw std::out_of_range("Exception caught: out of range at j=" + std::to_string(column));
    else
        return _flattenedArray[row * _nCols + column]; 
}

int Array2D::at(unsigned row, unsigned column) const
{
    if(row >= _nRows)
        throw std::out_of_range("Exception caught: out of range at i=" + std::to_string(row));
    else if(column >= _nCols)
        throw std::out_of_range("Exception caught: out of range at j=" + std::to_string(column));
    else
        return _flattenedArray[row * _nCols + column]; 
}

void Array2D::reshape(unsigned newNRows, unsigned newNCols)
{
    if(newNCols*newNRows != _nCols*_nRows)
        throw BadDimsException(_nRows, _nCols, newNRows, newNCols);
    else
    {
        _nRows = newNRows;
        _nCols = newNCols;
    }
}