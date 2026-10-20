#include "common.h"

extern "C" {

int asdMemFree(int ptr);

void asdOperatorDelete(int ptr)
{
    if (ptr != 0) {
        asdMemFree(ptr);
        return;
    }
}

} /* extern "C" */
