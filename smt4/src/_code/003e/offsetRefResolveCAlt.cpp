#include "common.h"

extern "C" {

int offsetRefResolveCAlt(int base)
{
    return base + *(int *)(base + 0xc);
}

} /* extern "C" */
