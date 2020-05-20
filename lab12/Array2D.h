#pragma once
#include <iostream>
#include <memory>

class Array2D
{
    public:
        friend std::ostream& operator << (std::ostream&, const Array2D&);
        Array2D(unsigned nRows, unsigned nCols) : _nRows(nRows), _nCols(nCols) 
        {
            _flattenedArray = new int [_nCols*_nRows];
            for(unsigned i = 1; i <= nRows*nCols; i++)
                _flattenedArray[i-1] = i;
                
        }

        ~Array2D()
        {
            delete [] _flattenedArray;
        }
        
        int* operator [](unsigned);
        Array2D& operator = (const Array2D& other)
        {
            if(&other != this)
            {
                _nCols = other._nCols;
                _nRows = other._nRows;
                delete [] _flattenedArray;
                _flattenedArray = new int [_nCols * _nRows];
                for(unsigned i=0; i < _nCols * _nRows; i++)
                    _flattenedArray[i] = other._flattenedArray[i];
            }
            return *this;
        }
        void reshape(unsigned, unsigned);
        int& at(unsigned, unsigned);
        int at(unsigned, unsigned) const;


    private:
        int* _flattenedArray;
        unsigned _nRows, _nCols;



};