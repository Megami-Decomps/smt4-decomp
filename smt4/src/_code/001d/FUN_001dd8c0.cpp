/* NON_MATCHING: same logic; retail keeps the flag in r1 and the room pointer in r0, this build swaps the two registers. */
#include "common.h"

struct NpcRoomView {
    /* 0x00 */ u8 unk00[0xF0];
    /* 0xF0 */ s32 state;
};

extern "C" NpcRoomView *g_npcRoom;

/* Whether the room exists and is not closed. */
extern "C" s32 FUN_001dd8c0(void)
{
    bool closed = true;

    if (g_npcRoom != NULL && g_npcRoom->state != 7) {
        closed = false;
    }
    return !closed;
}
