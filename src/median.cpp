#include "median.h"

void medianStructure::transfer(std::priority_queue<double, std::vector<double>, std::less<double>>& src, std::priority_queue<double, std::vector<double>, std::greater<double>>& dst){
    dst.push(src.top());
    src.pop();
}

void medianStructure::transfer(std::priority_queue<double, std::vector<double>, std::greater<double>>& src, std::priority_queue<double, std::vector<double>, std::less<double>>& dst){
    dst.push(src.top());
    src.pop();
}

medianStructure& medianStructure::insert(const double newElement){   
    if (maxHeap.empty() || newElement <= maxHeap.top()) {   
        maxHeap.push(newElement);
        if (maxHeap.size() > minHeap.size() + 1){
            transfer(maxHeap, minHeap);
        }
    } 
    else{   
        minHeap.push(newElement);
        if (minHeap.size() > maxHeap.size()){
            transfer(minHeap, maxHeap);
        }
    }

    return *this;
}

double medianStructure::getMedian(){
    if (maxHeap.empty()){ // If maxHeap is empty => minHeap is empty
        return 0;
    }   
    
    if (maxHeap.size() == minHeap.size()) {
        return (maxHeap.top() + minHeap.top()) / 2;
    }

    return maxHeap.top();
}
