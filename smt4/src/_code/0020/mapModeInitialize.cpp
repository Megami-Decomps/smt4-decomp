#include "shard/W5_W5Match2_MapState.h"

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
extern GameStateCallbackWork g_gameState;
extern ModeGlobals DAT_004474f0;

/* Select the map mode and reset progress outside mode one. */
void mapModeInitialize(void)
{
    if (g_gameState.mapMode == 1) {
        DAT_004474f0.work->mode = 0;
    } else {
        DAT_004474f0.work->state = 0;
        DAT_004474f0.work->mode = 2;
        DAT_004474f0.work->counter = 0;
    }
}

}
