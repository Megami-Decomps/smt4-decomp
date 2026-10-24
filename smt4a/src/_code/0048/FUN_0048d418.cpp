/* NON_MATCHING: close: register assignment (retail: count r6, loop index r5) and the placement of the gameState test / mode-group compare chains differ; logic and the three loops are the same */
#include "map/mapDepart.h"

/* The destination list this function fills: entries of {active, id} followed by the entry count. */
struct SelectableEntry {
    /* 0x0 */ u16 active;
    /* 0x2 */ s16 id;
};

struct SelectableList {
    /* 0x00000 */ u8 unk00000[0x20528];
    /* 0x20528 */ SelectableEntry entries[32];
    /* 0x205A8 */ s32 count;
};

/* A record of data table 0x2B (section 1). */
struct TableRecord {
    /* 0x0 */ s8 kind;
    /* 0x1 */ u8 first;
    /* 0x2 */ u8 second;
    /* 0x3 */ s8 id;
    /* 0x4 */ u16 requiredFlag;
    /* 0x6 */ u16 excludedFlag;
};

extern "C" {

extern GameStateA g_gameState;

s32 dataTable2BType1Count(u32 *view);
TableRecord *dataTable2BType1GetEntry(u32 *view, s32 index);
s32 gameFlagIsSet(u32 flag);
s32 FUN_004083a8(s32 first, s32 second);

/* Collects the distinct ids of the table records of one kind that are currently available, sorted in descending
 * order, into the selectable list. */
void FUN_0048d418(SelectableList *list, s32 kind)
{
    s16 ids[32] = {0};
    u32 view;
    s32 i = 0;
    s32 count = 0;
    s32 j;

    if (dataTable2BType1Count(&view) > 0) {
        do {
            TableRecord *record = dataTable2BType1GetEntry(&view, i);
            s32 found;

            if (record->kind != kind) {
                continue;
            }
            found = 0;
            if (kind == 0x17) {
                s32 mode = g_gameState.submode;

                if (((mode == 1 || mode == 2) || (mode == 3 || mode == 6)) &&
                    (record->first == 0xB0 || record->first == 0x7F || record->first == 0x80)) {
                    continue;
                }
                if ((mode == 4 || mode == 5) && (record->first == 0x79 || record->first == 0x7A ||
                                                 record->first == 0x7D || record->first == 0x7E)) {
                    continue;
                }
            }
            if (!(*(s32 *)((u8 *)&g_gameState + 0x660) != 0 ||
                  ((record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag) != 0) &&
                   (record->excludedFlag == 0 || gameFlagIsSet(record->excludedFlag) == 0) &&
                   FUN_004083a8(record->first, record->second) != 0))) {
                continue;
            }
            for (j = 0; j < count; j++) {
                if (ids[j] == record->id) {
                    found = 1;
                }
            }
            if (!found) {
                ids[count++] = record->id;
            }
        } while (++i < dataTable2BType1Count(&view));
        for (i = 0; i < count - 1; i++) {
            for (j = i + 1; j < count; j++) {
                if (ids[j] > ids[i]) {
                    s16 swap = ids[i];

                    ids[i] = ids[j];
                    ids[j] = swap;
                }
            }
        }
        for (i = 0; i < count; i++) {
            list->entries[i].active = 1;
            list->entries[i].id = ids[i];
        }
    }
    list->count = count;
}

} /* extern "C" */
