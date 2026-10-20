#include "common.h"

extern "C" {

typedef struct IntArray {
    /* 0x00 */ s32 *data;
} IntArray;

/* Returns the address of element `index`. */
s32 *FUN_00101e20(IntArray *array, s32 index)
{
    return array->data + index;
}

} /* extern "C" */
