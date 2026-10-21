/* NON_MATCHING: retail uses a different cache/address or accessor scheduling sequence. */
#include "common.h"
#include <stddef.h>
struct BufferSpan { void *buffer; u32 count; };
struct ParameterCenter { u8 unk00[20]; BufferSpan span; };
struct ParameterCache {
    u8 initial[0x240];
    u8 firstBuffer[0xc0];
    ParameterCenter center;
};
struct ParameterData { u8 data[0xfc]; u32 value; };
struct ParameterOwner { u8 unk00[12]; ParameterData *parameters; };
extern "C" {
extern ParameterCenter DAT_0059edf8;
void FUN_003465ec(void *first, void *second, u32 value);
/* Temporarily selects the cache buffer while applying the owner's parameters. */
void FUN_003cc6b0(ParameterOwner *owner)
{
    ParameterCache *cache = reinterpret_cast<ParameterCache *>(reinterpret_cast<u8 *>(&DAT_0059edf8) - offsetof(ParameterCache, center));
    DAT_0059edf8.span.buffer = cache->firstBuffer;
    DAT_0059edf8.span.count = 8;
    ParameterData *data = owner->parameters;
    FUN_003465ec(data->data + 112, data->data + 148, data->value);
    DAT_0059edf8.span.buffer = cache->initial;
    DAT_0059edf8.span.count = 8;
}
}
