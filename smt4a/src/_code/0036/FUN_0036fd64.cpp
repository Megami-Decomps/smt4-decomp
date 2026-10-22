/* NON_MATCHING: equipment category selection and lookup loop branches are shared differently. */
/* Finds an equipment record's index in the table section selected by its category. */
#include "gamedata/EquipmentTable.h"

extern "C" u32 FUN_0036fd64(s32 category, u32 id)
{
    u8 section = 0;
    if (category == 5) {
        section = 2;
    } else if (category < 5) {
        if (category != 3) {
            section = category == 4;
        }
    } else if (category == 92) {
        section = 4;
    } else if (category == 93) {
        section = 3;
    }
    void *table = dataTableGet(10, section);
    EquipmentTableRecord *entries = (EquipmentTableRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (u32 i = 0; i < count; ++i) {
        if (entries[i].id == id) {
            return i;
        }
    }
    return 0;
}
