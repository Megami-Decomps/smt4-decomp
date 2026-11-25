#include "common.h"

extern "C" {

void __ARM_common_memclr4_5(u32 *obj)
{
    obj[0] = 0;
    *(u8 *)(obj + 1) = 0;
}

} /* extern "C" */
