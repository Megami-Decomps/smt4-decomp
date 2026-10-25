#include "common.h"

extern "C" {

extern u8 DAT_004d92f0[0x200];
extern u8 g_registrationEntries[];

void memClear(void *memory, u32 size);

/* Clears the two 0x200-byte tables at start-up. */
void FUN_00105948(void)
{
    memClear(DAT_004d92f0, 0x200);
    memClear(g_registrationEntries, 0x200);
}

} /* extern "C" */
