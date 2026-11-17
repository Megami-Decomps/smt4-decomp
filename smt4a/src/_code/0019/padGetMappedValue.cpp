#include "code/Code0019_Smt4a.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 padGetMappedValue(u32 id)
{
    const PlayerDataA* pad = reinterpret_cast<const PlayerDataA*>(gameGetPlayerData());
    for (s32 slot = 0; slot < 8; ++slot) {
        if (pad->skills[slot] == id) {
            return pad->skillRanks[slot];
        }
    }
    return 0;
}
}
