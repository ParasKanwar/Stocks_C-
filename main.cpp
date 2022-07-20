#include <iostream>
#include <chrono>
#include <cstdint>
#include <vector>

using namespace std;

uint64_t timeSinceEpochMillisec(){
    using namespace std::chrono;
    return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}


int main() {
    uint64_t start = timeSinceEpochMillisec();
    long int a = 0;
    int somearr[10000];
    for(long int i = 0;i < 10000;i++){
        somearr[i] = i;
    }
    cout << somearr[10] << endl;
    uint64_t end = timeSinceEpochMillisec();
    cout << end - start << endl;
    return 0;
}
