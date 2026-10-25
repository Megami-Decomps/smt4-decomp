/* NON_MATCHING: retail computes the two part pointers in r5/r6 (first part r5, second r6) via add-chains + mov; built swaps the two registers. */
#include "common.h"

struct Part {
    u8 unk00[0x8c];
};

struct PartOwner {
    u8 unk000[0xa4];
    s32 xA4;       // 0x0a4
    u8 unkA8[4];
    s32 xAC;       // 0x0ac
    u8 unkB0[0x658];
    Part parts[2]; // 0x708
};

extern "C" {

void FUN_002b8ee0(Part *part, s32 value);
void FUN_002bf818(void);
s32 vec2GetXInt(Part *part);
s8 uiSpriteGetCompletionState(const Part *part);
void messageOwnerSetState(PartOwner *owner, s32 mode);

// Reset the first part, copy its x position into the owner and start mode 2 when both parts are flagged.
void FUN_00398964(PartOwner *owner)
{
    Part *first = &owner->parts[0];
    FUN_002b8ee0(first, 0);
    Part *second = &owner->parts[1];
    FUN_002bf818();
    s32 x = vec2GetXInt(first);
    owner->xA4 = x;
    owner->xAC = x;
    if (uiSpriteGetCompletionState(first) != 0 && uiSpriteGetCompletionState(second) != 0) {
        messageOwnerSetState(owner, 2);
    }
}

} /* extern "C" */
