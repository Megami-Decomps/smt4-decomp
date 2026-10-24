#include "battle/btlHelp.h"
#include "AsdSDK/AsdDebug.h"

// This view includes the parent handle used by task creation.
struct BtlHelpOwnerA {
    u32 parent; // 0x00
    u8 unk04[0x6c];
    u32 helpJob; // 0x70
};
extern "C" {
s32 jobIsValid(u32 job);
u32 taskCreateDraw(const char *name, s32 priority, u32 workSize, u32 flags, void (*update)(), void (*destroy)(), void *owner, u32 parent);
void FUN_0024bcac();
void btlHelpRelease();
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 track);
extern BtlHelpListA *g_btlHelp;

// Start the help calculation job and initialize its entry list if it is not running.
void FUN_0027249c(BtlHelpOwnerA *owner)
{
    if (!jobIsValid(owner->helpJob)) {
        owner->helpJob = taskCreateDraw("btlHelp Calc", 4, 0, 0, FUN_0024bcac, btlHelpRelease, owner, owner->parent);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlHelp.cpp", 1195);
        g_btlHelp = (BtlHelpListA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BtlHelpListA), 1);
        g_btlHelp->head = NULL;
        g_btlHelp->tail = NULL;
        g_btlHelp->count = 0;
    }
}
}
