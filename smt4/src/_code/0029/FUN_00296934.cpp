/* NON_MATCHING: cleanup coalesces the original owner and resource-view registers. */
#include "shard/W4_W4Match2_UiQuest.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

// The touch-region count lies beyond the shared quest-menu prefix.
struct QuestCleanupWorkView {
    u32 job;
    u8 unk004[0x5a8];
    void *bufferB;
    void *bufferA;
    void *script;
    void *detailBuffer;
    void *detailAuxiliary;
    void *detailScript;
    u8 unk5c4[0x434];
    u16 touchCount;
};
typedef char QuestCleanupWorkOffsetsCheck[offsetof(QuestCleanupWorkView, bufferB) == 0x5ac &&
    offsetof(QuestCleanupWorkView, script) == 0x5b4 &&
    offsetof(QuestCleanupWorkView, detailScript) == 0x5c0 &&
    offsetof(QuestCleanupWorkView, touchCount) == 0x9f8 ? 1 : -1];

extern "C" {
void ifTouchRegionRemove();
void scrScriptProcessDestroy(void *process);
void asdMemFree(void *allocation);
void asdTMTexTableReleaseNode(u32 index, u32 kind);
void fileSlotFree(u32 index);
void uiFadeSetVisible(u32 visible);
void jobStop(u32 job, u32 flags);

void FUN_00296934()
{
    QuestCleanupWorkView *work = (QuestCleanupWorkView *)g_uiQuest;
    if (work != 0) {
        for (s32 index = 0; index < work->touchCount; ++index) {
            ifTouchRegionRemove();
        }
        scrScriptProcessDestroy(work->script);
        asdMemFree(work->bufferA);
        asdMemFree(work->bufferB);
        if (work->detailBuffer != 0) {
            scrScriptProcessDestroy(work->detailScript);
            asdMemFree(work->detailBuffer);
            asdMemFree(work->detailAuxiliary);
        }
        asdTMTexTableReleaseNode(0x29, 0);
        asdTMTexTableFreeEntry(0x29);
        fileSlotFree(0x34);
        uiFadeSetVisible(1);
        jobStop(work->job, 0);
        asdMemFree(work);
        g_uiQuest = 0;
    }
}
}
