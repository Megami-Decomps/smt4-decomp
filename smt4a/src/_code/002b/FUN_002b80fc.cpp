/* NON_MATCHING: nearby-location distance arguments and result metadata use different saved-register allocation. */
/* Selects the first active map location within range and publishes its label and interface mode. */
#include "common.h"

struct NearbyLocation {
    u8 unk00[0xC];
    u8 active;
    u8 unk0D[5];
    s16 area;
    s16 tableIndex;
    u8 unk16[6];
    f32 position[3];
    u8 unk28[0x14];
};
struct NearbyLocationState {
    NearbyLocation entries[64];
    u8 unkF00[0xC];
    u8 active;
    u8 unkF0D[3];
    s32 index;
    s32 area;
    u32 unkF18;
    u32 value;
    char label[1];
};
struct LocationTableEntry {
    u8 unk00[8];
    u32 value;
    char name[0x2C];
};
extern "C" {
extern NearbyLocationState *DAT_00581280;
f32 distSpatial(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);
const LocationTableEntry *dataTable2aGetEntryWithAoc(u32 index);
char *libc_strcpy(char *destination, const char *source);
void FUN_00234044(s32 mode, s32 id);

void FUN_002b80fc(f32 x, f32 y, f32 z)
{
    for (s32 i = 0; i < 64; ++i) {
        NearbyLocation *location = &DAT_00581280->entries[i];
        if (location->active && distSpatial(x, y, z, location->position[0], location->position[1], location->position[2]) < 200.0f) {
            const LocationTableEntry *entry = dataTable2aGetEntryWithAoc(DAT_00581280->entries[i].tableIndex);
            NearbyLocationState *state = DAT_00581280;
            state->active = 1;
            state->index = i;
            state->area = state->entries[i].area;
            libc_strcpy(state->label, entry->name);
            DAT_00581280->value = entry->value;
            FUN_00234044(1, i);
            return;
        }
    }
    FUN_00234044(0, 0);
    DAT_00581280->active = 0;
}
}
