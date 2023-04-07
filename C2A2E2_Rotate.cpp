//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 4/5/2023
// C2A2E2_Rotate.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #2 C2A2E2 (C)
// Rotating object bits left and right

int CountIntBitsF();

unsigned Rotate(unsigned object, int count) {
    // bytes requested from int CountIntBitsF
    int bits = CountIntBitsF();
    count %= bits;
    // right direction if positive
    if (count > 0)
    {
        return (object >> count) | (object << (bits - count));
    }
    // left direction if negative
    else
    {
        count = -count;
        return (object << count) | (object >> (bits - count));
    }
}
