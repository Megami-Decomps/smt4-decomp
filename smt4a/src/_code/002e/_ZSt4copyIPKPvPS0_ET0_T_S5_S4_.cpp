#include "common.h"

extern "C" {

/* std::copy for pointer elements: copies [first, last) to `result` and returns the end of the copy. */
void **_ZSt4copyIPKPvPS0_ET0_T_S5_S4_(void *const *first, void *const *last, void **result)
{
    for (; first != last; ++first, ++result) {
        *result = *first;
    }
    return result;
}

} /* extern "C" */
