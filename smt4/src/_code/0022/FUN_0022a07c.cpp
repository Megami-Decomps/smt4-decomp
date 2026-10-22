/* NON_MATCHING: Retail ldr r2, [r0, #1876] differs from recovered ldr r1, [r0, #1876]. */
#include "common.h"

namespace {

struct AocMainView {
    u8 unk00[0x754]; // 0x000
    u32 unk754;      // 0x754
};

struct AocResultView {
    u8 unk00[0x108]; // 0x000
    u32 unk108;      // 0x108
};

struct AocRequestView {
    u32 status;           // 0x00
    u32 unk04;            // 0x04
    void* unk08;          // 0x08
    void* unk0C;          // 0x0C
    void* unk10;          // 0x10
    AocResultView* result; // 0x14
};

}

extern "C" {
extern AocMainView* g_aocMain;
void asdMemFree(void* allocation);
AocResultView* FUN_00297060(void* storage, void* source);

// Consume completion flags and release failed allocations or record the constructed result.
u32 FUN_0022a07c(AocRequestView* request)
{
    const u32 flags = g_aocMain->unk754;
    const u32 completionFailed = (flags & 0x10u) >> 4;
    g_aocMain->unk754 = flags & ~0x70u;

    if (completionFailed) {
        request->status = 1;
        if (request->unk08) {
            asdMemFree(request->unk08);
            request->unk08 = 0;
        }
        if (request->unk0C) {
            asdMemFree(request->unk0C);
            request->unk0C = 0;
        }
        if (request->unk10) {
            asdMemFree(request->unk10);
            request->unk10 = 0;
        }
        return 0;
    }

    AocResultView* result = FUN_00297060(request->unk10, request->unk0C);
    request->result = result;
    result->unk108 = 2;
    request->status = 0;
    return 0;
}
}
