#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);

/* Returns 1 when flag 0x410 is set and the record gameGetPlayerData returns has both halfwords (at 2 and 4) nonzero. */
u32 FUN_002fa75c(void)
{
    s32 flag;
    PlayerDataA *record;
    u8 present;
    u32 value;

    flag = gameFlagIsSet(0x410);
    if (flag != 0) {
        record = gameGetPlayerData();
        present = record->equipped.gun != 0;
        if (present) {
            value = (u32)record->equipped.bullets;
        }
        if (present && value != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
