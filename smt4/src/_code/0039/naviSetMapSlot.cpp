/* NON_MATCHING: slot addressing (table + index*16 with the 0x62 folded into the store offsets) and the out-of-line clear arm now match; the stack-argument loads (retail ldm of area/flags) and the enabled/icon result registers still differ. */
#include "common.h"
#include "shard/MapNaviTable_GetCategoryCount.h"

struct NavigationSlot {
    /* 0x00 */ s16 map;
    /* 0x02 */ u8 area;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u16 category;
    /* 0x06 */ u8 icon;
    /* 0x07 */ u8 enabled;
    /* 0x08 */ u16 flags;
    /* 0x0a */ u16 value;
    /* 0x0c */ u8 unk0c[4];
};

struct NavigationSlotTable {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ NavigationSlot slots[1];
};

struct NavigationCategory {
    /* 0x00 */ s16 map;
    /* 0x02 */ s16 area;
    /* 0x04 */ u8 category;
    /* 0x05 */ u8 unk05[0xf];
};

struct NavigationIcon {
    /* 0x00 */ s8 map;
    /* 0x01 */ u8 category;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 icon;
    /* 0x04 */ u8 unk04[0x10];
};

struct NavigationTableContext {};

extern "C" {
NavigationCategory *MapNaviTable_GetCategoryRecord(NavigationTableContext *, u32 index);
s32 dataTable2bSub1GetCount(NavigationTableContext *);
NavigationIcon *dataTable2bSub1GetRecord(NavigationTableContext *, u32 index);

static __inline NavigationCategory *findNavigationCategory(s32 map, s32 area)
{
    NavigationTableContext context;
    s32 count = MapNaviTable_GetCategoryCount(&context);
    NavigationCategory *records = MapNaviTable_GetCategoryRecord(&context, 0);
    for (s32 i = 0; i < count; ++i) {
        if (records[i].map == -1)
            break;
        if (records[i].map == map && records[i].area == area)
            return &records[i];
    }
    return NULL;
}

static __inline NavigationIcon *findNavigationIcon(s32 map, u8 category)
{
    NavigationTableContext context;
    s32 count = dataTable2bSub1GetCount(&context);
    NavigationIcon *records = dataTable2bSub1GetRecord(&context, 0);
    for (s32 i = 0; i < count; ++i) {
        if (records[i].map == -1)
            break;
        if (records[i].map == map && records[i].category == category)
            return &records[i];
    }
    return NULL;
}

// Populate one navigation slot from the map/area category and its icon mapping.
void naviSetMapSlot(NavigationSlotTable *table, s32 index, s32 active, s32 map,
                  s32 area, u16 flags, u32 unused, u16 value, s32 enabled)
{
    if (active) {
        NavigationCategory *category = findNavigationCategory(map, area);
        NavigationIcon *icon = findNavigationIcon(map, category->category);
        table->slots[index].map = map;
        table->slots[index].area = area;
        table->slots[index].category = category->category;
        table->slots[index].icon = icon->icon;
        table->slots[index].enabled = enabled != 0;
        table->slots[index].flags = flags;
        table->slots[index].value = value;
    } else {
        table->slots[index].map = 0;
        table->slots[index].area = 0;
        table->slots[index].category = 0;
        table->slots[index].icon = 0;
        table->slots[index].enabled = 0;
        table->slots[index].flags = 0;
        table->slots[index].value = 0;
        table->slots[index].unk03 = 0;
    }
}
}
