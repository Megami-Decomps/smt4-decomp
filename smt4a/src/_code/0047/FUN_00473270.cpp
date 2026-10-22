/* NON_MATCHING: Retail ldr r3, [r0, #12] differs from recovered ldr r1, [r0, #12]. */
#include "common.h"

struct TouchRegionRecordView {
    u8 unk00[0x08]; // 0x00
    s16 unk08;      // 0x08
    s16 unk0A;      // 0x0A
    const s16* unk0C; // 0x0C: two signed coordinate/extent values
};

struct TouchContextView {
    u8 unk00[0x64]; // 0x00
    u8 unk64;       // 0x64
};

extern "C" {
void FUN_001b3f7c(void);
const TouchRegionRecordView* FUN_001834a4(u32 group, u32 entry);
void touchRegisterFirstRegion(TouchContextView* context, s32 x, s32 y,
                              s32 width, s32 height);
void touchRegisterSecondRegion(TouchContextView* context, s32 x, s32 y,
                               s32 width, s32 height);
void FUN_004d091c(TouchContextView* context, s32 x, s32 y,
                  s32 width, s32 height);
}

// Load and register three touch regions, then mark the context initialized.
extern "C" void FUN_00473270(TouchContextView* context)
{
    FUN_001b3f7c();

    const TouchRegionRecordView* region = FUN_001834a4(0x2F, 0x4F);
    touchRegisterFirstRegion(context, region->unk08, region->unk0A,
                             region->unk0C[0], region->unk0C[1]);

    region = FUN_001834a4(0x2F, 0x50);
    touchRegisterSecondRegion(context, region->unk08, region->unk0A,
                              region->unk0C[0], region->unk0C[1]);

    region = FUN_001834a4(0x2F, 0x4E);
    FUN_004d091c(context, region->unk08, region->unk0A,
                  region->unk0C[0], region->unk0C[1]);

    context->unk64 = 1;
}
