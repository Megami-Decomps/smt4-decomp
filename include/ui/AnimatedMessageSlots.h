#ifndef UI_ANIMATEDMESSAGESLOTS_H
#define UI_ANIMATEDMESSAGESLOTS_H
#include "ui/UiSpriteState.h"

struct TextMeasureState;
struct AnimatedMessageSlot {
    union {
        u32 unk00;
        u32 messageId;
    };
    s32 frame;
    union {
        u8 unk08[0xC];
        struct { f32 x, y, z; } position;
    };
    union {
        UiSpriteState sprite; // 0x14
        struct {
            u8 unk14[0x87];
            s8 finished; // 0x9b
            s8 visible; // 0x9c
        } animation;
    };
    u8 active; // 0xa0
    u8 unkA1[3];
    s32 state; // 0xa4
    union {
        u32 message; // 0xA8
        TextMeasureState *text;
    };
    union {
        u32 unkAC;
        s32 width; // 0xAC
    };
};
typedef char AnimatedMessageSlotOffsets[
    sizeof(AnimatedMessageSlot) == 0xb0 &&
    offsetof(AnimatedMessageSlot, sprite) == 0x14 &&
    offsetof(AnimatedMessageSlot, animation.finished) == 0x9b &&
    offsetof(AnimatedMessageSlot, active) == 0xa0 &&
    offsetof(AnimatedMessageSlot, state) == 0xa4 &&
    offsetof(AnimatedMessageSlot, message) == 0xa8 ? 1 : -1];
typedef char AnimatedMessageSlotTextOffsets[
    offsetof(AnimatedMessageSlot, messageId) == 0 &&
    offsetof(AnimatedMessageSlot, position) == 8 &&
    offsetof(AnimatedMessageSlot, text) == 0xA8 &&
    offsetof(AnimatedMessageSlot, width) == 0xAC &&
    sizeof(AnimatedMessageSlot) == 0xB0 ? 1 : -1];
#endif
