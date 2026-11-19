#include "gamedata/EncounterSelection.h"
#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "quest_center/QuestUnlock.h"
#include "shard/Shard0034.h"
#include "gamedata/GamePlayerData.h"

namespace {
struct UnlockSpriteEntryView { u8 unk00[0xC]; u16 id; };
}
extern "C" {
UnlockSpriteEntryView *dataTable02GetRecordWithAocPackage(s32 index);
s32 partyEntryFlagsBit3(u16 id);
s32 goalConditionsSatisfied(u16 id);
s32 flagValueRead(u32 index);

s32 textureEntryMeetsUnlockRequirements(u32 index)
{
    UnlockSpriteEntryView *entry = dataTable02GetRecordWithAocPackage(index);
    if (partyEntryFlagsBit3(entry->id) != 0)
        return 0;
    if (goalConditionsSatisfied(entry->id) != 0)
        return 0;
    if (entry->id == 0x8D) {
        if (flagValueRead(0x3A) >= 10) {
            if (index == 0x357 || index == 0x35D) return 0;
            if (index == 0x369 || index == 0x36A) return 0;
            if (index == 0x36F || index == 0x370) return 0;
            if (index == 0x375 || index == 0x377) return 0;
            if (index == 0x37B || index == 0x37C) return 0;
            if (index == 0x382 || index == 0x387) return 0;
            if (index == 0x388 || index == 0x3CF) return 0;
            if (index == 0x3D1 || index == 0x3E3 || index == 0x3E5) return 0;
        }
        if (flagValueRead(0x3C) >= 10) {
            if (index == 0x357 || index == 0x3B9) return 0;
            if (index == 0x3BB || index == 0x3BF) return 0;
            if (index == 0x3C9 || index == 0x3CA) return 0;
            if (index == 0x3D5 || index == 0x3E2) return 0;
            if (index == 0x3E4 || index == 0x3EC || index == 0x3F1) return 0;
        }
    }
    if (gameUnlockRecordRequirementsMet(entry->id) == 0)
        return 0;
    QuestRecordA *requirement = questDataGetRecord(entry->id);
    if (requirement == NULL)
        return 0;
    u16 playerLevel = gameGetPlayerData()->level;
    if (requirement->requiredLevel == 0)
        return 0;
    return requirement->requiredLevel <= playerLevel;
}
}
