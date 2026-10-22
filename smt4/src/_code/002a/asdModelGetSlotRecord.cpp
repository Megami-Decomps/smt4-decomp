#include "common.h"

extern "C" {

extern u32 DAT_00464b7c[];

u32 asdModelGetSlotRecord(int index)
{
    return DAT_00464b7c[index];
}

} /* extern "C" */
