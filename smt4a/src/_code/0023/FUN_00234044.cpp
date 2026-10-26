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
    // The movement block starts 0x48 bytes into the state.
    struct InterfaceMovementBlock {
        u8 unk00[0x30];
        u32 progress; // 0x30
        u8 unk34[0x28];
        f32 position[3]; // 0x5c
        f32 target[3]; // 0x68
        u32 timer; // 0x74
        u8 unk78[0x118];
        s32 id; // 0x190
    };
    // The shared leading byte union cannot contain aligned movement fields.
    struct InterfaceModeView {
        u8 unk00[0x16];
        s8 mode;
        u8 unk17;
        u32 active;
        u8 unk1c[0x2c];
        InterfaceMovementBlock block; // 0x48
    };
    InterfaceModeView *state = reinterpret_cast<InterfaceModeView *>(g_mapIf.state);
    InterfaceMovementBlock *block = &state->block;
    if (state->mode == mode && block->id == id)
        return;
    state->mode = static_cast<s8>(mode);
    if (mode == 0) {
        state->active = 0;
    } else {
        block->id = id;
        const f32 *position = DAT_00581280[id].position;
        if (g_gameState.mode <= 100)
            FUN_003d4ed8(0x10002ab, position[0], position[1], position[2]);
        else
            FUN_003d4ed8(0x10002ab, position[0] * (1.0f / 3.0f),
                        position[1] * (1.0f / 3.0f), position[2] * (1.0f / 3.0f));
        block->position[0] = 0.0f;
        block->position[1] = 20.0f;
        block->position[2] = 0.0f;
        block->progress = 0;
        block->timer = 0;
        block->target[0] = block->position[0];
        block->target[1] = 20.0f;
        block->target[2] = block->position[2];
    }
}
}
