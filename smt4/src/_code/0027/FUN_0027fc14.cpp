/* NON_MATCHING: only register choice for the {0.0f, 1.0f} pair store (retail r3, built r2) and the literal-pool layout differ */
#include "common.h"

struct Vec3f {
    f32 x, y, z;
};

struct ViewState {
    s32 mode;           // 0x000
    u32 unk004;         // 0x004
    u32 unk008;         // 0x008
    u8 unk00C[0x10];    // 0x00C
    Vec3f target;       // 0x01C
    Vec3f current;      // 0x028
    u8 unk034[0x7C];    // 0x034
    u8 flagB0;          // 0x0B0
    u8 flagB1;          // 0x0B1
    u16 countB2;        // 0x0B2
    u16 countB4;        // 0x0B4
    u8 unkB6[2];        // 0x0B6
    f32 scaleB8;        // 0x0B8
    f32 scaleBC;        // 0x0BC
    f32 scaleC0;        // 0x0C0
    u8 unkC4[0x148];    // 0x0C4
    f32 unk20C;         // 0x20C
    f32 unk210;         // 0x210
    u8 unk214[8];       // 0x214
    u8 unk21C;          // 0x21C
    u8 unk21D[0x73];    // 0x21D
    f32 heading;        // 0x290
};

struct ViewGlobals {
    u8 unk00[4];        // 0x00
    ViewState *state;   // 0x04
};

extern "C" {

extern ViewGlobals DAT_004474f0;

void FUN_003079b4(void);

/* Resets the view state for the given mode (modes 8 and 9 start at heading 180). */
void FUN_0027fc14(s32 mode)
{
    ViewState *state = DAT_004474f0.state;

    state->unk21C = 0;
    state->mode = mode;
    state->unk004 = 0;
    state->unk008 = 0;
    state->current = state->target;
    state->heading = 0.0f;
    if (mode != 0) {
        state->unk20C = 0.0f;
        state->unk210 = 0.0f;
        state->flagB0 = 0;
        state->flagB1 = 0;
        state->countB2 = 10;
        state->countB4 = 0;
        state->scaleB8 = 0.0f;
        state->scaleBC = 0.0f;
        state->scaleC0 = 1.0f;
        if (mode == 8 || mode == 9) {
            state->heading = 180.0f;
        }
    }
    FUN_003079b4();
}

} /* extern "C" */
