#include "common.h"

extern "C" {

void FUN_0030f138(u32 object, u8 *table, s32 flag);
extern u8 DAT_00538b18[];

/* Calls FUN_0030f138 with the table at 0x538B18 and 0. */
void FUN_002fd5c4(u32 object)
{
    FUN_0030f138(object, DAT_00538b18, 0);
}

} /* extern "C" */
