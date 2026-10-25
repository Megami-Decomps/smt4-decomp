/* NON_MATCHING: first draw-task callback and work-pointer argument registers are swapped. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

namespace {
struct QuestCenterRegistrationWork {
    u32 process, backgroundDraw, reserved08, foregroundDraw;
    u32 reserved10[2];
    u8 active, pending;
    u8 padding1A[2];
    u32 value;
};
struct QuestCenterRegistrationGlobals {
    u32 reserved;
    QuestCenterRegistrationWork *work;
    s32 id, argument, initial;
};
}
extern "C" {
extern QuestCenterRegistrationGlobals g_qcMain;
void *jyoucyuGetTableEntry(u32 index);
void QcMain_SetFlag(s32 id, s32 value);

s32 QuestCenterMainProcUpdate(u32 handle);
void effectQcFinish(u32 handle);
s32 qcMainEndBackgroundPass(u32 handle);
s32 qcMainJobUpdateEntry(u32 handle);
s32 FUN_001fe19c(u32 handle);
u32 asdProcessCreateSimple(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32);
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32, u32);

void QcMain_Register(const s32 *parameters, s32 mode)
{
    jyoucyuGetTableEntry(0);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\quest_center\\qcMain.cpp", 158);
    QuestCenterRegistrationWork *work = static_cast<QuestCenterRegistrationWork *>(
        asdMemAlloc(0x100, 0x100, 0, sizeof(QuestCenterRegistrationWork), 1));
    g_qcMain.work = work;
    work->active = 0;
    work->value = 0;
    work->pending = 0;
    if (parameters != NULL) {
        if (mode == 12) {
            if (parameters[0] != -1)
                g_qcMain.id = parameters[0];
            g_qcMain.argument = parameters[1];
            g_qcMain.initial = parameters[2];
        } else if (mode == 4) {
            g_qcMain.id = parameters[0];
            g_qcMain.argument = 0;
            g_qcMain.initial = 0;
        }
        QcMain_SetFlag(g_qcMain.id, 1);
    } else {
        g_qcMain.argument = 0;
        g_qcMain.initial = 1;
        gameFlagSetValue(0x50, 1, 1);
        gameFlagSetValue(0x20, 1, 1);
        gameFlagSetValue(0x5F, 1, 1);
        gameFlagSetValue(0x143, 1, 1);
        gameFlagSetValue(0x157, 1, 1);
    }
    work->process = asdProcessCreateSimple("QuestCenterMainProc", 2, 0, 0,
        QuestCenterMainProcUpdate, effectQcFinish, reinterpret_cast<u32>(g_qcMain.work));
    work->backgroundDraw = taskCreateDraw("QuestCenterDrawUp L", 0x6F, 1, 0,
        qcMainEndBackgroundPass, NULL, reinterpret_cast<u32>(g_qcMain.work), work->process);
    taskCreateDraw("QuestCenterDrawUp L", 0x7D, 1, 0,
        qcMainJobUpdateEntry, NULL, reinterpret_cast<u32>(g_qcMain.work), work->process);
    taskCreateDraw("QuestCenterDrawUp L", 0xDB, 1, 0,
        qcMainJobUpdateEntry, NULL, reinterpret_cast<u32>(g_qcMain.work), work->process);
    work->foregroundDraw = taskCreateDraw("QuestCenterDrawDown", 0xE7, 1, 0,
        FUN_001fe19c, NULL, reinterpret_cast<u32>(g_qcMain.work), work->process);
}
}
