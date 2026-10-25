#include "common.h"
#include <stddef.h>
struct ParameterBuffer { u8 bytes[0x180]; };
struct BufferSpan { void *buffer; u32 count; };
struct ParameterCenter { u8 unk00[20]; BufferSpan span; };
struct ParameterCache {
    u8 initial[0x180];
    u8 firstBuffer[0x180];
    ParameterCenter center;
};
struct ParameterData { u8 data[0xb8]; u32 value; };
struct ParameterOwner { u8 unk00[12]; ParameterData *parameters; };
extern "C" {
extern ParameterCenter DAT_0059edf8;
s32 FUN_003465ec(void *first, void *second, u32 value);
/* Temporarily selects the cache buffer while applying the owner's parameters. */
s32 FUN_003bafc0(ParameterOwner *owner)
{
    ParameterData *data = owner->parameters;
    ParameterCenter *center = &DAT_0059edf8;
    ParameterBuffer *buffers = reinterpret_cast<ParameterBuffer *>(center);
    center->span.buffer = buffers - 1;
    center->span.count = 8;
    s32 result = FUN_003465ec(data->data + 44, data->data + 80, data->value);
    center->span.buffer = buffers - 2;
    center->span.count = 8;
    return result;
}
}
