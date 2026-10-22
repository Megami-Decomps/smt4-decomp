/* NON_MATCHING: Retail push {r4, r5, r6, lr} differs from recovered push {r4, r5, lr}. */
#include "common.h"

struct WindowStatusResultView;

struct RequestIdentityView {
    u32 unk00;                 // 0x00
    u32 unk04;                 // 0x04
};

struct RequestSourceView {
    RequestIdentityView identity; // 0x00
    u8 unk08[0x1c];               // 0x08
    u32 unk24;                    // 0x24
    u32 unk28;                    // 0x28
};

struct RequestView {
    RequestIdentityView identity; // 0x00
    u8 unk08[9];                  // 0x08
    u8 unk11;                     // 0x11
    u8 unk12[6];                  // 0x12
};

extern "C" {
void _ZN18WindowStatusResultC1Ej(WindowStatusResultView* result, u32 status);
s32 FUN_0035fd5c(long long* value, RequestView* request, u32 unk24, u32 unk28);
}

// Query the source and, on success, report its masked, rounded 128-KiB unit count.
extern "C" void FUN_003df850(WindowStatusResultView* result,
                            const RequestSourceView* const* sourceHandle,
                            u32* unitCount)
{
    const RequestSourceView* source = *sourceHandle;
    RequestView request;
    request.unk11 = 1;
    request.identity = source->identity;

    long long value;
    s32 status = FUN_0035fd5c(&value, &request, source->unk24, source->unk28);
    if (status >= 0) {
        status = 0;
    }
    if (status >= 0) {
        const long long rounded = (value + 0x1ffffLL) & 0xfffe0000LL;
        *unitCount = static_cast<u32>(rounded / 0x20000LL);
        status = 0;
    }
    _ZN18WindowStatusResultC1Ej(result, static_cast<u32>(status));
}
