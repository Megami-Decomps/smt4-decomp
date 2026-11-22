/* NON_MATCHING: 78 lines (81 vs 85 rows): all nn::Result checks and WindowStatusResult returns match; retail packs descriptor into r0:r1 for strd/stm and keeps code in r0 across result tests. */
#include "common.h"
#include "nn/Result.h"
#include "classes/WindowStatus.h"

struct AocResourceOptions {
    u32 id;
    u8 kind;
    u8 detail;
    u8 unk06[2];
};

extern "C" {
u32 FUN_003520dc(u32 *scratch, u32 state[6], u32 count, u64 descriptor, u32 flags);
s32 FUN_0035228c(void *output, u8 flag, const void *input, s32 count);

/* Maps the archive kind selector (0..3) to its high-word flags (shared with smt4a sdkCreateEncodedResourceDescriptor). */
static __inline u32 encodeResourceKind(u8 kind)
{
    switch (kind) {
    case 0: return 0x8c;
    case 1: return 0x0d;
    case 2: break;
    case 3: return 0x10;
    default: break;
    }
    return 0;
}

WindowStatusResult aocOpenPackedArchive(u64 *outDescriptor, const AocResourceOptions *options)
{
    u32 flags = encodeResourceKind(options->kind) | 0x40000;
    u32 value = options->detail | ((options->id & 0xfffffu) << 8);
    u64 descriptor = ((u64)flags << 32) | value;
    u32 scratch;
    u32 requestState[6];
    u32 code = FUN_003520dc(&scratch, requestState, 1, descriptor, 0);
    if (code == 0xd8a083fa) {
        return WindowStatusResult(0xc8813894);
    }
    if (nnResultIsFailure(code)) {
        return WindowStatusResult(code);
    }
    u32 queryState[6];
    code = FUN_0035228c(queryState, 1, &descriptor, 1);
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
