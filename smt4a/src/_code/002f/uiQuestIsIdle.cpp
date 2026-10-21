#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
} Record;
extern Record *g_uiQuest;

/* Returns whether the state of the record at 0x57F28C is 0. */
u8 uiQuestIsIdle(void)
{
    return g_uiQuest->state == 0;
}

} /* extern "C" */
