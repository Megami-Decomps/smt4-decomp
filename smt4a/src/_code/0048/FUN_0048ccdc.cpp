#include "shard/W6_W6Match8_AnimatedSprite.h"

struct UiSpriteParentPrefix {
    u32 words[8];
};

struct SpriteSetupOwner {
    u8 unk0000[0xc20]; // 0x0000
    UiSpriteParentPrefix parent; // 0x0c20
    u8 unk0c40[0x728]; // 0x0c40
    u8 flags[3];        // 0x1368
    u8 unk136b;         // 0x136b
    UiAnimatedSprite sprite; // 0x136c
};

extern "C" {
void FUN_0014e220(UiAnimatedSprite*, u32, u32, u32, UiSpriteParentPrefix*, u16, f32);
void uiSpriteSetKeyframe(UiAnimatedSprite*, s32, s32);

// Initialize the group's sprite and select its fifth keyframe.
void FUN_0048ccdc(SpriteSetupOwner* owner)
{
    owner->flags[1] = 1;
    owner->flags[0] = 0;
    owner->flags[2] = 0;
    FUN_0014e220(&owner->sprite, 0x13, 0x111a, 0x1c, &owner->parent, 0x15, 1.0f);
    uiSpriteSetKeyframe(&owner->sprite, 5, 0);
}
}
