/* NON_MATCHING: Retail strb r1, [r0], #4 differs from recovered mov r4, r0. */
#include "classes/WindowStatus.h"
#include <new>

// Private layout views; these declarations do not define a shared API.

namespace {

struct AocStatusView {
    u8 status;                  // 0x00
    u8 unk01[3];                // 0x01
    WindowStatusResult result;  // 0x04
    u32 unk0C;                  // 0x0C
    u32 unk10;                  // 0x10
};

struct AocMainView {
    u8 unk00[0x7C]; // 0x00
    u8 unk7C;      // 0x7C; start of an opaque subobject
};

}

extern "C" {
extern AocMainView* g_aocMain;
void FUN_00161a10(void);
void FUN_004288e0(WindowStatusResult* result, void* context);
s32 legacyResourceIdRemap(WindowStatusResult* result);
}

// Construct the stored result, query the AOC context, and classify its status.
extern "C" void _ZN9Obj4221e47vfunc0cEv(AocStatusView* state)
{
    state->status = 1;
    new (&state->result) WindowStatusResult;
    state->unk0C = 0;
    state->unk10 = 0;

    WindowStatusResult temporary(0);
    state->result = temporary;

    AocMainView* main = g_aocMain;
    FUN_00161a10();
    FUN_004288e0(&temporary, &main->unk7C);
    state->result = temporary;

    if ((legacyResourceIdRemap(&state->result) & 0x80000000u) == 0) {
        state->status = 0;
    } else if (legacyResourceIdRemap(&state->result) == -0x36DEC7FF) {
        state->status = 103;
    } else {
        legacyResourceIdRemap(&state->result);
        state->status = 100;
    }
}
