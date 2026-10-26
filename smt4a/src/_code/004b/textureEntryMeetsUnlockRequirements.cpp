#include "common.h"
#include "shard/Shard0034.h"

namespace {
struct UnlockSpriteEntryView { u8 unk00[0xC]; u16 id; };
struct UnlockLevelRequirementView { u8 unk00[0x120]; s16 level; };
}
extern "C" {
UnlockSpriteEntryView *FUN_004bb80c(s32 index);
s32 partyEntryFlagsBit3(u16 id);
s32 goalConditionsSatisfied(u16 id);
s32 FUN_001ba3d4(u32 index);
s32 FUN_003df390(u16 id);
UnlockLevelRequirementView *FUN_001ad9b4(u16 id);
PlayerData *gameGetPlayerData(void);

s32 textureEntryMeetsUnlockRequirements(u32 index)
{
    UnlockSpriteEntryView *entry = FUN_004bb80c(index);
    if (partyEntryFlagsBit3(entry->id) != 0)
        return 0;
    if (goalConditionsSatisfied(entry->id) != 0)
        return 0;
    if (entry->id == 0x8D) {
        if (FUN_001ba3d4(0x3A) >= 10) {
            if (index == 0x357 || index == 0x35D) return 0;
            if (index == 0x369 || index == 0x36A) return 0;
            if (index == 0x36F || index == 0x370) return 0;
            if (index == 0x375 || index == 0x377) return 0;
            if (index == 0x37B || index == 0x37C) return 0;
            if (index == 0x382 || index == 0x387) return 0;
            if (index == 0x388 || index == 0x3CF) return 0;
            if (index == 0x3D1 || index == 0x3E3 || index == 0x3E5) return 0;
        }
        if (FUN_001ba3d4(0x3C) >= 10) {
            if (index == 0x357 || index == 0x3B9) return 0;
            if (index == 0x3BB || index == 0x3BF) return 0;
            if (index == 0x3C9 || index == 0x3CA) return 0;
            if (index == 0x3D5 || index == 0x3E2) return 0;
            if (index == 0x3E4 || index == 0x3EC || index == 0x3F1) return 0;
        }
    }
    if (FUN_003df390(entry->id) == 0)
        return 0;
    UnlockLevelRequirementView *requirement = FUN_001ad9b4(entry->id);
    if (requirement == NULL)
        return 0;
    u16 playerLevel = gameGetPlayerData()->unk62;
    if (requirement->level == 0)
        return 0;
    return requirement->level <= playerLevel;
}
}
