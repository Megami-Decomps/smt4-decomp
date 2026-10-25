#ifndef GFX_ANIMATION_TEMPLATE_H
#define GFX_ANIMATION_TEMPLATE_H

#include "map/mapDepart.h"

struct UnitTransform {
    UnitTransform();
    u32 kind;
    u32 flags;
    f32 offset;
    f32 scaleX;
    f32 scaleY;
};
struct AnimationSlot {
    AnimationSlot();
    u32 id; // 0x00: -1 means unused
    u16 unk04;
    s8 index; // 0x06: -1 means no matching entry
    u8 unk07;
    u8 unk08[0xc];
    f32 timing; // 0x14
    u8 unk18[8];
};
struct AnimationTemplate {
    AnimationTemplate() : header0(0), header1(1), header2(1), header3(1) {}
    f32 values[6];
    u32 header0; // 0x18
    u32 header1; // 0x1c
    u32 header2; // 0x20
    u32 header3; // 0x24
    UnitTransform scales[10]; // 0x28
};
struct AnimationOrigin : MapVector {
    AnimationOrigin(f32 initialX, f32 initialY, f32 initialZ)
    {
        x = initialX;
        y = initialY;
        z = initialZ;
    }
};
struct AnimationLegacyDefaults {
    AnimationLegacyDefaults() : origin(0.0f, 0.0f, 0.0f) {}
    AnimationOrigin origin;
    AnimationTemplate animation;
};
typedef char AnimationTemplateLayoutCheck[
    sizeof(UnitTransform) == 0x14 && offsetof(UnitTransform, scaleX) == 0xc &&
    sizeof(AnimationSlot) == 0x20 && offsetof(AnimationSlot, index) == 6 &&
    offsetof(AnimationSlot, timing) == 0x14 && offsetof(AnimationTemplate, header0) == 0x18 &&
    sizeof(AnimationTemplate) == 0xf0 && offsetof(AnimationTemplate, scales) == 0x28 &&
    sizeof(AnimationOrigin) == 0xc && sizeof(AnimationLegacyDefaults) == 0xfc &&
    offsetof(AnimationLegacyDefaults, animation) == 0xc ? 1 : -1];

#endif
