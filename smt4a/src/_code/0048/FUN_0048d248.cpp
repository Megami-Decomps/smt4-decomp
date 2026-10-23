/* NON_MATCHING: redundant retail null check after record dereference omitted; large-field addresses and category-loop registers differ. */
#include "shard/Shard0048.h"
#include "gamedata/MapNaviCategories.h"
extern "C" {
s32 naviMainGetRequestedMap(void);
s32 FUN_00492c70(void *selection);
MapNaviMarkerIcon *FUN_0048b140(Block66Owner *owner, s32 map, u32 category);
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *context);
MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *context, u32 index);

// Select the requested category, falling back to the map's category table.
void FUN_0048d248(Block66Owner *owner, u32 category)
{
    // The navigation work extends beyond the shared Block66Owner prefix.
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
    NavigationWork *work = (NavigationWork *)owner;
    s32 map = naviMainGetRequestedMap();
    s32 section = FUN_00492c70(work->selection);
    MapNaviMarkerIcon *marker = FUN_0048b140(owner, map, category);
    if (marker != NULL) {
        s8 state = (s8)marker->icon;
        work->categoryState = state;
        work->categoryStateWide = state;
        work->refreshCategory = 1;
        work->refreshMarker = 1;
    } else {
        work->categoryState = 0;
        MapNaviTableContext context;
        s32 count = MapNaviTable_GetCategoryCount(&context);
        MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&context, 0);
        for (s32 index = 0; index < count; ++index) {
            MapNaviCategoryRecord *record = &records[index];
            if (record->id == -1)
                return;
            if (record->id == map && (s16)record->reserved == section) {
                marker = FUN_0048b140(owner, map, record->category);
                if (marker == NULL)
                    return;
                s8 state = (s8)marker->icon;
                work->categoryState = state;
                work->categoryStateWide = state;
                work->refreshCategory = 1;
                work->refreshMarker = 1;
                return;
            }
        }
    }
}
}
