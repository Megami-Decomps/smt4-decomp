/* NON_MATCHING: retail keeps the slot base in r0 and loads the target through it (+104) while the active byte is read through a separate base+12 pointer; built folds the +12 into the base */
#include "common.h"

extern "C" {

typedef struct EplWork {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ void *target;
    /* 0x60 */ u8 active;
    /* 0x61 */ u8 unk61[3];
} EplWork; /* 0x64 */

typedef struct EplSlots {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ EplWork work[16];
} EplSlots;

typedef struct GameStateFlags {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 paused;
} GameStateFlags;

void FUN_00182540(void);

extern EplSlots *g_eplSlots;
extern GameStateFlags g_gameState;

static inline bool eplWorkIsActive(EplWork *work)
{
    return work->target != NULL && work->active != 0;
}

/* Runs FUN_00182540 for each of the 16 effect works that has a target and is active, unless the game state is paused. */
void FUN_002b74cc(void)
{
    s32 i;

    if (g_eplSlots != NULL && g_gameState.paused == 0) {
        for (i = 0; i < 16; i++) {
            if (eplWorkIsActive(&g_eplSlots->work[i])) {
                FUN_00182540();
            }
        }
    }
}

} /* extern "C" */
