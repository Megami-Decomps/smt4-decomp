#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 idle;
    /* 0x01 */ u8 unk01[0x13];
    /* 0x14 */ u32 holds;      /* bit set of reasons to stay busy */
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

void appletSetHomeButtonHeld(void);

/* Clears the given bits of `holds`, marks the table idle once none are left, then runs appletSetHomeButtonHeld. */
void FUN_001386e8(u32 bits)
{
    g_gameDataBlocks.holds = g_gameDataBlocks.holds & ~bits;
    if (g_gameDataBlocks.holds != 0) {
        g_gameDataBlocks.idle = 0;
        appletSetHomeButtonHeld();
        return;
    }
    g_gameDataBlocks.idle = 1;
    appletSetHomeButtonHeld();
}

} /* extern "C" */
