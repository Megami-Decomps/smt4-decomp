#include "gamedata/GameSaveBlocks.h"

// Test a saved flag for a valid, nonzero ID (1 through 500).
extern "C" u32 FUN_001a15f4(s32 id)
{
    if (id != 0) {
        if ((u32)id > 500) {
            return 0;
        }
        const GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;
        if (body->savedFlags[id / 8] & (1 << (id % 8)))
            return 1;
        return 0;
    }
    return 0;
}
