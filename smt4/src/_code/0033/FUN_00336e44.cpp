/* NON_MATCHING: Retail push {r4, r5, r6, r7, lr} differs from recovered push {r4, r5, r6, r7, r8, lr}. */
#include "common.h"

namespace {

struct SlotView {
    u32 flags;               // 0x00
    u8 unk04[4];             // 0x04
    s16 unk08;               // 0x08
    u8 unk0A[0x27E];         // 0x0A
};

struct ContextView {
    u8 unk00[0x1FC0];        // 0x0000
    SlotView* slots;         // 0x1FC0
};

struct LookupView {
    u8 unk00[0x0C];          // 0x00
    u32 values[50];          // 0x0C
};

} // namespace

extern "C" LookupView* FUN_0027da30(ContextView* context, s32 key);

// Search eligible slots 4 through 53 for a lookup containing the requested value.
extern "C" u32 FUN_00336e44(ContextView* context, u32 value)
{
    for (s32 slotIndex = 4; slotIndex < 54; ++slotIndex) {
        const SlotView* slot = &context->slots[slotIndex];
        if ((slot->flags & 1) == 0 || (slot->flags & 0x40) != 0) {
            continue;
        }

        const LookupView* lookup = FUN_0027da30(context, slot->unk08);
        if (lookup != 0) {
            for (s32 valueIndex = 0; valueIndex < 50; ++valueIndex) {
                if (lookup->values[valueIndex] == value) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
