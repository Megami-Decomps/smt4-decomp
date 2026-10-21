/* NON_MATCHING: retail loads the cache base before the owner and uses a different register schedule. */
#include "common.h"
#include <stddef.h>
struct BufferSpan { void *buffer; u32 count; };
struct ParameterCenter { u8 unk00[20]; BufferSpan span; };
struct ParameterCache {
    u8 initial[0x180];
    u8 firstBuffer[0x180];
    ParameterCenter center;
};
struct ParameterData { u8 data[0x8c]; u32 value; };
struct ParameterOwner { u8 unk00[12]; ParameterData *parameters; };
extern "C" {
extern ParameterCenter DAT_0044fca8;
void FUN_00243d20(void *first, void *second, u32 value);
/* Temporarily selects the cache buffer while applying the owner's parameters. */
void FUN_003286fc(ParameterOwner *owner)
{
    ParameterCache *cache = reinterpret_cast<ParameterCache *>(reinterpret_cast<u8 *>(&DAT_0044fca8) - offsetof(ParameterCache, center));
    DAT_0044fca8.span.buffer = cache->firstBuffer;
    DAT_0044fca8.span.count = 8;
    ParameterData *data = owner->parameters;
    FUN_00243d20(data->data + 0, data->data + 36, data->value);
    DAT_0044fca8.span.buffer = cache->initial;
    DAT_0044fca8.span.count = 8;
}
}
