#include "common.h"

extern "C" {

typedef struct QuestRecord {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 value;
} QuestRecord;

typedef struct GameOptions {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 questId;
} GameOptions;

u32 gameGetOptionProgressStatus(void);
GameOptions *gameGetSupportUnitData(void);
QuestRecord *questRecordFindById(u16 id);

/* Returns the record value of the option-selected quest when gameGetOptionProgressStatus returns 2, otherwise 0. */
u16 FUN_003c8880(void)
{
    u16 result = 0;

    switch (gameGetOptionProgressStatus()) {
    case 0:
    case 1:
        break;
    case 2:
        result = questRecordFindById(gameGetSupportUnitData()->questId)->value;
        break;
    }
    return result;
}

} /* extern "C" */
