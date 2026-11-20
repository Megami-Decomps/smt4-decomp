#include "common.h"

extern "C" {

extern u8 DAT_004eac74;

u8 *dspFxStateGet(void)
{
    return &DAT_004eac74;
}

} /* extern "C" */
