#include "common.h"

extern "C" {

/* Compares two u16 values through pointers: second minus first (descending order). */
s32 u16CompareDescending(const u16 *first, const u16 *second)
{
    return *second - *first;
}

} /* extern "C" */
