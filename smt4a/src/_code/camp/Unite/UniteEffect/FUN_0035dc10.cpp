/* NON_MATCHING: retail retains removed debug-log setup/NOPs around allocation and resource creation. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct UniteEffectWork { u32 process; u8 unk004[0x9ec]; };
extern "C" {
extern UniteEffectWork *DAT_0057f2c4;
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 pool, u32 size, u32 flags);
void sysMemClear(void *memory, u32 size);
s32 FUN_003cf02c(u32 process);
s32 FUN_003d0a30(u32 process);
s32 FUN_003d26cc(u32 process);
u32 asdProcessCreateSimple(const char *name, s32 group, u32 flags, AsdProcFunc start, AsdProcUpdateFunc update, AsdProcFunc end, void *work);
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, AsdProcFunc start, AsdProcUpdateFunc update, AsdProcFunc end, void *work, u32 parent);
void btlTalkBustUpCreate();
void FUN_001695a0();
void loadSlotEnsureLoaded(u32 slot);

// Create the unite effect's calculation and paired draw processes once, then preload its resources.
void FUN_0035dc10()
{
    if (!DAT_0057f2c4)
        DAT_0057f2c4 = (UniteEffectWork *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x9f0, 1);
    UniteEffectWork *work = DAT_0057f2c4;
    sysMemClear(work, sizeof(*work));
    work->process = asdProcessCreateSimple("TMD CALC", 4, 0, NULL, FUN_003cf02c, NULL, NULL);
    taskCreateDraw("TMD DDRAW", 235, 0, NULL, FUN_003d0a30, NULL, NULL, work->process);
    taskCreateDraw("TMD DDRAW", 113, 0, NULL, FUN_003d26cc, NULL, NULL, work->process);
    btlTalkBustUpCreate();
    FUN_001695a0();
    loadSlotEnsureLoaded(37);
}
}
