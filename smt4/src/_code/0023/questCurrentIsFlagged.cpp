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

/* True when the current quest (while the state is 2) has its flag bit 0 set. */
u32 questCurrentIsFlagged(void)
{
    u32 result = 0;

    switch (gameGetOptionProgressStatus()) {
    case 0:
    case 1:
        break;
    case 2:
        if (questRecordFindById(gameGetSupportUnitData()->questId)->flags & 1) {
            result = 1;
        }
        break;
    }
    return result;
}

} /* extern "C" */
