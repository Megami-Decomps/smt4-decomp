#include "common.h"

struct MapSoundPosition { f32 x, y, z; };
struct MapSoundActor {
    u8 unk000[0x20];
    MapSoundPosition position;
    u8 unk02c[0x140];
    u32 sound; // 0x16c
    u8 unk170[0xc];
    u32 kind; // 0x17c
};
extern "C" {
u32 FUN_003d4ed8(u32 id, f32 x, f32 y, f32 z);

// Play the actor-kind sound above its position, retaining the handle for the looping variant.
void mapPlayActorKindSound(MapSoundActor *actor, u32 variant)
{
    MapSoundPosition position = actor->position;
    position.y += 100.0f;
    u32 id = 0;
    switch (actor->kind) {
    case 0: case 1: case 11: id = 0x10002ee + variant; break;
    case 2: case 12: id = variant + 0x10002f1; break;
    case 3: case 13: id = variant + 0x10002f4; break;
    case 4: case 6: case 14: case 16: id = 0x10002f7 + variant; break;
    case 5: case 15: id = 0x10002fa + variant; break;
    case 7: case 9: case 17: case 19: id = variant + 0x10002fd; break;
    case 8: case 18: id = variant + 0x1000300; break;
    case 10: case 20: id = 0x1000303 + variant; break;
    }
    if (variant == 1)
        actor->sound = FUN_003d4ed8(id, position.x, position.y, position.z);
    else
        FUN_003d4ed8(id, position.x, position.y, position.z);
}
}
