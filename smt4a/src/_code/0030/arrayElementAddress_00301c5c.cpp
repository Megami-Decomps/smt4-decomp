#include "common.h"

extern "C" {

typedef struct Array {
    /* 0x00 */ s32 data;
} Array;

/* Returns the address of the 12-byte element `index` of the array. */
s32 arrayElementAddress_00301c5c(Array *array, s32 index)
{
    return array->data + index * 0xC;
}

} /* extern "C" */
