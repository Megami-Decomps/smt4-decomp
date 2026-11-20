/* NON_MATCHING: retail keeps the load-state stores in source order (state, count, recordCount, frame); the build schedules the zero stores first. */
#include "common.h"
#include "battle/BattleArrangementLoad.h"

extern "C" {

typedef struct AddedEntry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[4];
} AddedEntry;

typedef struct AocUiList {
    /* 0x0000 */ u8 unk0000[0x1ec4];
    /* 0x1EC4 */ u32 source;
    /* 0x1EC8 */ u8 unk1ec8[0x2020 - 0x1ec8];
    /* 0x2020 */ AddedEntry added[42];
} AocUiList;


void __aeabi_memset4(void *destination, s32 size, s32 value);
void uiEntriesReset(AocUiList *list);
s32 versionedResourceCollectIds(u32 *ids, s32 capacity, u32 source);
s32 uiHasEntryId(AocUiList *list, u32 id);
u32 resourceCacheGetOrLoadModel(u32 id, s32 a, s32 b);
void valueSlotsInsert(AocUiList *list, u32 value);
void uiInsertIdInFirstFreeSlot(AocUiList *list, s16 id);
void aocLoaderUpdateRecords(BattleArrangementLoadState *request, AocUiList *list);

/* Rebuilds the list from its source's ids, adding each id it lacks, then requests a kind-11 record update for the added count. */
void FUN_003e12a8(BattleArrangementLoadState *request, AocUiList *list)
{
    u32 ids[42];
    u32 source;
    s32 count;
    u32 value;
    s32 added;
    s32 i;

    uiEntriesReset(list);
    source = list->source;
    __aeabi_memset4(ids, sizeof(ids), -1);
    count = versionedResourceCollectIds(ids, 42, source);
    added = 0;
    i = 0;
    if (i < count) {
        do {
            if (uiHasEntryId(list, ids[i]) == 0) {
                value = resourceCacheGetOrLoadModel(ids[i], 1, 1);
                valueSlotsInsert(list, value);
                list->added[added].id = ids[i];
                uiInsertIdInFirstFreeSlot(list, (s16)ids[i]);
                added++;
            }
            i++;
        } while (i < count);
    }
    request->state = 11;
    request->count = 0;
    request->recordCount = added;
    request->frame = 0;
    aocLoaderUpdateRecords(request, list);
}

} /* extern "C" */
