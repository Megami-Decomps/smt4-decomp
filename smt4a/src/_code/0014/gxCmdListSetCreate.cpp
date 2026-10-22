#include "shard/GxCmdListSet.h"

extern "C" {

void FUN_00161474(u32 count, u32 *lists);
void nngxBindCmdlist(u32 list);
void FUN_0016120c(u32 bufferSize, u32 requestCount);
void asdGfxSetCmdBufferState(u32 a, u32 b);
void asdModelResetCommandBuffer(void);
void asdGxMarkSubmissionReady(void);
void FUN_001536e0(void);
void FUN_001615e4(void (*callback)(void));
void FUN_00161438(s32 value);

/* Creates `config.count` command lists, gives each a buffer and a reset state, then binds the first. */
void gxCmdListSetCreate(GxCmdListSet *set, GxCmdListConfig config)
{
    u32 i;

    set->config = config;
    set->current = 0;
    for (i = 0; i < set->config.count; i++) {
        set->lists[i] = 0;
    }
    FUN_00161474(set->config.count, set->lists);
    for (i = 0; i < set->config.count; i++) {
        nngxBindCmdlist(set->lists[i]);
        FUN_0016120c(set->config.bufferSize, set->config.requestCount);
        asdGfxSetCmdBufferState(0x200, 0x300);
        asdModelResetCommandBuffer();
    }
    nngxBindCmdlist(set->lists[0]);
    asdGxMarkSubmissionReady();
    FUN_001615e4(FUN_001536e0);
    FUN_00161438(-1);
}

} /* extern "C" */
