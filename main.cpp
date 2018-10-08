#include <iostream>
#include <chrono>

int main(int argc, const char * argv[]) {
    int k, b, a[2048000];
    for (int i = 0;i<2048000; i++)
        a[i]= rand();
    auto start = std::chrono::system_clock::now();
    for (int j = 0; j<1000; j++)
        for (int i = 2048000; i>0; i--)
        {
            k = rand() % 2048000 + 0;
            b = a[k];
        }
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> diff = end-start;
    std::cout << "Time of managing 128 KB massive " << diff.count() << " s\n";
    
    return 0;
}
