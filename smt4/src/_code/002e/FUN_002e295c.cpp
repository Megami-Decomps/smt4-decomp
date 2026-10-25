#include "common.h"
#include "script/ScriptArgs.h"

struct QuestEntry {
    /* 0x00 */ u8 unk00[0xfbc];
    /* 0xfbc */ s32 value;
};

extern "C" {

QuestEntry *QuestCenter_GetActiveEntry(void);

/* Script command: reports the active quest entry's word at 0xfbc. */
u32 FUN_002e295c(void)
{
    scrSetResult(QuestCenter_GetActiveEntry()->value);
    return 1;
}

} /* extern "C" */
