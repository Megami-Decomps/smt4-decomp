#include "common.h"

extern "C" {

typedef struct Array {
    /* 0x00 */ s32 data;
} Array;

/* Returns the address of the 4-byte element `index` of the array. */
s32 arrayElementAddress_0030eb14(Array *array, s32 index)
{
    return array->data + index * 4;
}

} /* extern "C" */
