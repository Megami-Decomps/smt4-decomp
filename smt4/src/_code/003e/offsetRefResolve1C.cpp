#include "common.h"

extern "C" {

int offsetRefResolve1C(int base)
{
    return base + *(int *)(base + 0x1c);
}

} /* extern "C" */
