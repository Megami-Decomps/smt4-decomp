#include "common.h"

extern "C" {

typedef struct HakaiBoxEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
    /* 0x14 */ f32 z;
    /* 0x18 */ f32 heading;
    /* 0x1C */ u8 unk1c[8];
    /* 0x24 */ u32 id;
    /* 0x28 */ u8 unk28[0x28];
    /* 0x50 */ s16 kind;
    /* 0x52 */ u8 unk52[2];
} HakaiBoxEntry;

typedef struct HakaiBoxState {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ HakaiBoxEntry entries[16];
} HakaiBoxState;

extern HakaiBoxState *g_mapHakai;

s32 gameFlagIsSet(u32 flag);
s32 gameFlagsTestFirstBank(s32 flag);
f32 FUN_001bc124(f32 angle);
f32 FUN_001bbf0c(f32 angle);
void FUN_00244c70(u32 id, u32 kind, s32 variant, u32 option, f32 x, f32 y, f32 z, f32 yaw);
s32 sceneRegisterBoxEffect(u32 id, u32 value, const char *name, u32 resource,
    u32 effect, s32 variant, u8 option0, u8 option1, u8 option2,
    u8 option3, u8 option4, u8 option5, u8 flag0, u8 flag1, u8 option,
    u32 data0, u32 data1, u32 data2, u32 priority,
    f32 x, f32 y, f32 z, f32 extent0, f32 extent1, f32 extent2, f32 yaw);

/* Spawns a box effect 150 units in front of every active kind-3 destructible whose flag is clear; the effect depends on flag 0x492. */
void FUN_002b7ce0(void)
{
    for (s32 i = 0; i < 16; i++) {
        HakaiBoxState *state = g_mapHakai;
        HakaiBoxEntry *entry = &state->entries[i];
        if (entry->active != 0 && entry->kind == 3 && gameFlagsTestFirstBank((s16)entry->id) == 0) {
            if (gameFlagIsSet(0x492) != 0) {
                f32 x = entry->x + FUN_001bc124(entry->heading * 0.017453292f) * 150.0f;
                f32 z = entry->z + FUN_001bbf0c(entry->heading * 0.017453292f) * 150.0f;
                sceneRegisterBoxEffect(0x203, 0, "BOX", 0x35, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                    entry->id, 0, 0, 99, x, entry->y, z, 400.0f, 200.0f, 120.0f, entry->heading);
                FUN_00244c70(entry->id, 0x25, -1, 0, x, entry->y, z, entry->heading);
            } else {
                f32 x = entry->x + FUN_001bc124(entry->heading * 0.017453292f) * 150.0f;
                f32 z = entry->z + FUN_001bbf0c(entry->heading * 0.017453292f) * 150.0f;
                sceneRegisterBoxEffect(0, 0, "STELSIRA", 0x4d, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                    entry->id, 0, 0, 99, x, entry->y, z, 400.0f, 200.0f, 120.0f, entry->heading);
                FUN_00244c70(entry->id, 0x28, -1, 0, x, entry->y, z, entry->heading);
            }
        }
    }
}

} /* extern "C" */
