#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {

typedef struct PlayerLevelData {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 level;
} PlayerLevelData;

typedef struct UnlockRecord {
    /* 0x000 */ u8 unk000[0x120];
    /* 0x120 */ s16 requiredLevel; // 0: never unlocked by level
} UnlockRecord;

PlayerLevelData *gameGetPlayerData(void);
s32 gameFlagEntryGetBit(u16 id, u32 bit);
s32 FUN_003df390(u16 id);
UnlockRecord *FUN_001ad9b4(u16 id);
u32 itemDataGetValue(u16 id);

void FUN_00417b70(u16 id);

/* Unlocks every entry 100..399 whose required level the player has reached. */
s32 gameUnlockEntriesByLevel(void)
{
    u16 level = gameGetPlayerData()->level;
    s32 id;

    for (id = 100; id < 400; id++) {
        if (gameFlagEntryGetBit(id, 0) == 0 && FUN_003df390(id) != 0) {
            UnlockRecord *record = FUN_001ad9b4(id);
            if (record != NULL && record->requiredLevel != 0 && record->requiredLevel <= level) {
                u32 flag = itemDataGetValue(id);
                if (flag != 0) {
                    gameFlagSetValue(flag, 1, 1);
                }
                FUN_00417b70(id);
            }
        }
    }
    return 1;
}

} /* extern "C" */
