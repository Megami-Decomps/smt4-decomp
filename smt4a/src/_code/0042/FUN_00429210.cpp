/* NON_MATCHING: format switch uses comparisons instead of a jump table; hidden result construction tail calls and sign-test registers differ. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"
#include <stddef.h>

namespace {
struct AsyncTransferFormat {
    u32 id;
    u8 format;
    u8 flags;
    u8 mode;
    u8 unk07;
};
struct AsyncTransferContext {
    u8 unk00[0x54];
    u8 metadata[0x44];
};
struct AsyncTransferData {
    u8 metadata[0x44];
    u8 unk44[4];
    u64 encoding;
    u16 payload[64];
    u32 count;
};
typedef char AsyncTransferDataOffsetsCheck[
    offsetof(AsyncTransferData, encoding) == 0x48 &&
    offsetof(AsyncTransferData, payload) == 0x50 &&
    offsetof(AsyncTransferData, count) == 0xD0 ? 1 : -1];
}

extern "C" {
extern AsyncTransferData DAT_0061b030;
extern u8 DAT_0061b000[];
s32 FUN_00427e68(u32 token, u32 operation);
void *FUN_0016ccfc(void);
s32 tokenResolveAddress(void *registry, AsyncTransferContext **context, u32 token);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void rt_memcpy(void *destination, const void *source, u32 size);
void sysFatalBreak(void);
s32 FUN_00427e28(u32 *operation, void *packet, u32 flags);
s32 appletIsExitRequested(void);
s32 FUN_0015a410(void);

// Validate a token, encode up to sixty-four halfwords and submit the asynchronous operation.
WindowStatusResult FUN_00429210(const u32 *token, const AsyncTransferFormat *format,
    const u16 *payload, u32 count)
{
    if (count > 64)
        return WindowStatusResult(0xE0613880);
    s32 result = FUN_00427e68(*token, 8);
    if (!nnResultIsFailure(result)) {
        AsyncTransferContext *context;
        result = tokenResolveAddress(FUN_0016ccfc(), &context, *token);
        if (!nnResultIsFailure(result)) {
            __aeabi_memcpy4(&DAT_0061b030, context->metadata, sizeof(context->metadata));
            u32 encoding;
            switch (format->format) {
            case 0: encoding = 0x8C; break;
            case 1: encoding = 0x0D; break;
            case 3: encoding = 0x10; break;
            case 4: encoding = 0x30; break;
            default: encoding = 0; break;
            }
            u32 low = format->flags | ((format->id & 0xFFFFF) << 8);
            u32 mode = format->mode;
            if (mode != 0) {
                if (mode == 1) {
                    mode = 2;
                } else {
                    sysFatalBreak();
                    mode = 0;
                }
            }
            // The signed mode word is extended into the upper command word before the format is added.
            DAT_0061b030.encoding = static_cast<u64>(low & 0x0FFFFFFF) |
                static_cast<s64>(static_cast<s32>(mode << 28)) |
                (static_cast<u64>(encoding | 0x40000) << 32);
            rt_memcpy(DAT_0061b030.payload, payload, count * sizeof(u16));
            DAT_0061b030.count = count;
            u32 operation;
            result = FUN_00427e28(&operation, DAT_0061b000, 0);
            if (!nnResultIsFailure(result)) {
                if (appletIsExitRequested() != 0 || FUN_0015a410() != 0)
                    return WindowStatusResult(0xC9413891);
                return nnAsyncMapOperationResult(DAT_0061b000);
            }
        }
    }
    return WindowStatusResult(result);
}
}
