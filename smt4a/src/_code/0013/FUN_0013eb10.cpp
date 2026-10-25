/* NON_MATCHING: native static guard/object use separate data relocations, and retail has an unidentified weak NOP before the mode store; zero-register lifetimes differ. */
#include "nn/hid/PadReader.h"

struct InputReaderGlobals {
    nn::hid::CTR::PadReader *reader;
    u32 unk04;
    u32 frame;
    u32 repeatDelay;
    u32 repeatInterval;
    u32 unk14;
};
struct InputReaderCounters {
    u32 held;
    u32 pressed;
    u32 released;
    u16 previous;
    u16 current;
};
typedef char InputReaderCountersLayoutCheck[sizeof(InputReaderCounters) == 0x10 &&
    offsetof(InputReaderGlobals, frame) == 8 && sizeof(InputReaderGlobals) == 0x18 ? 1 : -1];

extern "C" {
void *FUN_00159808(void);
void nn_hid_CTR_AnalogStickClamper_SetClampParam(nn::hid::CTR::PadReader *reader, s32 minimum, s32 maximum);
void sysMemClear(void *destination, u32 size);
static InputReaderGlobals DAT_005b4000 = {NULL, 0, 0, 15, 4, 0};
extern InputReaderCounters DAT_0063fff0;
extern u8 DAT_00640000[0x7c];
extern u8 DAT_0064007c[0x7c];

// Construct the HID reader once, then reset the game's two input histories and counters.
void FUN_0013eb10(void)
{
    static nn::hid::CTR::PadReader reader(FUN_00159808());
    nn::hid::CTR::AnalogStickClamper *clamper = &reader.clamper;
    DAT_005b4000.reader = &reader;
    clamper->mode = 0;
    nn_hid_CTR_AnalogStickClamper_SetClampParam(DAT_005b4000.reader, 0x28, 0x91);
    sysMemClear(DAT_00640000, sizeof(DAT_00640000));
    sysMemClear(DAT_0064007c, sizeof(DAT_0064007c));
    DAT_0063fff0.held = 0;
    DAT_0063fff0.pressed = 0;
    DAT_0063fff0.released = 0;
    DAT_0063fff0.previous = 0;
    DAT_0063fff0.current = 0;
    DAT_005b4000.frame = 0;
}
}
