/* NON_MATCHING: memset lowers to __aeabi_memset instead of retail __aeabi_memset4 (same as FUN_00232698); the demon-id switch also keeps case 1-3 stores addressed from the world base in retail while built folds them into predicated stores off r7 */
#include "common.h"
#include <stddef.h>
#include <string.h>

/* An entry the party setup wrote: a flag word and the demon id. */
struct PartyEntry {
    u32 flag;
    s32 id;
};

struct PartyObject {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 id;
};

struct PartyRecord {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u16 demonId;
};

struct DemonRecord {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ s16 slot;
};

struct PartyWorld {
    /* 0x0000 */ u8 unk0000[0x1FE4];
    /* 0x1FE4 */ PartyEntry entries[42];
    /* 0x2134 */ PartyObject *objects[42];
    /* 0x21DC */ u8 unk21DC[0xD58];
    /* 0x2F34 */ s32 partyCount;
    /* 0x2F38 */ u8 unk2F38[0x644];
    /* 0x357C */ u8 block357C[0xE10];
    /* 0x438C */ s32 addedCount;
    /* 0x4390 */ s32 selectedCount;
    /* 0x4394 */ u8 unk4394[0x14];
    /* 0x43A8 */ u32 defaults[42];
    /* 0x4450 */ u8 unk4450[0x58];
    /* 0x44A8 */ u32 flags;
};
typedef char PartyWorldLayout[offsetof(PartyWorld, flags) == 0x44A8 && offsetof(PartyWorld, defaults) == 0x43A8 &&
    offsetof(PartyWorld, objects) == 0x2134 ? 1 : -1];

extern "C" {

DemonRecord *dataTable00FindById(u32 id);
void memClear(void *dest, s32 size);
PartyRecord *saveGetIndexedMapValue(s32 index);
PartyObject *FUN_00294090(s32 id, s32 arg);

/* Builds the party list for a new battle setup: picks the demon ids (the tutorial defaults, the first party-count
 * defaults, or the saved map's demons), then creates a party object for each id that has none yet. */
void FUN_003398e4(PartyWorld *world)
{
    s32 ids[42];
    s32 selected;
    s32 added;
    s32 i;
    s32 j;

    for (i = 0; i < 42; i++) {
        world->entries[i].flag = 0;
        world->entries[i].id = -1;
    }
    memset(ids, 0xFF, sizeof(ids));
    memset(world->defaults, 0xFF, sizeof(world->defaults));
    memClear(world->block357C, sizeof(world->block357C));
    if ((world->flags & 0x40) != 0 || (u32)(world->partyCount - 1) <= 3) {
        selected = world->partyCount;
        if ((world->flags & 0x40) != 0) {
            selected = 4;
        }
        for (i = 0; i < selected; i++) {
            if (i == 0) {
                world->defaults[0] = 0x225;
            } else if (i == 1) {
                world->defaults[1] = 0x1E1;
            } else if (i == 2) {
                world->defaults[2] = 0x218;
            } else if (i == 3) {
                world->defaults[3] = 0x83;
            }
            ids[i] = dataTable00FindById((u16)world->defaults[i])->slot;
        }
        world->selectedCount = selected;
    } else {
        selected = 0;
        j = 0;
        do {
            PartyRecord *record = saveGetIndexedMapValue(j);

            if (record->demonId != 0) {
                world->defaults[selected] = record->demonId;
                ids[selected] = dataTable00FindById(record->demonId)->slot;
                selected++;
            }
        } while (selected < 4 && ++j < 12);
        world->selectedCount = selected;
    }
    added = 0;
    for (i = 0; i < world->selectedCount; i++) {
        s32 id = ids[i];
        PartyObject *object;

        for (j = 0; j < 42; j++) {
            if (world->objects[j] != NULL && world->objects[j]->id == id) {
                break;
            }
        }
        if (j < 42) {
            continue;
        }
        object = FUN_00294090(id, 1);
        for (j = 0; j < 42; j++) {
            if (world->objects[j] == NULL) {
                world->objects[j] = object;
                break;
            }
        }
        world->entries[added++].id = ids[i];
    }
    world->addedCount = added;
}

} /* extern "C" */
