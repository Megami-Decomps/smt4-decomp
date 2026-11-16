/* NON_MATCHING: Retail ldr r5, [pc, #148] differs from recovered ldr r5, [pc, #112]. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

namespace {
struct PadReaderView {
    u8 unk00[0x18]; // 0x00
    u8 unk18;       // 0x18
};

struct PadGlobalsView {
    PadReaderView* reader; // 0x00
    u32 unk04;             // 0x04
    u32 unk08;             // 0x08
    u8 unk0C[0x0C];        // 0x0C
    u32 unk18;             // 0x18: static initialization guard
};

struct PadStateView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
    u32 unk08; // 0x08
    u16 unk0C; // 0x0C
    u16 unk0E; // 0x0E
};
}

extern "C" {
extern PadGlobalsView g_padInputState;
extern PadReaderView DAT_004e3be8;
extern PadStateView DAT_004e3c48;
extern u8 g_padHeldFrames[0x7C];

// Data-address literals retained beside linker-removed registration calls.
extern u8 entry[];
extern u8 FUN_0011c830[];

int __cxa_guard_acquire(u32* guard);
u32 FUN_0011c6c0(void);
void nn_hid_CTR_PadReader_PadReader_sub_object(PadReaderView* reader, u32 argument);
void nn_hid_CTR_AnalogStickClamper_SetClampParam(PadReaderView* reader, int minimum, int maximum);

// Initialize the shared pad reader and reset its clamp parameters and input state.
void FUN_0010a23c(void)
{
    if ((g_padInputState.unk18 & 1) == 0 &&
        __cxa_guard_acquire(&g_padInputState.unk18) != 0) {
        nn_hid_CTR_PadReader_PadReader_sub_object(
            &DAT_004e3be8, FUN_0011c6c0());
    }

    g_padInputState.reader = &DAT_004e3be8;
    DAT_004e3be8.unk18 = 0;
    nn_hid_CTR_AnalogStickClamper_SetClampParam(
        g_padInputState.reader, 0x28, 0x91);
    memClear(g_padHeldFrames, 0x7C);
    DAT_004e3c48.unk00 = 0;
    DAT_004e3c48.unk04 = 0;
    DAT_004e3c48.unk08 = 0;
    DAT_004e3c48.unk0C = 0;
    DAT_004e3c48.unk0E = 0;
    g_padInputState.unk08 = 0;
}
}
