/* Returns 1 if the global state's flag at +0x1F4DC is set or gameFlagIsSet(0x528) reports true, else 0. */
#include "shard/GameDataBlocks.h"

extern "C" {


extern s32 gameFlagIsSet(u32 id);

s32 FUN_0027d8c8(void)
{
    s32 result;

    if (g_gameDataBlocks.saveBlock->unk1F4DC != 0) {
        return 1;
    }
    result = gameFlagIsSet(0x528);
    if (result != 0) {
        return 1;
    }
    return result;
}

}
