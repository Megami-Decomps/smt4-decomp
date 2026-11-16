#include "common.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {

extern void flagValueRead(void);

/* Forwards to the function that follows it in the binary. */
u16 FUN_0028fb3c(s32 arg0)
{
    flagValueRead();
}

} /* extern "C" */
