#include "common.h"

struct QuestEntry0035d17c {
    /* 0x000 */ u8 unk000[0xcec];
    /* 0xcec */ s32 value;
};

extern "C" {

QuestEntry0035d17c *QuestCenter_GetActiveEntry(void);
s32 scrSetResult(s32 value);

/* Script command: returns the active quest center entry's value at 0xcec. */
s32 FUN_0035d17c(void)
{
    scrSetResult(QuestCenter_GetActiveEntry()->value);
    return 1;
}

} /* extern "C" */
