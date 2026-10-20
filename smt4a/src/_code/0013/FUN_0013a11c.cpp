#include "common.h"

extern "C" {

void sysMemClear(void *block, s32 size);
extern u8 DAT_00635370[];
extern u8 DAT_00635570[];

/* Clears the two 0x200-byte tables at 0x635370 and 0x635570. */
void FUN_0013a11c(void)
{
    sysMemClear(DAT_00635370, 0x200);
    sysMemClear(DAT_00635570, 0x200);
}

} /* extern "C" */
