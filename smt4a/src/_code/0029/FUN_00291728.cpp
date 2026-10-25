/* NON_MATCHING: flag-clear order, optional-request branch outlining and task argument scheduling differ. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "shard/JobWork.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct EventJobRequestPrefix { u32 id; s32 entry; char path[1]; };
extern "C" {
extern AocJobStateA *g_aocJob;
extern EventJobRequestPrefix DAT_005e1f70;
void scrScriptProcessDestroy(void *script);
void asdMemFree(void *memory);
void rt_aeabi_memclr(void *memory, u32 size);
char *libc_strcpy(char *destination, const char *source);
const void *jyoucyuGetTableEntry(u32 id);
void dataTableReload(u32 table);
void dataTableResolveEntryVariants();
void FUN_00225ddc(JobWork *job);
void FUN_00298978(JobWork *job);
void aocJobRequest(JobWork *job);
void resourceDefaultFalseCallback(JobWork *job);
void resourceEmptyCallback(JobWork *job);
void FUN_0032878c(JobWork *job);
void FUN_00379d54(JobWork *job);
u32 taskCreateDraw(const char *name, s32 priority, s32 first, s32 second,
    void (*update)(JobWork *), void (*finish)(JobWork *), void *data, u32 parent);

void FUN_00291728(const RequestParameters *parameters)
{
    struct EventJobView {
        AocJobStateA prefix;
        u32 parameters[6];
        u8 flags[4], status, unk25[3];
        u32 state;
        void *resource, *script, *auxiliary;
        u8 complete, unk39[3];
        char path[64];
        u8 pathReady;
    };
    typedef char EventJobViewOffsetsCheck[offsetof(EventJobView, script) == 0x30 &&
        offsetof(EventJobView, path) == 0x3C && offsetof(EventJobView, pathReady) == 0x7C ? 1 : -1];
    EventJobView *work = reinterpret_cast<EventJobView *>(g_aocJob);
    if (work->script != NULL) {
        scrScriptProcessDestroy(work->script);
        work->script = NULL;
    }
    if (work->resource != NULL) {
        asdMemFree(work->resource);
        work->resource = NULL;
    }
    if (work->auxiliary != NULL) {
        asdMemFree(work->auxiliary);
        work->auxiliary = NULL;
    }
    for (s32 index = 0; index < 6; ++index)
        work->parameters[index] = 0;
    work->state = 0;
    work->resource = NULL;
    work->script = NULL;
    work->flags[0] = work->flags[1] = work->flags[2] = work->flags[3] = 0;
    work->status = work->complete = work->pathReady = 0;
    rt_aeabi_memclr(work->path, sizeof(work->path));
    work->prefix.started = 0;
    if (parameters == NULL) {
        if (jyoucyuGetTableEntry(0) != NULL) {
            dataTableReload(0x19);
            dataTableReload(0x1B);
            dataTableReload(0x1C);
            dataTableResolveEntryVariants();
        }
        work->prefix.id = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EVENT VIEW CALC"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00298978), reinterpret_cast<AsdProcFunc>(aocJobRequest), NULL);
        taskCreateDraw("EVENT VIEW UDRAW", 0x75, 0, 0,
            resourceDefaultFalseCallback, resourceEmptyCallback, NULL, work->prefix.id);
        taskCreateDraw("EVENT VIEW DDRAW", 0xEA, 0, 0,
            FUN_0032878c, FUN_00379d54, NULL, work->prefix.id);
        return;
    }
    DAT_005e1f70.id = parameters->word(0);
    DAT_005e1f70.entry = parameters->word(1);
    if (DAT_005e1f70.entry != -1)
        DAT_005e1f70.path[0] = 0;
    else
        libc_strcpy(DAT_005e1f70.path, reinterpret_cast<const char *>(&parameters->word(2)));
    work->prefix.id = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EVENT CALC"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00225ddc), reinterpret_cast<AsdProcFunc>(aocJobRequest), NULL);
}
}
