#include "common.h"

extern "C" {

/* Returns bits 16-23 of the referenced word. */
u32 FUN_002fd38c(u32 *valueRef)
{
    return (*valueRef & 0xFFFFFF) >> 0x10;
}

} /* extern "C" */
