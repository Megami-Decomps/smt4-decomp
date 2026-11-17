/* NON_MATCHING: register allocation only: retail loads the table pointer into r2 (built: r1) */
#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Sets bit 2 of the flag byte for id `id` (0..0x47). */
void FUN_002d91b8(s32 id)
{
    GameSaveBody *body;
    u8 *flag;

    if (id < 0x48) {
        if (id >= 0) {
            body = &g_gameDataBlocks.saveBlock->body;
            if (id >= 0x40) {
                flag = &body->extendedFlags.flagsB[id];
            } else {
                flag = &body->flagsA[id];
            }
            if (flag != NULL) {
                *flag |= 4;
            }
        }
    }
}

} /* extern "C" */
