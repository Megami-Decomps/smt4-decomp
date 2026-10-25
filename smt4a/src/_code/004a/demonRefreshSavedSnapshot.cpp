#include "gamedata/DemonSaveSnapshot.h"
extern "C" {
DemonSaveRefreshSource *slotEntryFindById(u16 id);
s32 gameDataCopySaveEntry(u16 id, DemonSaveSnapshot *snapshot);
void gameDataStoreSavedRecord(u16 id, const DemonSaveSnapshot *snapshot);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Refresh an existing saved demon with its current level, stats, skills and inheritance. */
void demonRefreshSavedSnapshot(u32 unused, u16 id)
{
    DemonSaveRefreshSource *demon = slotEntryFindById(id);
    DemonSaveSnapshot snapshot;
    if (gameDataCopySaveEntry(id, &snapshot)) {
        snapshot.level = demon->level;
        snapshot.experience = demon->experience;
        snapshot.id = demon->id;
        snapshot.variant = demon->variant;
        for (s32 index = 0; index < 5; ++index) {
            snapshot.attributes[index] = demon->attributes[index] + demon->bonuses[index];
            snapshot.skills[index] = demon->skills[index];
        }
        snapshot.data = demon->data;
        snapshot.extra = demon->extra;
        __aeabi_memcpy4(snapshot.inherited, demon->inherited, sizeof(snapshot.inherited));
        snapshot.flags = demon->flags & 0xF;
        gameDataStoreSavedRecord(id, &snapshot);
    }
}
}
