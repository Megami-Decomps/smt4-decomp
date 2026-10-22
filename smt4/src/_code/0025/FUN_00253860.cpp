#include "common.h"

struct MapSoundOwner {
    u8 unk00[0x20];
    struct Position { f32 x, y, z; } position; // 0x20
    u8 unk2c[0x13c];
    u32 soundHandle; // 0x168
    u8 unk16c[8];
    u32 kind; // 0x174
};

extern "C" {
u32 FUN_00291e40(u32 soundId, f32 x, f32 y, f32 z);

// Play a kind-specific positional sound, retaining the looping sound's handle.
void FUN_00253860(MapSoundOwner *owner, s32 variant)
{
    u32 soundId = 0;
    MapSoundOwner::Position position = owner->position;
    position.y += 100.0f;
    switch (owner->kind) {
    case 0: case 1: case 11: soundId = 0x1000242 + variant; break;
    case 2: case 12: soundId = 0x1000245 + variant; break;
    case 3: case 13: soundId = 0x1000248 + variant; break;
    case 4: case 6: case 14: case 16: soundId = 0x100024b + variant; break;
    case 5: case 15: soundId = 0x100024e + variant; break;
    case 7: case 9: case 17: case 19: soundId = 0x1000251 + variant; break;
    case 8: case 18: soundId = 0x1000254 + variant; break;
    case 10: case 20: soundId = 0x1000257 + variant; break;
    }
    if (variant == 1) {
        owner->soundHandle = FUN_00291e40(soundId, position.x, position.y, position.z);
    } else {
        FUN_00291e40(soundId, position.x, position.y, position.z);
    }
}
}
