using namespace std;
#include<stdint.h>
// every object of type struct_float will be aligned to alignof(float) boundary
// (usually 4)
struct alignas(float) struct_float {
    // your definition here
};
 
// every object of type sse_t will be aligned to 128-byte boundary
struct alignas(4) sse_t
{
    float sse_data[4];
    int a[6];
    int32_t f;
};
 
#include <iostream>
int main()
{
    sse_t x, y, z;
    struct default_aligned { float data[4]; } a, b, c;


    std::cout << "alignof(struct_float) = " << alignof(struct_float) << '\n'
              << "alignof(sse_t) = " << alignof(sse_t) << '\n'; 
    
 
    std::cout << std::hex << std::showbase
              << "&x: " << &x << '\n'
              << "&y: " << &y << '\n'
              << "&z: " << &z << '\n'
              << "&a: " << &a << '\n'
              << "&b: " << &b << '\n'
              << "&c: " << &c << '\n';
}
