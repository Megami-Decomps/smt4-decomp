#include "common.h"

extern "C" {

typedef struct Options {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 questId;
} Options;

typedef struct QuestRecord {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 done;
} QuestRecord;

extern QuestRecord *questRecordFindById(u16 id);
extern Options *gameGetSupportUnitData(void);
extern s32 gameGetOptionProgressStatus(void);

/* Returns 1 when gameGetOptionProgressStatus reports mode 1, or mode 2 and the option's quest record is not done. */
u32 FUN_00245c78(void)
{
    u32 result = 0;

    switch (gameGetOptionProgressStatus()) {
    case 0:
        break;
    case 1:
        result = 1;
        break;
    case 2:
        if (questRecordFindById(gameGetSupportUnitData()->questId)->done == 0) {
            result = 1;
        }
        break;
    }
    return result;
}

} /* extern "C" */
