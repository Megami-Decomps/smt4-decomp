/* NON_MATCHING: the search keeps retail's NULL test of the found record; retail writes the selection in the direct arm and cross-jumps the search arm into it (b), with the three far field addresses (0x20640, 0x7B90, 0x7B91) and the 1 hoisted into r8-fp, and computes &work->selection before the first call. */
#include "shard/Shard0048.h"
#include "gamedata/MapNaviCategories.h"
extern "C" {
s32 naviMainGetRequestedMap(void);
s32 FUN_00492c70(void *selection); // declcheck: local (the shared declaration does not compile here or changes this unit)
MapNaviMarkerIcon *dataTable2BFindType1Entry(Block66Owner *owner, s32 map, u32 category);
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *context); // declcheck: local (the shared declaration does not compile here or changes this unit)
MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *context, u32 index);

/* unit-local: the navigation work extends beyond the shared Block66Owner prefix. */
struct NavigationWork {
    u8 unk0000[0x64];
    s8 categoryState;
    u8 unk0065[0x467];
    u8 selection[4]; /* 0x4CC */
    u8 unk04D0[0x76C0];
    u8 refreshCategory; /* 0x7B90 */
    u8 refreshMarker;
    u8 unk7B92[0x18AAE];
    s32 categoryStateWide; /* 0x20640 */
};
typedef char NavigationWorkOffsets[
    offsetof(NavigationWork, selection) == 0x4CC &&
    offsetof(NavigationWork, refreshCategory) == 0x7B90 &&
    offsetof(NavigationWork, categoryStateWide) == 0x20640 ? 1 : -1];
/* Makes the marker's icon the current category and asks for both to be redrawn. */
static __inline void selectCategoryMarker(NavigationWork *work, const MapNaviMarkerIcon *marker)
{
    s8 state = (s8)marker->icon;
    work->categoryState = state;
    work->categoryStateWide = state;
    work->refreshCategory = 1;
    work->refreshMarker = 1;
}

// Select the requested category, falling back to the map's category table.
void naviSelectRequestedCategory(Block66Owner *owner, u32 category)
{
    NavigationWork *work = (NavigationWork *)owner;
    s32 map = naviMainGetRequestedMap();
    s32 section = FUN_00492c70(work->selection);
    MapNaviMarkerIcon *marker = dataTable2BFindType1Entry(owner, map, category);
    if (marker != NULL) {
        selectCategoryMarker(work, marker);
    } else {
        work->categoryState = 0;
        MapNaviTableContext context;
        s32 count = MapNaviTable_GetCategoryCount(&context);
        MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&context, 0);
        MapNaviCategoryRecord *found = NULL;
        for (s32 index = 0; index < count; ++index) {
            if (records[index].id == -1)
                break;
            if (records[index].id == map && (s16)records[index].reserved == section) {
                found = &records[index];
                break;
            }
        }
        if (found == NULL)
            return;
        marker = dataTable2BFindType1Entry(owner, map, found->category);
        if (marker == NULL)
            return;
        selectCategoryMarker(work, marker);
    }
}
}
