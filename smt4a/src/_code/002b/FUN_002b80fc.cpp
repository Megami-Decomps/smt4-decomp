#include "map/mapDepart.h"
#include "shard/W6_W6Match1_PositionedStream.h"

/* A map location the player can be near. */
struct NearbyLocation {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 active;
    /* 0x0D */ u8 unk0D[5];
    /* 0x12 */ s16 area;
    /* 0x14 */ s16 tableIndex;
    /* 0x16 */ u8 unk16[6];
    /* 0x1C */ MapVector position;
    /* 0x28 */ u8 unk28[0x14];
};

struct NearbyLocationState {
    /* 0x000 */ NearbyLocation entries[64];
    /* 0xF00 */ u8 unkF00[0xC];
    /* 0xF0C */ u8 active;
    /* 0xF0D */ u8 unkF0D[3];
    /* 0xF10 */ s32 index;
    /* 0xF14 */ s32 area;
    /* 0xF18 */ u32 unkF18;
    /* 0xF1C */ u32 value;
    /* 0xF20 */ char label[1];
};

struct LocationTableEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
    /* 0x0C */ char name[0x2C];
};

extern "C" {
extern NearbyLocationState *g_mapNpcWork;
const LocationTableEntry *dataTable2aGetEntryWithAoc(s32 index);
char *libc_strcpy(char *destination, const char *source);
void FUN_00234044(s32 found, s32 index);

/* Selects the first active map location within 200 units of `point` and publishes its label and
 * interface mode, or clears the selection. */
void FUN_002b80fc(MapVector point)
{
    for (s32 i = 0; i < 64; i++) {
        if (g_mapNpcWork->entries[i].active &&
            distSpatial(point, g_mapNpcWork->entries[i].position) < 200.0f) {
            const LocationTableEntry *entry = dataTable2aGetEntryWithAoc(g_mapNpcWork->entries[i].tableIndex);
            g_mapNpcWork->active = 1;
            g_mapNpcWork->index = i;
            g_mapNpcWork->area = g_mapNpcWork->entries[i].area;
            libc_strcpy(g_mapNpcWork->label, entry->name);
            g_mapNpcWork->value = entry->value;
            FUN_00234044(1, i);
            return;
        }
    }
    FUN_00234044(0, 0);
    g_mapNpcWork->active = 0;
}
}
