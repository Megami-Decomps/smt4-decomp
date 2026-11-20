#include "common.h"

extern "C" {

struct Source { u32 unk00; void *data; };
struct Holder { u8 unk00[8]; Source *source; };
f32 floatTableResolveValue(void *data);

f32 controllerGetSourceTiming(Holder *holder)
{
    void *data = holder->source->data;
    return data != NULL ? floatTableResolveValue(data) : 0.0f;
}

} /* extern "C" */
