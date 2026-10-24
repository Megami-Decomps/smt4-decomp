/* NON_MATCHING: the title-id composition, media rewrite and every instruction match; retail places the query byte at sp+0 and the status buffer at sp+8 (this build has them the other way round) and allocates refs/count/index/category to r7/r6/r5/r4 with the not-found code and the constant 16 hoisted into r8/r9 and the id/variation in sl/fp, while this build assigns r9/r8/r4/r5 and fp/sl/r6/r7. */
#include "nn/Result.h"

extern "C" {

void sysFatalBreak(void);
s32 FUN_00426a80(s8 *status);
s32 FUN_004268ec(u8 *value, u8 mode, u64 handle);

// One entry of the caller's table of title references (8 bytes each).
struct ArchiveRef {
    u32 id;        // 0x00: low 20 bits used
    u8 kind;       // 0x04: 0..4, selects the title category
    u8 variation;  // 0x05
    u8 media;      // 0x06: 0 or 1
    u8 unk07;
};

// Checks each referenced title (64-bit title ID: platform 4, category from `kind`) of category 0x8c
// with the service query; returns the first failure code (or "already present"), else 0.
s32 FUN_00427ac4(const ArchiveRef *refs, u32 count)
{
    s8 status[12];
    s32 result = FUN_00426a80(status);
    if ((status[0] - 1) | nnResultIsFailure(result)) {
        return 0;
    }
    for (u32 i = 0; i < count; i++) {
        const ArchiveRef *ref = &refs[i];
        u32 category;
        switch (ref->kind) {
        case 0:
            category = 0x8c;
            break;
        case 1:
            category = 0xd;
            break;
        case 3:
            category = 0x10;
            break;
        case 4:
            category = 0x30;
            break;
        case 2:
            category = 0;
            break;
        default:
            category = 0;
            break;
        }
        u32 id = ref->id;
        u8 variation = ref->variation;
        s32 media = ref->media;
        if (media != 0) {
            if (media == 1) {
                media = 2;
            } else {
                sysFatalBreak();
                media = 0;
            }
        }
        u32 low = ((id << 8) | variation) & 0x0fffffff;
        u64 handle = ((u64)(0x40000 | category) << 32) | low | (media << 28);
        if ((handle >> 46) == 0x10 && (u16)(handle >> 32) == 0x8c) {
            u8 value;
            result = FUN_004268ec(&value, 1, handle);
            if (result == (s32)0xD8A083FA) {
                result = 0;
            } else if (!nnResultIsFailure(result)) {
                result = value != 0 ? (s32)0xE0A13899 : 0;
            }
            if (nnResultIsFailure(result)) {
                return result;
            }
        }
    }
    return 0;
}

} /* extern "C" */
