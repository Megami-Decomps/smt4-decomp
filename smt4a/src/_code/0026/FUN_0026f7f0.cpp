#include "common.h"
#include "gamedata/SaveSlotTable.h"

namespace {
// A selectable entry in the camp's list: a skill id and the party slot that owns it (-1: the player).
struct CampListEntry {
    u32 id;
    s32 owner;
};

struct CampWork {
    u8 unk0000[0x1EC];
    u8 listView[0x1B70 - 0x1EC];    // 0x1EC: the list widget
    CampListEntry entries[200];     // 0x1B70
};

// A party slot's record: eight skill ids.
struct SlotRecord {
    u8 unk00[0x34];
    u16 skills[8];                  // 0x34
};

}

extern "C" {
extern CampWork *g_camp;
SlotRecord *gameGetSlotRecord(s32 owner);
void sysMemClear(void *memory, u32 size);
void playerGetWords(u16 *words, s32 kind);
void FUN_00203b40(void *view, u32 count, u32 a, u32 b, u32 c, u32 d);
void FUN_003d0bc0(s32 mode);

/* Rebuild the camp list of every skill id the player and the party slots hold. */
void FUN_0026f7f0(void)
{
    CampWork *camp = g_camp;
    SaveSlotTable *slots = gameGetSlotTable();
    u32 count = 0;
    sysMemClear(camp->entries, sizeof(camp->entries[0]) * 200);
    u16 words[8];
    playerGetWords(words, 0);
    for (s32 i = 0; i < 8; i++) {
        if (words[i] != 0) {
            camp->entries[count].id = words[i];
            camp->entries[count].owner = -1;
            count++;
        }
    }
    for (s32 slot = 0; slot < 24; slot++) {
        if (slots->party[slot] < 0) {
            continue;
        }
        SlotRecord *record = gameGetSlotRecord(slots->party[slot]);
        if (record == NULL) {
            continue;
        }
        for (s32 i = 0; i < 8; i++) {
            if (record->skills[i] != 0) {
                camp->entries[count].id = record->skills[i];
                camp->entries[count].owner = slots->party[slot];
                count++;
            }
        }
    }
    FUN_00203b40(camp->listView, count, 11, 1, 1, 1);
    FUN_003d0bc0(9);
}
}
