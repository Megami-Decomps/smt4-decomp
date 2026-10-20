#include "common.h"

extern "C" {

int offsetRefResolve10(int base)
{
    return base + *(int *)(base + 0x10);
}

} /* extern "C" */
