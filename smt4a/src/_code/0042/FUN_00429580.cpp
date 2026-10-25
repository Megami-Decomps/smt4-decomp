/* NON_MATCHING: readable rebuild of the request builder; the 64-bit flag word construction (retail shifts mode<<28 as a 64-bit value: lsl/asr/orr pairs), the by-value result handling and the register assignment differ from armcc here. */
#include "classes/WindowStatus.h"

/* The settings every entry of the request shares. */
struct RequestSettings {
    /* 0x00 */ u32 id;         /* 20-bit id */
    /* 0x04 */ u8 kind;        /* 0..4: selects the entry size */
    /* 0x05 */ u8 flag;
    /* 0x06 */ u8 mode;        /* 0 or 1 */
};

/* One source entry: a word and 20 bytes of payload (0x24 bytes). */
struct RequestSource {
    /* 0x00 */ u32 key;
    /* 0x04 */ u8 payload[0x20];
};

/* One entry of the request block (0x20 bytes). */
struct RequestEntry {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 size;
    /* 0x08 */ u32 key;
    /* 0x0C */ u8 payload[0x14];
};

/* The request block the operation reads, at 0x61b030. */
struct RequestBlock {
    /* 0x000 */ u8 header[0x44];
    /* 0x044 */ u32 count;
    /* 0x048 */ RequestEntry entries[1];
    /* 0x2C8 */ u8 unk2C8[1];
};

/* nn::Result failure test: the sign bit. */
static inline bool resultFailed(s32 result)
{
    return (u32)result >> 31;
}

extern "C" {
extern RequestBlock DAT_0061b030;
extern u8 DAT_0061b000;

void sysFatalBreak(void);
void FUN_0019a46c(void *destination, const void *source, u32 bytes);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
s32 FUN_00427e68(s32 handle, u32 mode);
s32 FUN_00427e28(u8 *scratch, u8 *request, u32 arg);
u32 FUN_0016ccfc(void);
s32 tokenResolveAddress(u32 token, u8 **resolved, s32 handle);
s32 appletIsExitRequested(void);
s32 FUN_0015a410(void);

/* Builds and submits a request of up to 20 entries; returns its result, or the failing code. */
WindowStatusResult FUN_00429580(s32 *handle, const RequestSettings *settings, const RequestSource *sources, u32 count,
                                s32 extended)
{
    if (count > 20)
        return WindowStatusResult(0xE061389C);
    s32 result = FUN_00427e68(*handle, extended ? 13 : 4);
    if (!resultFailed(result)) {
        for (u32 i = 0; i < count; i++) {
            u32 size;
            switch (settings->kind) {
            case 0:
                size = 0x8C;
                break;
            case 1:
                size = 13;
                break;
            case 3:
                size = 0x10;
                break;
            case 4:
                size = 0x30;
                break;
            default:
                size = 0;
                break;
            }
            u32 mode = 0;
            if (settings->mode != 0) {
                if (settings->mode == 1)
                    mode = 2;
                else
                    sysFatalBreak();
            }
            DAT_0061b030.entries[i].flags = (mode << 28) | (((settings->id << 8) | settings->flag) & 0x0FFFFFFF);
            DAT_0061b030.entries[i].size = size | 0x40000;
            DAT_0061b030.entries[i].key = sources[i].key;
            FUN_0019a46c(DAT_0061b030.entries[i].payload, sources[i].payload, 0x14);
        }
        DAT_0061b030.count = count;
        u8 *resolved;
        result = tokenResolveAddress(FUN_0016ccfc(), &resolved, *handle);
        if (!resultFailed(result)) {
            __aeabi_memcpy4(&DAT_0061b030, resolved + 0x54, 0x44);
            DAT_0061b030.unk2C8[0] = resolved[0x98];
            u8 scratch[8];
            result = FUN_00427e28(scratch, &DAT_0061b000, 0);
            if (!resultFailed(result)) {
                if (appletIsExitRequested() || FUN_0015a410())
                    return WindowStatusResult(0xC9413891);
                if (resolved[0x98] == 0 && DAT_0061b030.unk2C8[0] != 0)
                    resolved[0x98] = 1;
                return nnAsyncMapOperationResult(&DAT_0061b000);
            }
        }
    }
    return WindowStatusResult(result);
}

} /* extern "C" */
