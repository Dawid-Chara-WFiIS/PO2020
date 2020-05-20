#pragma once
#include <exception>
#include <string>

class BadDimsException : public std::exception
{
    public:
        BadDimsException(unsigned nRows, unsigned nCols, unsigned newNRows, unsigned newNCols) : 
        _nRows(nRows), _nCols(nCols), _newNRows(newNRows), _newNCols(newNCols) {}
        std::string what()
        {
            return "Exception caught: dimensions " + std::to_string(_newNRows)+ " and " + std::to_string(_newNCols) +
            " do not conform with " + std::to_string(_nRows)+ " and " + std::to_string(_nCols) + '\n';
        }
    private:
        unsigned _nRows,_nCols, _newNRows,  _newNCols;
};