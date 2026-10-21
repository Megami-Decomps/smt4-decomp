#include "common.h"
struct Vector3 { f32 x,y,z; };
struct PositionOwner { u8 unk000[0x1B4]; Vector3 position; };
/* Updates the object's position. */
extern "C" void FUN_003fd7b4(PositionOwner *owner, f32 x, f32 y, f32 z) {
    owner->position.x = x; owner->position.y = y; owner->position.z = z;
}
