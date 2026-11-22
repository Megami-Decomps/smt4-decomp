/* NON_MATCHING: retail passes the color as a float[4] aggregate copied into the emitter and repacks it reading three channels back from memory but alpha from s3; with scalar args armcc forwards all four from registers. */
#include "gfx/MaterialColorCommand.h"

struct Color4 {
    f32 red;
    f32 green;
    f32 blue;
    f32 alpha;
};

/* A particle emitter's two color keys: floats and their packed 8-bit form. */
struct EmitterColors {
    u8 unk00[0x44];
    Color4 startColor;          // 0x44
    u8 unk54[0x20];
    Color4 endColor;            // 0x74
    u8 unk84[0x58];
    u32 packedStart;            // 0xDC
    u8 unkE0[8];
    u32 packedEnd;              // 0xE8
};

/* A group member: the emitters live behind an indirection when it has any. */
struct EffectMember {
    u8 unk00[0x10];
    EmitterColors **emitters;   // 0x10
    u8 unk14[0x10];
    s32 emitterCount;           // 0x24
};

struct EffectGroup {
    u8 unk00[0x164];
    EffectMember **membersBegin; // 0x164
    EffectMember **membersEnd;   // 0x168
};

/* A colour channel in 0..1 as a byte. */
static __inline u32 channel(f32 value)
{
    value = value > 1.0f ? 1.0f : (value > 0.0f ? value : 0.0f);
    return (u32)(value * 255.0f + 0.5f);
}
static __inline u32 packColor(const Color4 &color)
{
    return (channel(color.red) & 0xff) | ((channel(color.green) & 0xff) << 8) |
           ((channel(color.blue) & 0xff) << 16) | (channel(color.alpha) << 24);
}

/* Stores a colour key and its packed 8-bit form. */
static __inline void setColorKey(Color4 *key, u32 *packed, Color4 color)
{
    *key = color;
    *packed = packColor(*key);
}
extern "C" {
/* Tint every member emitter of the group with one color. */
void FUN_00381f00(EffectGroup *group, Color4 color)
{
    s32 count = group->membersEnd - group->membersBegin;
    for (s32 i = 0; i < count; i++) {
        EffectMember *member = group->membersBegin[i];
        EmitterColors *emitter = member->emitterCount > 0 ? *member->emitters : NULL;
        setColorKey(&emitter->startColor, &emitter->packedStart, color);
        setColorKey(&emitter->endColor, &emitter->packedEnd, color);
    }
}
}
