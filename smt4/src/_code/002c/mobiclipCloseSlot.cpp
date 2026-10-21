#include "common.h"

extern "C" {
extern u32 DAT_0044d0c8[];
void mobiclipCtrlClosePlayer(u32 player);

/* Closes the movie player selected by the low byte of the table entry. */
void mobiclipCloseSlot(u32 index)
{
    mobiclipCtrlClosePlayer(DAT_0044d0c8[index] & 0xff);
}
}
