#include "field/FieldPlacementList.h"
#include "runtime/String.h"

extern "C" {
const FieldPlacementRecord *fieldFindAreaPlacementRecord(s32 index);
void FUN_00482fe8(FieldPlacementList *list);
void enemySpawnChooseCandidates(FieldPlacementList *list, s32 mode);
s32 gameFlagIsSet(s32 flag);
s32 dataTableGetRecordFortyOne(void);

// Build the area's eligible placement list and populate its initial objects.
void fieldBuildAreaPlacementList(FieldPlacementList *list)
{
    if (list->flags & 1)
        return;

    list->count = 0;
    s32 count = dataTableGetRecordFortyOne();
    for (s32 index = 0; index < count; ++index) {
        const FieldPlacementRecord *record = fieldFindAreaPlacementRecord(index);
        if (record->map != -1 && record->map == list->map && record->area == list->area &&
            (record->condition != 1 || (gameFlagIsSet(0x137) && !gameFlagIsSet(0x147)))) {
            list->indices[list->count] = index;
            ++list->count;
        }
    }
    enemySpawnChooseCandidates(list, 3);
    for (s32 index = 0; index < 4; ++index)
        enemySpawnChooseCandidates(list, 1);
    rt_memclr(list->pending, sizeof(list->pending));
    FUN_00482fe8(list);
}
}
