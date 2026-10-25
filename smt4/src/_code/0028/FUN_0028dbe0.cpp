#include "common.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

typedef struct Selector {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 index;
    /* 0x20 */ u8 unk20[3];
    /* 0x23 */ u8 disabled;
    /* 0x24 */ u8 unk24[0x10];
    /* 0x34 */ s32 source;
} Selector;

typedef struct UnitRecord {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u16 mask;
} UnitRecord;

typedef struct PlayerData {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ u16 mask;
} PlayerData;

extern PlayerData *gameGetPlayerData(void);
extern u32 categoryGetColor(s16 value);

/* Returns categoryGetColor for the selector's index-th set bit (1..10) of the player's or unit's mask; -1 when it is disabled or there is none. */
s32 FUN_0028dbe0(Selector *selector)
{
    s32 result = -1;

    if (selector->disabled == 0) {
        u16 mask;
        s32 bit;
        s32 count;

        if (selector->source < 0) {
            mask = gameGetPlayerData()->mask;
        } else {
            mask = static_cast<UnitRecord *>(gameGetUnitRecord(selector->source))->mask;
        }
        count = 0;
        for (bit = 1; bit < 11; bit++) {
            if ((mask & (1 << bit)) != 0) {
                if (selector->index == count) {
                    result = categoryGetColor(bit);
                    break;
                }
                count++;
            }
        }
    }
    return result;
}

} /* extern "C" */
