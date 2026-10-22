/* NON_MATCHING: mode-table addressing and positional-sound VFP registers differ. */
#include "map/mapIf.h"
#include "map/mapDepart.h"

struct InterfaceSoundPosition {
    u8 unk00[0x1c];
    f32 position[3];
    u8 unk28[0x14];
};

extern "C" {
extern MapIfGlobalsA g_mapIf;
extern GameStateA g_gameState;
extern InterfaceSoundPosition *DAT_00581280;
s32 FUN_003d4ed8(u32, f32, f32, f32);

// Change the active interface mode and reset its movement state.
void FUN_00234044(s32 mode, s32 id)
{
    // The shared leading byte union cannot contain aligned movement fields.
    struct InterfaceModeView {
        u8 unk00[0x16];
        s8 mode;
        u8 unk17;
        u32 active;
        u8 unk1c[0x5c];
        u32 progress; // 0x78
        u8 unk7c[0x28];
        f32 position[3]; // 0xa4
        f32 target[3]; // 0xb0
        u32 timer; // 0xbc
        u8 unkc0[0x118];
        s32 id; // 0x1d8
    };
    InterfaceModeView *state = reinterpret_cast<InterfaceModeView *>(g_mapIf.state);
    if (state->mode == mode && state->id == id)
        return;
    state->mode = static_cast<s8>(mode);
    if (mode == 0) {
        state->active = 0;
    } else {
        state->id = id;
        const f32 *position = DAT_00581280[id].position;
        if (g_gameState.mode <= 100)
            FUN_003d4ed8(0x10002ab, position[0], position[1], position[2]);
        else
            FUN_003d4ed8(0x10002ab, position[0] * (1.0f / 3.0f),
                        position[1] * (1.0f / 3.0f), position[2] * (1.0f / 3.0f));
        state->position[0] = 0.0f;
        state->position[1] = 20.0f;
        state->position[2] = 0.0f;
        state->progress = 0;
        state->timer = 0;
        state->target[0] = state->position[0];
        state->target[1] = 20.0f;
        state->target[2] = state->position[2];
    }
}
}
