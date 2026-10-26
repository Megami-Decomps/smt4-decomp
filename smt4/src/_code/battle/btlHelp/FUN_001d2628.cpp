#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "code/Code001d_Smt4.h"

struct BtlHelpOwner {
    u32 parent; // 0x00
    u8 unk04[0x48];
    u32 helpJob; // 0x4c
};
struct BtlHelpList {
    void *head;
    void *tail;
    s32 count;
};
extern "C" {
s32 jobIsValid(u32 job);
u32 taskCreateDraw(const char *name, s32 priority, u32 workSize, u32 flags, void (*update)(), void (*destroy)(), void *owner, u32 parent);
void FUN_001b5498();
void btlHelpFreeNodeListAndStopJob();
extern BtlHelpList *DAT_00435d78;

// Start the help calculation job and initialize its entry list if it is not running.
void FUN_001d2628(BtlHelpOwner *owner)
{
    if (!jobIsValid(owner->helpJob)) {
        owner->helpJob = taskCreateDraw("btlHelp Calc", 2, 0, 0, FUN_001b5498, btlHelpFreeNodeListAndStopJob, owner, owner->parent);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlHelp.cpp", 773);
        DAT_00435d78 = (BtlHelpList *)asdMemAlloc(0x100, 0x100, 0, sizeof(BtlHelpList), 1);
        DAT_00435d78->head = NULL;
        DAT_00435d78->tail = NULL;
        DAT_00435d78->count = 0;
    }
}
}
