#include "camp/Unite/UniteEffectState.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
void uniteEffectDraw(void);
void FUN_0032ae80(void);
u32 taskCreateDraw(const char *name, s32 priority, u32 argument, u32 owner,
                   void (*draw)(void), void (*release)(void), u32 flags, u32 parent);
void btlTalkBustUpCreate(void);
void messageSetConfirmDisplayMode(void);
void fileSlotLoad(u32 slot);

void uniteStartEffectProcesses(void)
{
    if (!g_screenStateWork) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\Unite\\UniteEffect.cpp", 1263);
        g_screenStateWork = static_cast<UniteEffectWork *>(
            asdMemAlloc(0x100, 0x100, 0, sizeof(UniteEffectWork), 1));
    }
    UniteEffectWork *work = g_screenStateWork;
    memClear(work, sizeof(*work));
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TMD CALC"), 2, 0, 0, uniteEffectUpdate, NULL, 0);
    taskCreateDraw("TMD DDRAW", 0xE7, 0, 0, uniteEffectDraw, NULL, 0, work->process);
    taskCreateDraw("TMD DDRAW", 0x6F, 0, 0, FUN_0032ae80, NULL, 0, work->process);
    btlTalkBustUpCreate();
    messageSetConfirmDisplayMode();
    fileSlotLoad(0x25);
}
}
