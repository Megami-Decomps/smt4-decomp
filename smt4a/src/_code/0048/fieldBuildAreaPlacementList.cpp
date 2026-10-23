#include "field/FieldPlacementList.h"

extern "C" {
void rt_memclr(void *memory, u32 size);
const FieldPlacementRecord *FUN_00356308(s32 index);
void FUN_00482fe8(FieldPlacementList *list);
void FUN_004834b0(FieldPlacementList *list, s32 mode);
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
        const FieldPlacementRecord *record = FUN_00356308(index);
        if (record->map != -1 && record->map == list->map && record->area == list->area &&
            (record->condition != 1 || (gameFlagIsSet(0x137) && !gameFlagIsSet(0x147)))) {
            list->indices[list->count] = index;
            ++list->count;
        }
    }
    FUN_004834b0(list, 3);
    for (s32 index = 0; index < 4; ++index)
        FUN_004834b0(list, 1);
    rt_memclr(list->pending, sizeof(list->pending));
    FUN_00482fe8(list);
}
}
