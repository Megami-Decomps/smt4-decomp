#include "common.h"

struct DispatchContext {
    u32 unk00;       // 0x00
    void* target;    // 0x04
};

extern "C" s32 FUN_00158124(DispatchContext* context);
extern "C" void asdCommandRingAdvance(void* target);

extern "C" void titleConfigApplyTarget(DispatchContext* context)
{
    if (FUN_00158124(context) != 0) {
        asdCommandRingAdvance(context->target);
    }
}
