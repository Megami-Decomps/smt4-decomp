#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/DataTableSections.h"
#include "ui/UiControl.h"
#include "script/scrScriptProcess.h"

extern "C" {

int jobStop(unsigned int, int);
void asdMemFree(void *allocation);
int asdTMTexTableReleaseNode(int, int);
struct ScriptProcess;
int uiFadeSetVisible(int);

typedef struct TouchRegions {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u16 count;
} TouchRegions;

typedef struct UiQuest {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 unk004[0x8F0];
    /* 0x8F4 */ void *buffer8f4;
    /* 0x8F8 */ void *buffer8f8;
    /* 0x8FC */ ScriptProcess *process8fc;
    /* 0x900 */ void *buffer900;
    /* 0x904 */ void *buffer904;
    /* 0x908 */ ScriptProcess *process908;
    /* 0x90C */ u8 unk90c[0x3F4];
    /* 0xD00 */ TouchRegions touch;
} UiQuest;

extern UiQuest *g_uiQuest;

/* Removes the quest screen's touch regions and frees its scripts, buffers, textures and table. */
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

/* Closes the quest screen: releases its resources, stops its job and frees it. */
void uiQuestClose(void)
{
    UiQuest *quest = g_uiQuest;

    if (quest != NULL) {
        uiQuestRelease(g_uiQuest);
        jobStop(quest->job, 0);
        asdMemFree(quest);
        g_uiQuest = NULL;
    }
}

} /* extern "C" */
