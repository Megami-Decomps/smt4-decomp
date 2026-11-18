#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessageSlots.h"

extern "C" {
void msgBoxFlagsClearBit7(u32);

// Advance twelve message indicators through opening, looping, and closing animations.
void messageIndicatorsUpdate(AnimatedMessageSlot *slots)
{
    for (s32 index = 0; index < 12; ++index) {
        AnimatedMessageSlot *slot = &slots[index];
        s32 state = slot->active ? slot->state : 0; /* an inactive slot is idle */
        if (state != 0) {
            if (state == 1) {
                uiSpriteAdvanceAnimation(&slot->sprite, 1.0f);
                s8 finished = slot->animation.finished;
                s8 scaleDone = uiSpriteGetScaleDone(&slot->sprite);
                slot->frame++;
                if (slot->frame >= 6)
                    slot->frame = 0;
                pairSetFirstResetSecond(&slot->sprite, slot->frame / 2 + 0x8b);
                if (finished & scaleDone)
                    slot->state = 2;
            } else if (state == 2) {
                slot->frame++;
                if (slot->frame >= 6)
                    slot->frame = 0;
                pairSetFirstResetSecond(&slot->sprite, slot->frame / 2 + 0x8b);
            } else if (state == 3) {
                uiSpriteAdvanceAnimation(&slot->sprite, 1.0f);
                if (slot->animation.finished) {
                    slot->state = 0;
                    slot->active = 0;
                    msgBoxFlagsClearBit7(slot->message);
                }
            }
        }
    }
}
}
