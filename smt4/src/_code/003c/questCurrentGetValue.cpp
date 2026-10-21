#include "common.h"

extern "C" {

typedef struct QuestRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 flags;
    /* 0x06 */ u8 unk06[4];
    /* 0x0A */ u16 value;
} QuestRecord;

typedef struct Options {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 questId;
} Options;

extern QuestRecord *questRecordFindById(u16 id);
extern Options *gameGetSupportUnitData(void);
extern u32 gameGetOptionProgressStatus(void);

/* Returns the value of the current quest while the state is 2; 0 otherwise. */
u16 questCurrentGetValue(void)
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
