/* NON_MATCHING: same instructions as retail except allocation: retail keeps world in r5 and the loop index in r4 (built swaps them) and loads the found object's id into r3 rather than r1. */
#include "common.h"
#include "gamedata/NkmEnemyLookup.h"
#include <stddef.h>
#include <string.h>
#include "AsdSDK/AsdMemUtil.h"
#include "shard/W6_W6Match3_NameFormState.h"

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

PartyRecord *saveGetIndexedMapValue(s32 index);
PartyObject *eventResourceCacheAcquire(s32 id, s32 arg);
void __aeabi_memset4(void *destination, u32 size, s32 value);

/* Builds the party list for a new battle setup: picks the demon ids (the tutorial defaults, the first party-count
 * defaults, or the saved map's demons), then creates a party object for each id that has none yet. */
void btlSetupPartyResources(PartyWorld *world)
{
    s32 ids[42];
    s32 selected;
    s32 added;
    s32 i;
    s32 j;

    for (s32 k = 0; k < 42; k++) {
        world->entries[k].flag = 0;
        world->entries[k].id = -1;
    }
    __aeabi_memset4(ids, sizeof(ids), -1);
    __aeabi_memset4(world->defaults, sizeof(world->defaults), -1);
    memClear(world->block357C, sizeof(world->block357C));
    if ((world->flags & 0x40) != 0 || (u32)(world->partyCount - 1) <= 3) {
        selected = world->partyCount;
        if ((world->flags & 0x40) != 0) {
            selected = 4;
        }
        for (i = 0; i < selected; i++) {
            switch (i) {
            case 0:
                world->defaults[i] = 0x225;
                break;
            case 1:
                world->defaults[i] = 0x1E1;
                break;
            case 2:
                world->defaults[i] = 0x218;
                break;
            case 3:
                world->defaults[i] = 0x83;
                break;
            }
            ids[i] = nkmEnemyFindById((u16)world->defaults[i])->portraitId;
        }
        world->selectedCount = selected;
    } else {
        selected = 0;
        j = 0;
        do {
            PartyRecord *record = saveGetIndexedMapValue(j);

            if (record->demonId != 0) {
                world->defaults[selected] = record->demonId;
                ids[selected] = nkmEnemyFindById((u16)world->defaults[selected])->portraitId;
                selected++;
            }
        } while (selected < 4 && ++j < 12);
        world->selectedCount = selected;
    }
    added = 0;
    for (i = 0; i < world->selectedCount; i++) {
        s32 id = ids[i];
        PartyObject *object;

        bool found = false;
        for (j = 0; j < 42; j++) {
            if (world->objects[j] != NULL && world->objects[j]->id == id) {
                found = true;
                break;
            }
        }
        if (found) {
            continue;
        }
        object = eventResourceCacheAcquire(id, 1);
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
