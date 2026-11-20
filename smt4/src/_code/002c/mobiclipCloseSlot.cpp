#include "common.h"

extern "C" {
extern u32 g_mobiclipSlotTable[];
void mobiclipCtrlClosePlayer(u32 player);

/* Closes the movie player selected by the low byte of the table entry. */
void mobiclipCloseSlot(u32 index)
{
    mobiclipCtrlClosePlayer(g_mobiclipSlotTable[index] & 0xff);
}
}
