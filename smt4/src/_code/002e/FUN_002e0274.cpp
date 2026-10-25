/* NON_MATCHING: the compiler peels/unrolls the slot search and uses different model-store and position-copy registers; candidate -O2. */
#include "map/MapStateSlots.h"

extern "C" {
extern MapStateSlots *g_mapStateSlots;
void *gameGetMapBlock();
void *asdMdlManagerCreateLoaded(const char *path, u32 flags);
void FUN_002a0428(void *model, s32 enabled);

// Load the map unit model and initialize its first free state slot.
void FUN_002e0274(s32 speed, f32 x, f32 y, f32 z)
{
    gameGetMapBlock();
    MapStateSlots *state = g_mapStateSlots;
    state->unk08 = 0;
    state->unk04 = 24;
    state->unk06 = 1;
    state->unk0A = 1;
    void *model = asdMdlManagerCreateLoaded("map/unit/u002.bam", 0x1C0);
    state = g_mapStateSlots;
    state->references.models[(s16)state->unk0A].model = model;
    u32 index;
    for (index = 0; index < 32; ++index) {
        if (!state->slots[index].active)
            break;
    }
    if (index == 32)
        index = -1;
    state->allocation.selected = index;
    MapStateSlot *slot = &state->slots[(s16)index];
    ++state->allocation.count;
    slot->active = 1;
    slot->motion.flags = 0;
    slot->state = 1;
    slot->motion.heading = 0.0f;
    slot->motion.position[0] = x;
    slot->motion.position[1] = y;
    slot->motion.position[2] = z;
    slot->motion.elapsed = 0;
    slot->motion.mode = 1;
    slot->motion.timer = 0;
    state = g_mapStateSlots;
    slot->motion.modelIndex = state->unk0A;
    slot->motion.speed = -speed;
    slot->motion.ready = 0;
    slot->motion.model = NULL;
    slot->motion.pending = 0;
    s32 sourceIndex = (s16)state->unk0A;
    slot->motion.sourceIndex = sourceIndex;
    FUN_002a0428(state->references.models[sourceIndex].model, 1);
}
}
