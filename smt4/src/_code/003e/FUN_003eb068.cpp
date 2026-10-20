#include "common.h"

extern "C" {

void FUN_003eb068(u32 *obj)
{
    obj[0] = 0;
    *(u8 *)(obj + 1) = 0;
}

} /* extern "C" */
