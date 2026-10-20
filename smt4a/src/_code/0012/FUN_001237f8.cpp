#include "common.h"

extern "C" {

void FUN_0030f138(u32 object, u8 *table, s32 flag);
extern u8 DAT_00538b10[];

/* Calls FUN_0030f138 with the table at 0x538B10 and 0. */
void FUN_001237f8(u32 object)
{
    FUN_0030f138(object, DAT_00538b10, 0);
}

} /* extern "C" */
