#include "common.h"
struct BufferSpan { void *buffer; u32 count; };
struct ParameterCenter { u8 unk00[20]; BufferSpan span; };
struct ParameterData { u8 data[0x34]; u32 value; };
struct ParameterOwner { u8 unk00[12]; ParameterData *parameters; };
extern "C" {
extern ParameterCenter DAT_0059edf8;
s32 FUN_003465ec(void *first, void *second, u32 value);
/* Temporarily selects the cache buffer while applying the owner's parameters. */
s32 FUN_003c5b70(ParameterOwner *owner)
{
    ParameterData *data = owner->parameters;
    ParameterCenter *center = &DAT_0059edf8;
    u8 *cacheEnd = reinterpret_cast<u8 *>(center);
    center->span.buffer = cacheEnd - 0x240;
    center->span.count = 8;
    s32 result = FUN_003465ec(data->data + 0, data->data + 36, data->value);
    center->span.buffer = cacheEnd - 0x300;
    center->span.count = 8;
    return result;
}
}
