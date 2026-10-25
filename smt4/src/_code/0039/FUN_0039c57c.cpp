/* NON_MATCHING: lookup-owned table contexts restore call setup; selected-section/refresh stores use swapped value/constant registers. */
#include "map/NavigationInterpolation.h"
#include "gamedata/MapNaviCategories.h"
#include "shard/MapNaviTable_GetCategoryCount.h"
struct MapNaviSectionRecord {
    s8 map;
    u8 category;
    u8 unk02;
    s8 section;
    u8 unk04[0x10];
};
/* Selection and refresh data extend beyond the common navigation prefix. */
struct NaviSectionSelectionView {
    union {
        NavigationInterpolation motion;
        struct { u8 unk000[0x60]; s8 selection; } state;
    };
    u8 unk00164[0x5928];
    u8 refreshFirst;
    u8 refreshSecond;
    u8 unk05A8E[0xC73E];
    s32 selectedSection;
};
typedef char NaviSectionSelectionOffsets[(sizeof(MapNaviSectionRecord) == 0x14 && offsetof(NaviSectionSelectionView, refreshFirst) == 0x5A8C && offsetof(NaviSectionSelectionView, selectedSection) == 0x121CC) ? 1 : -1];
extern "C" {
s32 NaviMain_GetPosX(const u8 *cursor);
s32 NaviMain_GetPosY(const u8 *cursor);
u32 dataTable2bSub1GetCount(MapNaviTableContext *context);
const MapNaviSectionRecord *dataTable2bSub1GetRecord(MapNaviTableContext *context, u32 index);
const MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *context, u32 index);
}
static inline const MapNaviSectionRecord *findNaviSection(s32 map, u32 category)
{
    MapNaviTableContext context;
    u32 count = dataTable2bSub1GetCount(&context);
    const MapNaviSectionRecord *records = dataTable2bSub1GetRecord(&context, 0);
    for (s32 i = 0; i < static_cast<s32>(count); ++i) {
        if (records[i].map == -1)
            break;
        if (records[i].map == map && records[i].category == category)
            return &records[i];
    }
    return 0;
}
static inline const MapNaviCategoryRecord *findNaviCategory(s32 map, s32 area)
{
    MapNaviTableContext context;
    u32 count = MapNaviTable_GetCategoryCount(&context);
    const MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&context, 0);
    for (s32 i = 0; i < static_cast<s32>(count); ++i) {
        if (records[i].id == -1)
            break;
        if (records[i].id == map && static_cast<s16>(records[i].reserved) == area)
            return &records[i];
    }
    return 0;
}
static inline void applyNaviSection(NaviSectionSelectionView *work, const MapNaviSectionRecord *record)
{
    s8 section = record->section;
    work->state.selection = section;
    work->selectedSection = section;
    work->refreshFirst = 1;
    work->refreshSecond = 1;
}
extern "C" void FUN_0039c57c(NaviSectionSelectionView *work, u32 category)
{
    s32 map = NaviMain_GetPosX(work->motion.cursorData);
    s32 area = NaviMain_GetPosY(work->motion.cursorData);
    const MapNaviSectionRecord *section = findNaviSection(map, category);
    if (section) {
        applyNaviSection(work, section);
        return;
    }
    work->state.selection = 0;
    const MapNaviCategoryRecord *fallback = findNaviCategory(map, area);
    if (fallback) {
        section = findNaviSection(map, fallback->category);
        if (section)
            applyNaviSection(work, section);
    }
}
