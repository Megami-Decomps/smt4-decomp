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
struct ParameterData { u8 data[0xd4]; u32 value; };
struct ParameterOwner { u8 unk00[12]; ParameterData *parameters; };
extern "C" {
extern ParameterCenter DAT_0059edf8;
void FUN_003465ec(void *first, void *second, u32 value);
/* Temporarily selects the cache buffer while applying the owner's parameters. */
void FUN_003c8b0c(ParameterOwner *owner)
{
    ParameterCache *cache = reinterpret_cast<ParameterCache *>(reinterpret_cast<u8 *>(&DAT_0059edf8) - offsetof(ParameterCache, center));
    DAT_0059edf8.span.buffer = cache->firstBuffer;
    DAT_0059edf8.span.count = 8;
    ParameterData *data = owner->parameters;
    FUN_003465ec(data->data + 72, data->data + 108, data->value);
    DAT_0059edf8.span.buffer = cache->initial;
    DAT_0059edf8.span.count = 8;
}
}
