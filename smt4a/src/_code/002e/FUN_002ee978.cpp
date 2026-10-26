#include "common.h"

extern "C" {

void FUN_0030f138(u32 object, u8 *table, s32 flag);
extern u8 DAT_00539e8a[];

/* Calls FUN_0030f138 with the table at 0x538B10 and 0. */
void FUN_002ee978(u32 object)
{
    FUN_0030f138(object, DAT_00539e8a, 0);
}

} /* extern "C" */
