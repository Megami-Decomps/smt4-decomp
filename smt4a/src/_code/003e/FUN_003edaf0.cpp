#include "common.h"

extern "C" {

typedef struct Vec3f {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
} Vec3f;

/* One 12-byte entry of data table 0x48: an id and its 2D position. */
typedef struct PositionEntry {
    /* 0x0 */ s32 id;
    /* 0x4 */ f32 x;
    /* 0x8 */ f32 y;
} PositionEntry;

void *dataTableGet(s32 table, s32 section);
void *dataTableGetEntries(void *section);
s32 dataTableGetCount(void *section);
PositionEntry *FUN_00470714(s32 system);

extern s32 g_aocSystem; /* 0x570280 */

/* Returns the position for an id: the add-on content's when present, else data table 0x48's (z is 0). */
Vec3f FUN_003edaf0(void *self, s32 id)
{
    Vec3f pos;
    PositionEntry *entry;
    PositionEntry *entries;
    void *section;
    s32 count;
    s32 i;

    pos.z = 0.0f;
    entry = FUN_00470714(g_aocSystem);
    if (entry != NULL) {
        pos.x = entry->x;
        pos.y = entry->y;
        return pos;
    }
    section = dataTableGet(0x48, 0);
    entries = (PositionEntry *)dataTableGetEntries(section);
    count = dataTableGetCount(section);
    for (i = 0; i < count; i++) {
        if (entries->id == id) {
            pos.x = entries->x;
            pos.y = entries->y;
            return pos;
        }
        entries++;
    }
    pos.x = pos.z;
    pos.y = pos.z;
    return pos;
}

} /* extern "C" */
