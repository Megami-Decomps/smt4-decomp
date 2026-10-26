/* NON_MATCHING: only the callee-saved registers for `target` and `key` are swapped (retail: key in sl, target in fp) */
#include "common.h"

extern "C" {

/* One placement of a group: an id (major * 1000 + minor) and an offset. */
typedef struct PlacementEntry {
    /* 0x00 */ s32 major;
    /* 0x04 */ s32 minor;
    /* 0x08 */ s32 x;
    /* 0x0C */ s32 y;
    /* 0x10 */ s32 z;
} PlacementEntry;

typedef struct PlacementGroup PlacementGroup;

struct PlacementGroup {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 count;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ PlacementEntry *entries;
    /* 0x10 */ PlacementGroup *next;
};

typedef struct PlacementList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ PlacementGroup *first;
} PlacementList;

typedef struct PlacementOwner {
    /* 0x00 */ u32 handle;
    /* 0x04 */ PlacementList *groups;
} PlacementOwner;

typedef struct PlacementRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ PlacementOwner *owner;
} PlacementRecord;

PlacementRecord *packageFindFileRefByName(u32 a, s32 kind, u32 key);
void spriteDrawFromTextureTable(u32 handle, u32 target, s32 mode, u32 key, s32 id, s32 x, s32 y, s32 z);

/* Returns the list's group with the id, or NULL. */
static PlacementGroup *placementFindGroup(PlacementList *list, s32 id)
{
    PlacementGroup *group;

    for (group = list->first; group != NULL; group = group->next) {
        if (group->id == id) {
            return group;
        }
    }
    return NULL;
}

/* Places every entry of the group `id`, offset by (x, y, z); returns 0 when the record or group is missing. */
u32 FUN_00471244(u32 a, u32 unused, u32 target, u32 key, s32 id, s32 x, s32 y, s32 z)
{
    PlacementRecord *record = packageFindFileRefByName(a, 0x17, key);
    PlacementOwner *owner;
    PlacementGroup *group;
    s32 i;

    if (record == NULL || (owner = record->owner) == NULL) {
        return 0;
    }
    if (owner->groups == NULL) {
        return 0;
    }
    group = placementFindGroup(owner->groups, id);
    if (group == NULL) {
        return 0;
    }
    for (i = 0; i < group->count; i++) {
        PlacementEntry *entry = &group->entries[i];
        spriteDrawFromTextureTable(owner->handle, target, 0xf, key, entry->major * 1000 + entry->minor, entry->x + x, entry->y + y,
                     entry->z + z);
    }
    return 1;
}

} /* extern "C" */
