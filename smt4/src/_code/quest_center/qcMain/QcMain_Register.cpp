/* NON_MATCHING: first draw-task callback and work-pointer argument registers are swapped. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "quest_center/qcMain.h"

extern "C" {
extern QcGlobals g_qcMain;
void QcMain_SetFlag(s32 id, s32 value);

s32 QuestCenterMainProcUpdate(u32 handle);
void effectQcFinish(u32 handle);
s32 qcMainEndBackgroundPass(u32 handle);
s32 qcMainJobUpdateEntry(u32 handle);
s32 FUN_001fe19c(u32 handle);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, u32);

/* Creates the quest center: its work block (the area and options from the caller's parameters), the main process
 * and its draw tasks. */
void QcMain_Register(const s32 *parameters, s32 mode)
{
    jyoucyuGetTableEntry(0);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\quest_center\\qcMain.cpp", 158);
    QcWork *work = (QcWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(QcWork), 1);
    g_qcMain.work = work;
    work->done = 0;
    work->entry = NULL;
    work->mode = 0;
    if (parameters != NULL) {
        if (mode == 12) {
            if (parameters[0] != -1)
                g_qcMain.area = parameters[0];
            g_qcMain.argument = parameters[1];
            g_qcMain.resident = parameters[2];
        } else if (mode == 4) {
            g_qcMain.area = parameters[0];
            g_qcMain.argument = 0;
            g_qcMain.resident = 0;
        }
        QcMain_SetFlag(g_qcMain.area, 1);
    } else {
        g_qcMain.argument = 0;
        g_qcMain.resident = 1;
        gameFlagSetValue(0x50, 1, 1);
        gameFlagSetValue(0x20, 1, 1);
        gameFlagSetValue(0x5F, 1, 1);
        gameFlagSetValue(0x143, 1, 1);
        gameFlagSetValue(0x157, 1, 1);
    }
    work->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("QuestCenterMainProc"), 2, 0, 0, QuestCenterMainProcUpdate, effectQcFinish, reinterpret_cast<u32>(g_qcMain.work));
    work->draws.upper = taskCreateDraw("QuestCenterDrawUp L", 0x6F, 1, 0,
        qcMainEndBackgroundPass, NULL, reinterpret_cast<u32>(g_qcMain.work), work->task);
    taskCreateDraw("QuestCenterDrawUp L", 0x7D, 1, 0,
        qcMainJobUpdateEntry, NULL, reinterpret_cast<u32>(g_qcMain.work), work->task);
    taskCreateDraw("QuestCenterDrawUp L", 0xDB, 1, 0,
        qcMainJobUpdateEntry, NULL, reinterpret_cast<u32>(g_qcMain.work), work->task);
    work->draws.lower = taskCreateDraw("QuestCenterDrawDown", 0xE7, 1, 0,
        FUN_001fe19c, NULL, reinterpret_cast<u32>(g_qcMain.work), work->task);
}
}
