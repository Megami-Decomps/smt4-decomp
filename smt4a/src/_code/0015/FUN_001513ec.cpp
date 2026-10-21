/* NON_MATCHING: instruction selection/order differs: retail bic r1, r2, #255; compiler bic r2, r2, #255. */
#include "common.h"

struct TextFlagDefaults {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 flags;
};
struct TextScalarWork {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 value;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ f32 scalar;
};

extern "C" {

extern TextFlagDefaults g_asdTextDefaults;

/* Updates the text work value, masked default flags and scalar. */
void FUN_001513ec(TextScalarWork *work, u32 value, u32 flags, f32 scalar)
{
    work->value = value;
    g_asdTextDefaults.flags = flags & ~0xFFu;
    work->scalar = scalar;
}

} /* extern "C" */
