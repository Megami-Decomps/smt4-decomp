#include "common.h"

extern "C" {

extern u32 DAT_004640d0;

u32 effGetFrameCounter(void)
{
    return DAT_004640d0;
}

} /* extern "C" */
