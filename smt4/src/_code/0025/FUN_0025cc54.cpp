#include "shard/PadState.h"

extern "C" {

extern PadState *gameGetPlayerData(void);
extern int gameFlagIsSet(u32 id);

u32 FUN_0025cc54(void)
{
    PadState *pad;

    if (gameFlagIsSet(0x410) != 0) {
        pad = gameGetPlayerData();
        if (pad->unk02 != 0 && pad->unk04 != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
