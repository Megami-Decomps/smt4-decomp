#include "camp/CampStateA.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {
void sysMemClear(void *memory, u32 size);
void playerGetWords(u16 *words, s32 kind);
void gridNavigationConfigure(void *view, u32 count, u32 a, u32 b, u32 c, u32 d);
void campRebuildListByMode(s32 mode);

/* Rebuild the camp list of every skill id the player and the party slots hold. */
void FUN_0026f7f0(void)
{
    CampStateA *camp = g_camp;
    SaveSlotTableA *slots = gameGetSlotTable();
    u32 count = 0;
    sysMemClear(camp->entries, sizeof(camp->entries[0]) * 200);
    u16 words[8];
    playerGetWords(words, 0);
    for (s32 i = 0; i < 8; i++) {
        if (words[i] != 0) {
            camp->entries[count].id = words[i];
            camp->entries[count].unit = -1;
            count++;
        }
    }
    for (s32 slot = 0; slot < 24; slot++) {
        if (slots->party[slot] < 0) {
            continue;
        }
        SlotRecordA *record = gameGetSlotRecord(slots->party[slot]);
        if (record == NULL) {
            continue;
        }
        for (s32 i = 0; i < 8; i++) {
            if (record->skills[i] != 0) {
                camp->entries[count].id = record->skills[i];
                camp->entries[count].unit = slots->party[slot];
                count++;
            }
        }
    }
    gridNavigationConfigure(&camp->grids[3], count, 11, 1, 1, 1);
    campRebuildListByMode(9);
}
}
