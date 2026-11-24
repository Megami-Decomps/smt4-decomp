#ifndef GFX_SECONDARY_RESOURCE_WORK_H
#define GFX_SECONDARY_RESOURCE_WORK_H
#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "ui/UiSpriteState.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/Text/AsdTextA.h"

struct PartnerTopicRecord;

/* Shared work area of Apocalypse's Partner Topic and highway-info windows. */
struct SecondaryResourceWork {
    SecondaryResourceWork()
    {
        topicTable = NULL;
        unk024 = 0;
        resourceData = NULL;
        scriptData = NULL;
        textureData = NULL;
        currentTopic = NULL;
        auxiliary = NULL;
    }
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* 0x000 */ u32 job;
    /* 0x004 */ u32 highwayTopic;
    /* 0x008 */ u8 unk008[8];
    /* 0x010 */ void *auxiliary;
    /* 0x014 */ u8 unk014[0xC];
    /* 0x020 */ PartnerTopicRecord *topicTable;
    /* 0x024 */ u32 unk024;
    /* 0x028 */ void *resourceData;
    /* 0x02C */ void *scriptData;
    /* 0x030 */ void *textureData;
    /* 0x034 */ ScriptProcess *scriptProcess;
    /* 0x038 */ u8 unk038[0xC];
    /* 0x044 */ s32 selected;
    /* 0x048 */ s32 visibleRows;
    /* 0x04C */ u8 unk04C[4];
    /* 0x050 */ u32 selection;
    /* 0x054 */ u32 frame;
    /* 0x058 */ u8 unk058[0xF0];
    /* 0x148 */ u16 touchRegionCount;
    /* 0x14A */ u8 unk14A[2];
    /* 0x14C */ UiResourceParameters animationParameters;
    /* 0x16C */ UiSpriteState sprites[8];
    /* 0x5CC */ u8 unk5CC[8];
    /* 0x5D4 */ u8 highwayActive;
    /* 0x5D5 */ u8 unk5D5[3];
    /* 0x5D8 */ AsdText *text;
    /* 0x5DC */ u32 value;
    /* 0x5E0 */ PartnerTopicRecord *currentTopic;
    /* 0x5E4 */ u8 active;
    /* 0x5E5 */ u8 pending;
    /* 0x5E6 */ u16 filteredIds[100];
    /* 0x6AE */ u8 unk6AE[2];
    /* 0x6B0 */ u32 filteredCount;
    /* 0x6B4 */ s32 slots[5];
    /* 0x6C8 */ s32 handles[4];
};
typedef char SecondaryResourceWorkOffsets[
    offsetof(SecondaryResourceWork, job) == 0 &&
    offsetof(SecondaryResourceWork, auxiliary) == 0x10 &&
    offsetof(SecondaryResourceWork, resourceData) == 0x28 &&
    offsetof(SecondaryResourceWork, scriptData) == 0x2C &&
    offsetof(SecondaryResourceWork, textureData) == 0x30 &&
    offsetof(SecondaryResourceWork, scriptProcess) == 0x34 &&
    offsetof(SecondaryResourceWork, touchRegionCount) == 0x148 &&
    offsetof(SecondaryResourceWork, animationParameters) == 0x14C &&
    offsetof(SecondaryResourceWork, sprites) == 0x16C &&
    offsetof(SecondaryResourceWork, highwayActive) == 0x5D4 &&
    offsetof(SecondaryResourceWork, text) == 0x5D8 &&
    offsetof(SecondaryResourceWork, filteredIds) == 0x5E6 &&
    offsetof(SecondaryResourceWork, filteredCount) == 0x6B0 &&
    offsetof(SecondaryResourceWork, slots) == 0x6B4 &&
    offsetof(SecondaryResourceWork, handles) == 0x6C8 &&
    sizeof(SecondaryResourceWork) == 0x6D8 ? 1 : -1];

extern "C" {
void topicPanelInitAnimations(void *work);
void partnerTopicLoadResources(SecondaryResourceWork *work);
} /* extern "C" */

/* Creates and configures the text object of either topic window. */
static __inline void secondaryResourceCreateText(SecondaryResourceWork *work)
{
    work->text = spriteHandleCreate(0);
    uiObjectSetColorRgb((u32)work->text, 0xFFFFFFFF);
    positionStateSet(work->text, 0, 0x646464FF, 0.0f);
}
#endif
