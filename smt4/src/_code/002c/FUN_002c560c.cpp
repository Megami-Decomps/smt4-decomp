#include "common.h"

extern "C" {
extern u32 g_mobiclipSlotTable[];
void mobiclipRestoreDisplayState(u32 player);

/* Stops the movie player selected by the low byte of the table entry. */
void FUN_002c560c(u32 index)
{
    mobiclipRestoreDisplayState(g_mobiclipSlotTable[index] & 0xff);
}
}
