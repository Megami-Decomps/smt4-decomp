/* NON_MATCHING: private opening-tail view adds a zero-offset base copy; global/zero and draw-work registers and scheduling differ. 5TE candidate. */
#include "shard/W5_W5Match5_QuestCenter.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct QuestCenterOpenState {
    /* 0x00 */ QuestCenterState prefix;
    /* 0x08 */ s32 entryId;
    /* 0x0c */ s32 option0;
    /* 0x10 */ s32 option1;
};

extern "C" {
void *jyoucyuGetTableEntry(s32 index);
void *asdMemoryAllocTracked(s32 heap, s32 alignment, s32 flags, u32 bytes, s32 clear);
void FUN_0040a5a0(s32 entryId, s32 enabled);
s32 FUN_00236110(u32 handle);
void effectQcFinish(u32 handle);
s32 qcMainEndPass(u32 handle);
s32 FUN_0027db84(u32 handle);
s32 FUN_002bd3a4(u32 handle);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc end, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);

void questCenterInitialize(const s32 *arguments, u32 argumentBytes)
{
    jyoucyuGetTableEntry(0);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\quest_center\\qcMain.cpp", 0xa0);
    QuestWork *work = static_cast<QuestWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(QuestWork), 1));
    g_qcMain.work = work;
    work->closing = 0;
    work->entry = NULL;
    work->unk19[0] = 0;
    QuestCenterOpenState &opening = *reinterpret_cast<QuestCenterOpenState *>(&g_qcMain);
    if (arguments == NULL) {
        opening.option0 = 0;
        opening.option1 = 0;
    } else {
        if (argumentBytes == 3 * sizeof(s32)) {
            if (arguments[0] != -1) {
                opening.entryId = arguments[0];
            }
            opening.option0 = arguments[1];
            opening.option1 = arguments[2];
        } else if (argumentBytes == sizeof(s32)) {
            opening.entryId = arguments[0];
            opening.option0 = 0;
            opening.option1 = 0;
        }
        FUN_0040a5a0(opening.entryId, 1);
    }
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("QuestCenterMainProc"),
        4, 0, 0, FUN_00236110, effectQcFinish, reinterpret_cast<u32>(g_qcMain.work));
    work->draws.upper = taskCreateDraw(reinterpret_cast<const s8 *>("QuestCenterDrawUp L"),
        0x71, 1, 0, qcMainEndPass, NULL, reinterpret_cast<u32>(g_qcMain.work), reinterpret_cast<void *>(work->job));
    taskCreateDraw(reinterpret_cast<const s8 *>("QuestCenterDrawUp L"),
        0x81, 1, 0, FUN_0027db84, NULL, reinterpret_cast<u32>(g_qcMain.work), reinterpret_cast<void *>(work->job));
    taskCreateDraw(reinterpret_cast<const s8 *>("QuestCenterDrawUp L"),
        0xdd, 1, 0, FUN_0027db84, NULL, reinterpret_cast<u32>(g_qcMain.work), reinterpret_cast<void *>(work->job));
    work->draws.lower = taskCreateDraw(reinterpret_cast<const s8 *>("QuestCenterDrawDown"),
        0xeb, 1, 0, FUN_002bd3a4, NULL, reinterpret_cast<u32>(g_qcMain.work), reinterpret_cast<void *>(work->job));
}
}
