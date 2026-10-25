/* NON_MATCHING: hunter allocation construction and process registration scheduling differ from retail. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "ui/HunterDatabaseWork.h"

extern "C" void *asdOperatorNew(u32 bytes);

/* The allocation includes a tail not needed by the resource-loader view. */
struct HunterDatabaseAllocation : HunterDatabaseWork {
    u8 tail[0x34];

    HunterDatabaseAllocation()
    {
        messages = 0;
        helpMessages = 0;
        *reinterpret_cast<u32 *>(unk010) = 0;
    }
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
};
typedef char HunterDatabaseAllocationSize[sizeof(HunterDatabaseAllocation) == 0x6B8 ? 1 : -1];

extern "C" {
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
s32 FUN_0037d4b0(u32 process);
s32 FUN_0039b960(u32 process);
s32 FUN_0039b93c(u32 process);
void hunterDatabaseLoadResources(HunterDatabaseWork *work);
extern HunterDatabaseWork *DAT_0057f244;

// Start the hunter-data process and its upper-left, upper-right, and lower draw jobs.
void FUN_0038a694(void)
{
    DAT_0057f244 = new HunterDatabaseAllocation;
    HunterDatabaseWork *work = DAT_0057f244;
    work->lifecycle.job = asdProcessCreateSimple((const s8 *)"HUNTER_DATA_BASE PROC", 4, 0, 0, FUN_0037d4b0, NULL, 0);
    taskCreateDraw((const s8 *)"HUNTER_DATA_BASE UL", 126, 0, 0, FUN_0039b960, NULL, 0, (void *)work->lifecycle.job);
    taskCreateDraw((const s8 *)"HUNTER_DATA_BASE UR", 218, 0, 0, FUN_0039b960, NULL, 0, (void *)work->lifecycle.job);
    taskCreateDraw((const s8 *)"HUNTER_DATA_BASE DD", 235, 0, 0, FUN_0039b93c, NULL, 0, (void *)work->lifecycle.job);
    hunterDatabaseLoadResources(work);
}
}
