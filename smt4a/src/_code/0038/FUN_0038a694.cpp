/* NON_MATCHING: nullable allocation initialization branches instead of retail conditional stores and uses a different work register. */
/* Starts the hunter-data process and its upper-left, upper-right, and lower draw jobs. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct HunterDataWork {
    u32 process;
    u32 unk04;
    void *buffers[3];
    u8 unk14[0x6A4];
};
extern "C" {
void *asdOperatorNew(u32 bytes);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
s32 FUN_0037d4b0(u32 process);
s32 FUN_0039b960(u32 process);
s32 FUN_0039b93c(u32 process);
void FUN_00402e34(HunterDataWork *work);
extern HunterDataWork *DAT_0057f244;

void FUN_0038a694(void)
{
    HunterDataWork *work = (HunterDataWork *)asdOperatorNew(sizeof(HunterDataWork));
    if (work != NULL) {
        work->buffers[0] = NULL;
        work->buffers[1] = NULL;
        work->buffers[2] = NULL;
    }
    DAT_0057f244 = work;
    work->process = asdProcessCreateSimple((const s8 *)"HUNTER_DATA_BASE PROC", 4, 0, 0, FUN_0037d4b0, NULL, 0);
    taskCreateDraw((const s8 *)"HUNTER_DATA_BASE UL", 126, 0, 0, FUN_0039b960, NULL, 0, (void *)work->process);
    taskCreateDraw((const s8 *)"HUNTER_DATA_BASE UR", 218, 0, 0, FUN_0039b960, NULL, 0, (void *)work->process);
    taskCreateDraw((const s8 *)"HUNTER_DATA_BASE DD", 235, 0, 0, FUN_0039b93c, NULL, 0, (void *)work->process);
    FUN_00402e34(work);
}
}
