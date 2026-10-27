/* NON_MATCHING: result flags/switch/media bits/64-bit descriptor/limit-31 loop now follow retail (nn::Result status, five-label table, shared exit); remaining: callee-saved register numbering, `lsrs r2` vs `r1` temporaries and the non-tail final result constructor. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"
#include "sys/ProgramId.h"
#include "code/Code0042.h"
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
nn::Result FUN_00427e68(s32 handle, s32 operation);
u32 FUN_0016ccfc();
nn::Result tokenResolveAddress(u32 context, const AsyncMapHandleObject **object, s32 handle);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
s32 libc_toupper(s32 character);
void FUN_0019a46c(void *destination, const void *source, u32 size);
s32 appletIsExitRequested();
s32 FUN_0015a410();
extern AsyncMapPacket DAT_0061b030;
extern u8 DAT_0061b000[];

/* Upper-cases at most `limit` characters of the name and terminates the copy. */
static void copyUpperName(char *destination, const s8 *name, u32 limit)
{
    u32 index;
    for (index = 0; index < limit && name[index] != 0; ++index)
        destination[index] = libc_toupper(name[index]);
    destination[index] = 0;
}

WindowStatusResult FUN_004293b0(const s32 *handle, const AsyncMapParameters *parameters,
    const AsyncMapMetadata *metadata, const s8 *name)
{
    nn::Result status = FUN_00427e68(*handle, 6);
    if (!nnResultIsFailure(status)) {
        AsyncMapPacket *packet = &DAT_0061b030;
        const AsyncMapHandleObject *object;
        status = tokenResolveAddress(FUN_0016ccfc(), &object, *handle);
        if (!nnResultIsFailure(status)) {
            __aeabi_memcpy4(packet->header, object->header, 0x44);
            u32 format;
            switch (parameters->format) {
            case 0: format = 0x8C; break;
            case 1: format = 0x0D; break;
            case 3: format = 0x10; break;
            case 4: format = 0x30; break;
            case 2: format = 0; break;
            default: format = 0; break;
            }
            u32 high = format | 0x40000;
            u32 attributes = parameters->flags | ((parameters->id & 0xFFFFF) << 8);
            s32 storage = programMediaBits(parameters->storage) << 28;
            packet->descriptor = (u64)high << 32 | (u64)(attributes & 0x0fffffff) | (u64)storage;
            copyUpperName(packet->name, name, 31);
            packet->value = metadata->value;
            FUN_0019a46c(packet->signature, metadata->signature, 20);
            u32 token;
            status = FUN_00427e28(&token, DAT_0061b000, 0);
            if (!nnResultIsFailure(status)) {
                if (appletIsExitRequested() || FUN_0015a410())
                    return WindowStatusResult(0xC9413891);
                return nnAsyncMapOperationResult(DAT_0061b000);
            }
        }
    }
    return WindowStatusResult(status);
}
}
