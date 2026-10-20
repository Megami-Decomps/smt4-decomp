#include "common.h"

extern "C" {

int offsetRefResolve4(int base)
{
    return base + *(int *)(base + 4);
}

} /* extern "C" */
