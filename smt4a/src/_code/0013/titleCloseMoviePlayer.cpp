#include "common.h"

extern "C" {
extern u32 DAT_005880c0[];
void mobiclipCtrlClosePlayer(u32 playerId);

void titleCloseMoviePlayer(s32 playerIndex)
{
    mobiclipCtrlClosePlayer(DAT_005880c0[playerIndex] & 0xFFu);
}
}
