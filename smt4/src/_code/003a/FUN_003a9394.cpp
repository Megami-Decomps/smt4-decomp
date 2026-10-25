#include "common.h"
#include "ui/UiSpriteState.h"

// Private views of the fields accessed by this routine.
namespace {
struct UpdateStateView {
    u8 unk00[0x14];               // 0x000
    u32 unk14;                    // 0x014
    u32 unk18;                    // 0x018
    u8 unk1C[0x7A];               // 0x01C
    u8 unk96[0x32];               // 0x096
    u8 unkC8[0xC0];               // 0x0C8
    UiSpriteState unk188;         // 0x188
};

}

extern "C" {
void pointConvertToFloat(void* destination, s32 x, s32 y);
s32 FUN_00295618(void);
void FUN_0029e874(s32 value);
void FUN_002bf818(UiSpriteState* position);
s32 vec2GetYInt(const UiSpriteState* position);
s32 vec2GetXInt(const UiSpriteState* position);
s8 uiSpriteGetCompletionState(const UiSpriteState* position);
s32 FUN_0026b564(void);
s32 utilityReturnSuccess(void* state);

// Refresh the position and advance the state when all transition conditions hold.
void FUN_003a9394(UpdateStateView* state)
{
    if (FUN_00295618() != 0) {
        FUN_0029e874(0);
    }

    UiSpriteState* position = &state->unk188;
    FUN_002bf818(position);
    s32 y = vec2GetYInt(position);
    s32 x = vec2GetXInt(position);
    pointConvertToFloat(state->unkC8, x, y);

    if (FUN_00295618() == 0) {
        return;
    }
    if (uiSpriteGetCompletionState(position) == 0) {
        return;
    }
    if (FUN_0026b564() == 0) {
        return;
    }
    if (utilityReturnSuccess(state->unk96) != 0) {
        return;
    }

    state->unk14 = 7;
    state->unk18 = 0;
}
}
