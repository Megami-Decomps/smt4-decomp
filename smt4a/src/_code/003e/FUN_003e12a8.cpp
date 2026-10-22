/* NON_MATCHING: retail fills the id buffer with __aeabi_memset4 (built: __aeabi_memset), swaps r0/r1 for the added-id store and stores the request fields in source order */
#include <string.h>
#include "common.h"

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

typedef struct AocLoadRequest {
    /* 0x00 */ u32 kind;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 count;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} AocLoadRequest;

void uiEntriesReset(AocUiList *list);
s32 FUN_0039ba24(u32 *ids, s32 capacity, u32 source);
s32 uiHasEntryId(AocUiList *list, u32 id);
u32 FUN_00409fe8(u32 id, s32 a, s32 b);
void valueSlotsInsert(AocUiList *list, u32 value);
void uiInsertIdInFirstFreeSlot(AocUiList *list, s16 id);
void aocLoaderUpdateRecords(AocLoadRequest *request, AocUiList *list);

/* Rebuilds the list from its source's ids, adding each id it lacks, then requests a kind-11 record update for the added count. */
void FUN_003e12a8(AocLoadRequest *request, AocUiList *list)
{
    u32 ids[42];
    u32 source;
    s32 count;
    s32 added;
    s32 i;

    uiEntriesReset(list);
    source = list->source;
    memset(ids, -1, sizeof(ids));
    count = FUN_0039ba24(ids, 42, source);
    added = 0;
    for (i = 0; i < count; i++) {
        if (!uiHasEntryId(list, ids[i])) {
            valueSlotsInsert(list, FUN_00409fe8(ids[i], 1, 1));
            list->added[added].id = ids[i];
            uiInsertIdInFirstFreeSlot(list, (s16)ids[i]);
            added++;
        }
    }
    request->kind = 11;
    request->unk10 = 0;
    request->count = added;
    request->unk0C = 0;
    aocLoaderUpdateRecords(request, list);
}

} /* extern "C" */
