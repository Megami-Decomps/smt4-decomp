/* NON_MATCHING: descriptor packing/store width, format dispatch and result-bit/global-address scheduling differ. */
#include "classes/WindowStatus.h"
#include <stddef.h>

struct AsyncMapParameters { u32 id; u8 format, flags, storage; };
struct AsyncMapHandleObject { u8 prefix[0x54]; u8 header[0x44]; };
struct AsyncMapMetadata { u32 value; u8 signature[20]; };
struct AsyncMapPacket {
    u8 header[0x48];
    u64 descriptor;
    char name[32];
    u32 value;
    u8 signature[20];
};
typedef char AsyncMapPacketOffsetsCheck[offsetof(AsyncMapPacket, descriptor) == 0x48 &&
    offsetof(AsyncMapPacket, name) == 0x50 && offsetof(AsyncMapPacket, value) == 0x70 ? 1 : -1];
extern "C" {
s32 FUN_00427e68(s32 handle, s32 operation);
u32 FUN_0016ccfc();
s32 tokenResolveAddress(u32 context, const AsyncMapHandleObject **object, s32 handle);
void rt_memcpy_w(void *destination, const void *source, u32 size);
void sysFatalBreak();
s32 libc_toupper(s32 character);
void FUN_0019a46c(void *destination, const void *source, u32 size);
s32 FUN_00427e28(u32 *token, void *request, s32 mode);
s32 appletIsExitRequested();
s32 FUN_0015a410();
WindowStatusResult nnAsyncMapOperationResult(void *request);
extern AsyncMapPacket DAT_0061b030;
extern u8 DAT_0061b000[];

WindowStatusResult FUN_004293b0(const s32 *handle, const AsyncMapParameters *parameters,
    const AsyncMapMetadata *metadata, const s8 *name)
{
    s32 result = FUN_00427e68(*handle, 6);
    if (result < 0)
        return WindowStatusResult(result);
    const AsyncMapHandleObject *object;
    result = tokenResolveAddress(FUN_0016ccfc(), &object, *handle);
    if (result < 0)
        return WindowStatusResult(result);
    rt_memcpy_w(DAT_0061b030.header, object->header, 0x44);
    u32 format;
    switch (parameters->format) {
    case 0: format = 0x8C; break;
    case 1: format = 0x0D; break;
    case 3: format = 0x10; break;
    case 4: format = 0x30; break;
    default: format = 0; break;
    }
    s32 storage = 0;
    if (parameters->storage != 0) {
        if (parameters->storage == 1)
            storage = 2;
        else
            sysFatalBreak();
    }
    u32 attributes = parameters->flags | ((parameters->id & 0xFFFFF) << 8);
    DAT_0061b030.descriptor = (static_cast<u64>(format | 0x40000) << 32) |
        attributes | static_cast<s64>(storage << 28);
    u32 index;
    for (index = 0; index < 31 && name[index] != 0; ++index)
        DAT_0061b030.name[index] = libc_toupper(name[index]);
    DAT_0061b030.name[index] = 0;
    DAT_0061b030.value = metadata->value;
    FUN_0019a46c(DAT_0061b030.signature, metadata->signature, 20);
    u32 token;
    result = FUN_00427e28(&token, DAT_0061b000, 0);
    if (result < 0)
        return WindowStatusResult(result);
    if (appletIsExitRequested() || FUN_0015a410())
        return WindowStatusResult(0xC9413891);
    return nnAsyncMapOperationResult(DAT_0061b000);
}
}
