#include "common.h"

extern "C" {

/* std::copy_backward for pointer elements: copies [first, last) so that it ends at `result`; returns the start of the copy. */
void **_ZSt13copy_backwardIPPvS1_ET0_T_S3_S2_(void **first, void **last, void **result)
{
    while (first != last) {
        *--result = *--last;
    }
    return result;
}

} /* extern "C" */
