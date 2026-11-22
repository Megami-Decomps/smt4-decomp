/* NON_MATCHING: 135 vs 136 rows (69 diff lines); fixed entries[20] offset 0x2C8, function-scope resolved/scratch slots (sub sp #12 and non-tail WindowStatusResult), and stm descriptor store; remaining: DAT_0061b030+0x48 pool split, callee-saved register numbering, and lsrs r2 vs r1 (same residue as FUN_004293b0). */
#include "classes/WindowStatus.h"
#include "code/Code0042.h"
#include "nn/Result.h"
#include "sys/ProgramId.h"

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
    /* 0x00 */ u64 descriptor; /* low word: mode/id/flag bits, high word: size class */
    /* 0x08 */ u32 key;
    /* 0x0C */ u8 payload[0x14];
};

/* The request block the operation reads, at 0x61b030. */
struct RequestBlock {
    /* 0x000 */ u8 header[0x44];
    /* 0x044 */ u32 count;
    /* 0x048 */ RequestEntry entries[20];
    /* 0x2C8 */ u8 unk2C8[1];
};

extern "C" {
extern RequestBlock DAT_0061b030;
extern u8 DAT_0061b000;

void stringCopyTruncated(void *destination, const void *source, u32 bytes);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
nn::Result FUN_00427e68(s32 handle, u32 mode);
u32 tokenTableGet(void);
nn::Result tokenResolveAddress(u32 token, u8 **resolved, s32 handle);
s32 appletIsExitRequested(void);
s32 FUN_0015a410(void);

/* Builds and submits a request of up to 20 entries; returns its result, or the failing code. */
WindowStatusResult aocSubmitBatchRequest(s32 *handle, const RequestSettings *settings, const RequestSource *sources, u32 count,
                                s32 extended)
{
    u8 *resolved;
    u32 scratch;
    if (count > 20) {
        return WindowStatusResult(0xE061389C);
    }
    nn::Result result = FUN_00427e68(*handle, extended ? 13 : 4);
    if (!nnResultIsFailure(result)) {
        RequestEntry *entries = DAT_0061b030.entries;
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
            case 2:
                size = 0;
                break;
            default:
                size = 0;
                break;
            }
            u32 id = settings->id;
            u8 flag = settings->flag;
            entries[i].descriptor = ((u64)(size | 0x40000) << 32) |
                                    (u64)(((id << 8) | flag) & 0x0FFFFFFF) |
                                    (s64)(programMediaBits(settings->mode) << 28);
            entries[i].key = sources[i].key;
            stringCopyTruncated(entries[i].payload, sources[i].payload, 0x14);
        }
        DAT_0061b030.count = count;
        result = tokenResolveAddress(tokenTableGet(), &resolved, *handle);
        if (!nnResultIsFailure(result)) {
            __aeabi_memcpy4(&DAT_0061b030, resolved + 0x54, 0x44);
            DAT_0061b030.unk2C8[0] = resolved[0x98];
            result = FUN_00427e28(&scratch, &DAT_0061b000, 0);
            if (!nnResultIsFailure(result)) {
                if (appletIsExitRequested() || FUN_0015a410()) {
                    return WindowStatusResult(0xC9413891);
                }
                if (resolved[0x98] == 0 && DAT_0061b030.unk2C8[0] != 0) {
                    resolved[0x98] = 1;
                }
                return nnAsyncMapOperationResult(&DAT_0061b000);
            }
        }
    }
    return WindowStatusResult(result);
}

} /* extern "C" */
