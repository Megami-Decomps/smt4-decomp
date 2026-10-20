/* NON_MATCHING: retail keeps two registers for the quest pointer (a copy in r5 for the release steps, `movs r5, r7`, the original in r7 for jobStop and the free) and the g_uiQuest address in r8; the build coalesces them */
/* NON_MATCHING: retail keeps two registers for the quest pointer (a copy in r5 for the release steps, `movs r5, r7`, the original in r7 for jobStop and the free); the build coalesces them */
#include "common.h"

extern "C" {

int jobStop(unsigned int, int);
int ifTouchRegionRemove(void);
int asdMemFree(...);
int asdTMTexTableReleaseNode(int, int);
int scrScriptProcessDestroy(unsigned int);
int dataTableFree(int);
int uiFadeSetVisible(int);
int asdTMTexTableFreeEntry(int);

typedef struct TouchRegions {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u16 count;
} TouchRegions;

typedef struct UiQuest {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 unk004[0x8F0];
    /* 0x8F4 */ u32 buffer8f4;
    /* 0x8F8 */ u32 buffer8f8;
    /* 0x8FC */ u32 process8fc;
    /* 0x900 */ u32 buffer900;
    /* 0x904 */ u32 buffer904;
    /* 0x908 */ u32 process908;
    /* 0x90C */ u8 unk90c[0x3F4];
    /* 0xD00 */ TouchRegions touch;
} UiQuest;

extern UiQuest *g_uiQuest;

static __inline void uiQuestRelease(UiQuest *quest)
{
    s32 i;

    for (i = 0; i < quest->touch.count; i++) {
        ifTouchRegionRemove();
    }
    scrScriptProcessDestroy(quest->process8fc);
    asdMemFree(quest->buffer8f8);
    asdMemFree(quest->buffer8f4);
    if (quest->buffer900 != 0) {
        scrScriptProcessDestroy(quest->process908);
        asdMemFree(quest->buffer900);
        asdMemFree(quest->buffer904);
    }
    asdTMTexTableReleaseNode(0x1e, 0);
    asdTMTexTableFreeEntry(0x1e);
    dataTableFree(0x34);
    uiFadeSetVisible(1);
}

void FUN_0034aae4(void)
{
    UiQuest *quest = g_uiQuest;

    if (quest != NULL) {
        uiQuestRelease(quest);
        jobStop(quest->job, 0);
        asdMemFree(quest);
        g_uiQuest = NULL;
    }
}

} /* extern "C" */
