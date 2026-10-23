/* NON_MATCHING: finished/visible flag loads and frame reload scheduling differ; animation speed restored. */
#include "ui/AnimatedMessageSlots.h"

extern "C" {
void FUN_00163aa4(UiSpriteState *, f32);
void msgBoxFlagsClearBit7(u32);
void pairSetFirstResetSecond(UiSpriteState *, s32);

// Advance twelve message indicators through opening, looping, and closing animations.
void FUN_00416840(AnimatedMessageSlot *slots)
{
    for (s32 index = 0; index < 12; ++index) {
        AnimatedMessageSlot *slot = &slots[index];
        bool active = slot->active != 0;
        s32 state = active ? slot->state : 0;
        if (active && state != 0) {
            if (state == 1) {
                FUN_00163aa4(&slot->sprite, 1.0f);
                s8 finished = slot->animation.finished;
                s8 visible = slot->animation.visible;
                if (++slot->frame >= 6)
                    slot->frame = 0;
                pairSetFirstResetSecond(&slot->sprite, slot->frame / 2 + 0x8b);
                if (finished & visible)
                    slot->state = 2;
            } else if (state == 2) {
                if (++slot->frame >= 6)
                    slot->frame = 0;
                pairSetFirstResetSecond(&slot->sprite, slot->frame / 2 + 0x8b);
            } else if (state == 3) {
                FUN_00163aa4(&slot->sprite, 1.0f);
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
