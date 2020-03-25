#pragma once

namespace Functors
{
    class divisibleBy{
        public:
            divisibleBy(int divisor) : _divisor(divisor) {}
            bool operator()(int numToDivide) {return numToDivide % _divisor ? false : true;}

        private:
            int _divisor;
    };

    class greaterThan{
        public:
            greaterThan(int numToStore) : _numToStore(numToStore) {}
            bool operator()(int numToCompare) {return numToCompare > _numToStore ? true : false;}

        
        private:
            int _numToStore;
    };

}