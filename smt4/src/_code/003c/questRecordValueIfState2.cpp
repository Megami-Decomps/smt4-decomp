#include "common.h"

extern "C" {

typedef struct Options003c88b8 {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 questId;
} Options003c88b8;

typedef struct QuestRecord003c88b8 {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0e */ u16 value;
} QuestRecord003c88b8;

u32 FUN_002b6b38(void);
Options003c88b8 *gameGetOptions(void);
QuestRecord003c88b8 *questRecordFindById(u32 id);

/* The halfword at 0xE of the option-selected quest's record when the state is 2; 0 otherwise. */
u16 questRecordValueIfState2(void)
{
    u16 value = 0;

    switch (FUN_002b6b38()) {
    case 0:
    case 1:
        break;
    case 2:
        value = questRecordFindById(gameGetOptions()->questId)->value;
        break;
    }
    return value;
}

} /* extern "C" */
