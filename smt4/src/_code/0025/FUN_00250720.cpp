/* NON_MATCHING: only the registers of the two loop-invariant table addresses differ (states in r3 and records in ip in retail, swapped here). */
#include "common.h"

extern "C" {

#define SLOT_COUNT 109

/* A 0x288-byte slot record; only the id is set here. */
struct SlotRecord {
    /* 0x000 */ u8 unk000[0x74];
    /* 0x074 */ s16 id;
    /* 0x076 */ u8 unk076[0x212];
};

/* A plain 3-vector. */
struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};

/* A 0x114-byte slot state record with a velocity vector at 0x30. */
struct SlotState {
    /* 0x000 */ u8 unk000[0x30];
    /* 0x030 */ Vec3 velocity;
    /* 0x03C */ u8 unk03C[0xD8];
};

/* The slot manager: only the two record tables are named. */
struct SlotManager {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ SlotState *states;
    /* 0x1E9C */ u8 unk1E9C[0x124];
    /* 0x1FC0 */ SlotRecord *records;
};

s32 FUN_00245cc0(u32 kind);

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
void FUN_00250720(SlotManager *manager)
{
    s16 id = FUN_00245cc0(1);

    for (s32 i = 0; i < SLOT_COUNT; i++) {
        SlotRecord *record = &manager->records[i];
        record->id = id;
        if (i < SLOT_COUNT) {
            slotStateReset(&manager->states[i]);
        }
    }
}

} /* extern "C" */
