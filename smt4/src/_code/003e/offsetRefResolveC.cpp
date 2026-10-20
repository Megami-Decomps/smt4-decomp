#include "common.h"

extern "C" {

int offsetRefResolveC(int base)
{
    return base + *(int *)(base + 0xc);
}

} /* extern "C" */
