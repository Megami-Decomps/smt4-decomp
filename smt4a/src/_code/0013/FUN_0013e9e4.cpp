/* NON_MATCHING: readiness bytes use separate large-offset addressing instead of retail's shared+0x1400 base, adding two instructions and a literal; -O2 is unchanged. */
#include "common.h"

struct RenderContext;
struct RenderJobFrame {
    u8 unk00[0x14];
    u8 ready;
    u8 unk15[2];
    u8 complete;
};
struct RenderJobWork {
    u8 unk0000[0xc];
    u8 active;
    u8 unk000d[0x13f3];
    RenderJobFrame frame; // 0x1400
};

extern "C" {
extern RenderContext *g_renderCtx;
RenderJobWork *jobGetWork(u32 job);
bool stateValuesGetBySelector(u32 index);
void FUN_00157558(RenderContext *context);
void FUN_0014b01c(u32 value);

bool FUN_0013e9e4(u32 job)
{
    RenderJobWork *work = jobGetWork(job);
    if (work->frame.ready && work->frame.complete && !stateValuesGetBySelector(0) && work->active) {
        FUN_00157558(g_renderCtx);
        FUN_0014b01c(0);
    }
    return false;
}
}
