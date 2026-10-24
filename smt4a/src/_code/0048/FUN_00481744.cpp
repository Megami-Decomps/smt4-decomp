#include "common.h"

struct Vec3 {
    f32 x, y, z;
};

struct Object00481744 {
    /* 0x00 */ u8 unk00[0x6c];
    /* 0x6c */ u32 unk6c;
    /* 0x70 */ u8 unk70[0xc];
    /* 0x7c */ u32 flags;
    /* 0x80 */ u8 unk80[0x18];
    /* 0x98 */ Vec3 position;
};

struct GameState00481744 {
    /* 0x000 */ u8 unk000[0x5c8];
    /* 0x5c8 */ u8 value;
};

extern "C" {

extern GameState00481744 g_gameState;

/* Resets the object's position to (0, -500, 0), sets flag 4 and returns the game state's byte at 0x5c8. */
u8 FUN_00481744(Object00481744 *object)
{
    object->unk6c = 0;
    object->flags |= 4;
    object->position.x = 0.0f;
    object->position.y = -500.0f;
    object->position.z = 0.0f;
    return g_gameState.value;
}

} /* extern "C" */
