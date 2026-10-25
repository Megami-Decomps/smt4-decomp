#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "addon/aocBootProcess.h"
#include "addon/aocMain.h"

#define AOC_MAIN_FLAGS_BOOT_MASK 0x70 /* AocMain.flags bits the boot process starts from clear */

extern "C" {

extern AocBootGlobals g_aocBoot;
extern AocMain *g_aocMain;

void *asdMemAlloc(s32 heap, s32 align, s32 a, s32 size, s32 flag);
void FUN_002ba78c(void *dialog);
s32 aocBootUpdate(u32 handle);
void aocBootDestroy(u32 handle);

/* Creates (or reuses) the boot block, resets it and starts the boot job; returns the job. */
u32 aocBootCreate(void)
{
    AocBoot *boot;

    if (g_aocBoot.boot == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\aocBootProcess.cpp", 286);
        g_aocBoot.boot = (AocBoot *)asdMemAlloc(0x100, 0x100, 0, sizeof(AocBoot), 1);
    }
    boot = g_aocBoot.boot;
    g_aocBoot.finished = 0;
    boot->state = 0;
    boot->dialogOpen = 0;
    FUN_002ba78c(boot->dialog);
    boot->frames = 0;
    g_aocBoot.boot->job = asdProcessCreateSimple((const s8 *)"aocBoot CALC", 2, 0, 0, aocBootUpdate, aocBootDestroy, 0);
    g_aocMain->flags &= ~AOC_MAIN_FLAGS_BOOT_MASK;
    return g_aocBoot.boot->job;
}

} /* extern "C" */
