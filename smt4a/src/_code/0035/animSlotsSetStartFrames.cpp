#include "common.h"

/* An animation the slots play (0x48 bytes). */
struct SlotAnimation {
    /* 0x00 */ u8 unk00[0x48];
};

/* One animated slot (0x20 bytes). */
struct AnimatedSlot {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 frame;
    /* 0x06 */ s8 animation; /* index into the animations, -1 = none */
    /* 0x07 */ u8 unk07[0x19];
};

extern "C" {
f32 asdAnimGetTrackLastFrame(SlotAnimation *animation, s32 track);
s32 FUN_00184964(s32 minimum, s32 maximum);

/* Sets each animated slot's starting frame: 0, a random multiple of 4, or a random frame of its
 * animation, wrapped to the animation's length. */
void animSlotsSetStartFrames(AnimatedSlot *slots, s32 count, s32 mode, SlotAnimation *animations)
{
    for (s32 i = 0; i < count; i++) {
        AnimatedSlot *slot = &slots[i];
        if (slot->animation >= 0) {
            s32 lastFrame = (s32)asdAnimGetTrackLastFrame(&animations[slot->animation], 0);
            switch (mode) {
            case 0:
                slot->frame = 0;
                break;
            case 1:
                slot->frame = FUN_00184964(0, 4) << 2;
                break;
            case 2:
                slot->frame = FUN_00184964(0, lastFrame);
                break;
            }
            if (slot->frame >= lastFrame) {
                slot->frame %= lastFrame;
            }
        }
    }
}
}
