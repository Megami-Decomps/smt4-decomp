#include "battle/BtlMainAccess.h"

struct BattleExclusionMasks {
    u8 unk00[0xd0];
    u64 first;
    u8 unkD8[0x30];
    u64 second;
};

extern "C" {
extern BattleExclusionMasks g_btlMain;

u32 FUN_003ec7b0(const BtlMainStateExtA* battle)
{
    if (battle->count > 0) {
        if ((g_btlMain.first & battle->stateFlags64.bits) == 0 && (battle->stateFlags64.bits & g_btlMain.second) == 0) {
            return 1;
        }
    }
    return 0;
}
}
