#include "common.h"
#include "util/FUN_003ee0c0.h"

extern "C" {

#define SLOT_COUNT 109

/* A 0x408-byte slot record; only the id is set here. */
struct SlotRecord {
    /* 0x000 */ u8 unk000[0x78];
    /* 0x078 */ s32 id;
    /* 0x07C */ u8 unk07C[0x38C];
};

/* A plain 3-vector. */
struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};

/* A 0x1D0-byte slot state record with a velocity vector at 0x30. */
struct SlotState {
    /* 0x000 */ u8 unk000[0x30];
    /* 0x030 */ Vec3 velocity;
    /* 0x03C */ u8 unk03C[0x194];
};

/* The slot manager: only the two record tables are named. */
struct SlotManager {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ SlotState *states;
    /* 0x1ED8 */ u8 unk1ED8[0x124];
    /* 0x1FFC */ SlotRecord *records;
};

s32 FUN_004c53fc(u32 kind);

static __inline void vec3Clear(Vec3 *v)
{
    v->z = 0.0f;
    v->y = 0.0f;
    v->x = 0.0f;
}

static __inline void slotStateReset(SlotState *state)
{
    vec3Clear(&state->velocity);
}

/* Gives every slot the default id and clears its velocity. */
void FUN_003ee0c0(void *handle)
{
    SlotManager *manager = static_cast<SlotManager *>(handle);
    s16 id = FUN_004c53fc(1);

    for (s32 i = 0; i < SLOT_COUNT; i++) {
        SlotRecord *record = &manager->records[i];
        record->id = id;
        if (i < SLOT_COUNT) {
            slotStateReset(&manager->states[i]);
        }
    }
}

} /* extern "C" */
