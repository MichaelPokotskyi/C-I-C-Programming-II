#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SwapObjects(void* pa, void* pb, size_t size) {
    void *temp = malloc(size);
    memcpy(temp, pa, size);
    memcpy(pa, pb, size);
    memcpy(pb, temp, size);
}