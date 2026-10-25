/* NON_MATCHING: private opening-tail view adds a zero-offset base copy; global/zero and draw-work registers and scheduling differ. 5TE candidate. */
#include "quest_center/qcMain.h"
extern "C" QcGlobalsA g_qcMain;
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"



extern "C" {
void *jyoucyuGetTableEntry(s32 index);
void statsSetAdditionalFlag(s32 entryId, s32 enabled);
s32 FUN_00236110(u32 handle);
void effectQcFinish(u32 handle);
s32 qcMainEndPass(u32 handle);
s32 qcMainRunEntryIfLoaded(u32 handle);
s32 FUN_002bd3a4(u32 handle);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc end, u32 work, void *owner);

void questCenterInitialize(const s32 *arguments, u32 argumentBytes)
{
    jyoucyuGetTableEntry(0);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\quest_center\\qcMain.cpp", 0xa0);
    QcWork *work = static_cast<QcWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(QcWork), 1));
    g_qcMain.work = work;
    work->done = 0;
    work->entry = NULL;
    work->mode = 0;
    if (arguments == NULL) {
        g_qcMain.option0 = 0;
        g_qcMain.option1 = 0;
    } else {
        if (argumentBytes == 3 * sizeof(s32)) {
            if (arguments[0] != -1) {
                g_qcMain.entryId = arguments[0];
            }
            g_qcMain.option0 = arguments[1];
            g_qcMain.option1 = arguments[2];
        } else if (argumentBytes == sizeof(s32)) {
            g_qcMain.entryId = arguments[0];
            g_qcMain.option0 = 0;
            g_qcMain.option1 = 0;
        }
        statsSetAdditionalFlag(g_qcMain.entryId, 1);
    }
    work->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("QuestCenterMainProc"), 4, 0, 0, FUN_00236110, effectQcFinish, reinterpret_cast<u32>(g_qcMain.work));
    work->draws.upper = taskCreateDraw(reinterpret_cast<const s8 *>("QuestCenterDrawUp L"),
        0x71, 1, 0, qcMainEndPass, NULL, reinterpret_cast<u32>(g_qcMain.work), reinterpret_cast<void *>(work->task));
    taskCreateDraw(reinterpret_cast<const s8 *>("QuestCenterDrawUp L"),
        0x81, 1, 0, qcMainRunEntryIfLoaded, NULL, reinterpret_cast<u32>(g_qcMain.work), reinterpret_cast<void *>(work->task));
    taskCreateDraw(reinterpret_cast<const s8 *>("QuestCenterDrawUp L"),
        0xdd, 1, 0, qcMainRunEntryIfLoaded, NULL, reinterpret_cast<u32>(g_qcMain.work), reinterpret_cast<void *>(work->task));
    work->draws.lower = taskCreateDraw(reinterpret_cast<const s8 *>("QuestCenterDrawDown"),
        0xeb, 1, 0, FUN_002bd3a4, NULL, reinterpret_cast<u32>(g_qcMain.work), reinterpret_cast<void *>(work->task));
}
}
