#include "game/GameState.h"

extern "C" {

struct ModeWork {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[0xA8];
    /* 0xAC */ u32 counter;
    /* 0xB0 */ u8 unkB0[0x14];
    /* 0xC4 */ u32 mode;
};
struct ModeGlobals {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ModeWork *work;
};
extern ModeGlobals g_lmapViewHolder;

/* Select the map mode and reset progress outside mode one. */
void mapModeInitialize(void)
{
    if (g_gameState.mapMode == 1) {
        g_lmapViewHolder.work->mode = 0;
    } else {
        g_lmapViewHolder.work->state = 0;
        g_lmapViewHolder.work->mode = 2;
        g_lmapViewHolder.work->counter = 0;
    }
}

}
