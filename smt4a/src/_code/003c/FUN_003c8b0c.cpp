#include "common.h"
struct BufferSpan { void *buffer; u32 count; };
struct ParameterCenter { u8 unk00[20]; BufferSpan span; };
struct ParameterData { u8 data[0xb8]; u32 value; };
struct ParameterOwner { u8 unk00[12]; u8 *parameters; };
extern "C" {
extern ParameterCenter DAT_0059edf8;
s32 FUN_003465ec(void *first, void *second, u32 value);
/* Temporarily selects the cache buffer while applying the owner's parameters. */
s32 FUN_003c8b0c(ParameterOwner *owner)
{
    ParameterData *data = reinterpret_cast<ParameterData *>(owner->parameters + 28);
    ParameterCenter *center = &DAT_0059edf8;
    u8 *cacheEnd = reinterpret_cast<u8 *>(center);
    center->span.buffer = cacheEnd - 0x180;
    center->span.count = 8;
    s32 result = FUN_003465ec(data->data + 44, data->data + 80, data->value);
    center->span.buffer = cacheEnd - 0x300;
    center->span.count = 8;
    return result;
}
}
