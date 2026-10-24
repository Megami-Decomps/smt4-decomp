/* NON_MATCHING: the global is one struct whose base is 0x730 bytes below the symbol retail references (DAT_004d9270 is the vector at +0x730); the base has no symbol yet, so the relocation differs. */
#include "common.h"

/* An effect editor settings block: three bytes at 0x88 and a vector at 0x730. */
struct Obj327920State {
    u8 unk00[0x88];
    u8 mode;
    u8 flagA;
    u8 flagB;
    u8 unk8b[0x730 - 0x8b];
    f32 vector[4];
};

extern "C" Obj327920State DAT_004d8b40;

/* Clears the vector and resets the mode bytes (mode 8), always reporting 0. */
extern "C" s32 FUN_00327920(void)
{
    DAT_004d8b40.vector[0] = 0.0f;
    DAT_004d8b40.vector[1] = 0.0f;
    DAT_004d8b40.vector[2] = 0.0f;
    DAT_004d8b40.vector[3] = 0.0f;
    DAT_004d8b40.mode = 8;
    DAT_004d8b40.flagA = 0;
    DAT_004d8b40.flagB = 0;
    return 0;
}
