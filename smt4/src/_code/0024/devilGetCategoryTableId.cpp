/* Returns the table id for the category of demon `devilId`. */
#include "common.h"

struct DevilRecord {
    /* 0x00 */ u8 unk00[10];
    /* 0x0A */ u8 category;
};

extern "C" {
DevilRecord *devilGetRecord(u32 devilId);
u32 mapCategoryToTableId(u32 category);

u32 devilGetCategoryTableId(u32 devilId)
{
    return mapCategoryToTableId(devilGetRecord(devilId)->category);
}
}
