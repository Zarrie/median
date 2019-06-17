#pragma once

#include <queue>
#include <vector>

class medianStructure{
    private:
        std::priority_queue<double, std::vector<double>, std::less<double>> maxHeap; 
        std::priority_queue<double, std::vector<double>, std::greater<double>> minHeap;

        void transfer(std::priority_queue<double, std::vector<double>, std::less<double>>& src, std::priority_queue<double, std::vector<double>, std::greater<double>>& dst);
        void transfer(std::priority_queue<double, std::vector<double>, std::greater<double>>& src, std::priority_queue<double, std::vector<double>, std::less<double>>& dst);

    public :
        medianStructure& insert(const double newElement);
        double getMedian(); 
};
