/* NON_MATCHING: retail copies the state pointer to R3 before the two address additions; compiled code updates R0 directly, omitting that MOV. Remaining loop instructions match. */
#include "battle/btlMain.h"

struct ActionKindSlot {
    u8 unk00[0x44]; // 0x00
    s8 kind;         // 0x44
    u8 unk45[0x0b]; // 0x45
    u32 flags;       // 0x50
    u8 unk54[0x17c]; // 0x54
};

// Counts active flagged action slots of the requested kind, excluding the four reserved slots.
extern "C" s32 FUN_003e9888(BtlMainStateA* state, s32 kind)
{
    ActionKindSlot* slots = reinterpret_cast<ActionKindSlot*>(state->roster);
    s32 count = 0;
    for (s32 index = 4; index < 54; ++index) {
        ActionKindSlot* slot = &slots[index];
        if ((slot->flags & 1) && (slot->flags & 0x80) && slot->kind == kind) {
            ++count;
        }
    }
    return count;
}
