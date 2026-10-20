#include "common.h"

extern "C" {

int offsetRefAddAtBase4(int base, int offset)
{
    return *(int *)(base + 4) + offset;
}

} /* extern "C" */
