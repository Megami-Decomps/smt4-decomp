/* NON_MATCHING: switch table becomes a comparison chain, packed descriptor stores combine, and result-test registers differ; -O2 may preserve the retail SDK control flow. */
#include "common.h"

struct SdkResourceOptions {
    u32 id;
    u8 kind;
    u8 detail;
    u8 memory;
    u8 unk07;
};

extern "C" {
void sysFatalBreak(void);
void _ZN18WindowStatusResultC1Ej(u32 *result, u32 code);
u32 FUN_00426800(u32 *scratch, u32 state[6], u32 count, u64 descriptor, u32 flags);
u32 FUN_004269b0(u32 state[6], u8 mode, const u64 *descriptor, s32 count);

void sdkCreateEncodedResourceDescriptor(u32 *result, u64 *outDescriptor, const SdkResourceOptions *options)
{
    u32 flags;
    switch (options->kind) {
    case 0: flags = 0x8c; break;
    case 1: flags = 0x0d; break;
    case 3: flags = 0x10; break;
    case 4: flags = 0x30; break;
    default: flags = 0; break;
    }
    flags |= 0x40000;
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
    u64 descriptor = (static_cast<u64>(flags) << 32) | (value & ~0xf0000000u) |
        static_cast<s64>(memory << 28);
    u32 scratch;
    u32 requestState[6];
    u32 code = FUN_00426800(&scratch, requestState, 1, descriptor, 0);
    if (code == 0xd8a083fa) {
        _ZN18WindowStatusResultC1Ej(result, 0xc8813894);
        return;
    }
    if (static_cast<s32>(code) < 0) {
        _ZN18WindowStatusResultC1Ej(result, code);
        return;
    }
    u32 queryState[6];
    code = FUN_004269b0(queryState, 1, &descriptor, 1);
    s32 description = code & 0x3ff;
    if ((((code & 0x3fc00) >> 10) == 17 && description >= 100 && description <= 179) ||
        code == 0xd8a083fa || code == 0xc8a0802b) {
        _ZN18WindowStatusResultC1Ej(result, 0xc8813887);
        return;
    }
    if (static_cast<s32>(code) < 0) {
        _ZN18WindowStatusResultC1Ej(result, code);
        return;
    }
    *outDescriptor = descriptor;
    _ZN18WindowStatusResultC1Ej(result, 0);
}
}
