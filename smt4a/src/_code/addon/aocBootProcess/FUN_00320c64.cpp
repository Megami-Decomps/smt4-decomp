#include "addon/aocBootProcess.h"
#include "addon/aocMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern AocBootGlobals g_aocBoot;
extern AocMain *g_aocMain;
void *asdMemoryAllocTracked(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
void FUN_0015f258(void *dialog);
void FUN_0024b280(void);
void aocBootRelease(void);
u32 asdProcessCreateSimple(const char *name, s32 priority, u32 argument, u32 owner,
                          void (*update)(void), void (*release)(void), u32 flags);

/* Allocate the boot dialog if necessary and start its calculation process. */
u32 FUN_00320c64(void)
{
    if (!g_aocBoot.boot) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\aocBootProcess.cpp", 286);
        g_aocBoot.boot = static_cast<AocBoot *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AocBoot), 1));
    }
    AocBoot *boot = g_aocBoot.boot;
    g_aocBoot.finished = 0;
    boot->state = 0;
    boot->dialogOpen = 0;
    FUN_0015f258(boot->dialog);
    boot->frames = 0;
    u32 job = asdProcessCreateSimple("aocBoot CALC", 4, 0, 0, FUN_0024b280, aocBootRelease, 0);
    boot = g_aocBoot.boot;
    boot->job = job;
    g_aocMain->flags &= ~0x70;
    return boot->job;
}
}
