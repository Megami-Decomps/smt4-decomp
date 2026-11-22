/* NON_MATCHING: 64 lines (102 vs 102 rows): jump table, descriptor packing and all nn::Result checks match; r5/r6/r7 rotation and mov r1, r0 placement before result tests remain (-O2 candidate). */
#include "common.h"
#include "nn/Result.h"
#include "shard/W6_W6Match7_ArchiveIcon.h"

struct SdkResourceOptions {
    u32 id;
    u8 kind;
    u8 detail;
    u8 memory;
    u8 unk07;
};

extern "C" {
void sysFatalBreak(void);
u32 FUN_00426800(u32 *scratch, u32 state[6], u32 count, u64 descriptor, u32 flags);

/* Maps the archive kind selector (0..4) to its high-word flags (shared with smt4 aocOpenPackedArchive). */
static __inline u32 encodeResourceKind(u8 kind)
{
    switch (kind) {
    case 0: return 0x8c;
    case 1: return 0x0d;
    case 2: break;
    case 3: return 0x10;
    case 4: return 0x30;
    default: break;
    }
    return 0;
}

WindowStatusResult sdkCreateEncodedResourceDescriptor(u64 *outDescriptor, const SdkResourceOptions *options)
{
    u32 flags = encodeResourceKind(options->kind) | 0x40000;
    u32 value = options->detail | ((options->id & 0xfffff) << 8);
    s32 memory = options->memory;
    switch (memory) {
    case 0:
        break;
    case 1:
        memory = 2;
        break;
    default:
        sysFatalBreak();
        memory = 0;
        break;
    }
    u64 descriptor = ((u64)flags << 32) | (value & ~0xf0000000u) |
        (s64)(memory << 28);
    u32 scratch;
    u32 requestState[6];
    u32 code = FUN_00426800(&scratch, requestState, 1, descriptor, 0);
    if (code == 0xd8a083fa) {
        return WindowStatusResult(0xc8813894);
    }
    if (nnResultIsFailure(code)) {
        return WindowStatusResult(code);
    }
    u32 queryState[6];
    code = FUN_004269b0(queryState, 1, &descriptor, 1);
    if ((nnResultModule(code) == 17 && nnResultDescriptionBits(code) >= 100 && nnResultDescriptionBits(code) <= 179) ||
        code == 0xd8a083fa || code == 0xc8a0802b) {
        return WindowStatusResult(0xc8813887);
    }
    if (nnResultIsFailure(code)) {
        return WindowStatusResult(code);
    }
    *outDescriptor = descriptor;
    return WindowStatusResult(0);
}
}
