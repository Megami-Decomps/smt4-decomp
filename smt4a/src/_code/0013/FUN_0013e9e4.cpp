#include "shard/JobWork.h"
#include "Model/MoriModelShadowMap.h"

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

typedef char RenderJobFrameOffsetCheck[offsetof(RenderJobWork, frame) == 0x1400 ? 1 : -1];

extern "C" {
bool stateValuesGetBySelector(u32 index);
void FUN_0014b01c(u32 value);

bool FUN_0013e9e4(u32 job)
{
    RenderJobWork *work = (RenderJobWork *)jobGetWork(job);
    RenderJobFrame *frame = &work->frame;
    if (frame->ready == 0) {
        return false;
    }
    if (frame->complete == 0) {
        return false;
    }
    if (stateValuesGetBySelector(0) == 0 && work->active != 0) {
        FUN_00157558(g_renderCtx);
        FUN_0014b01c(0);
    }
    return false;
}
}
