#include "camp/CampState.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
s32 gridNavigationGetItemCount(GridNavigation *controller);
s32 listCursorGetRowIfUnblocked(GridNavigation *controller);
s32 resourceRunOperationIfUnblocked(GridNavigation *controller);
u32 categoryGetColor(s16 category);
void FUN_0026dafc(u32 color);

void campUpdateCategoryHighlightColors()
{
    CampState *work = g_camp;
    s32 count = gridNavigationGetItemCount(&work->grids[3]);
    if (gridNavigationGetItemCount(&work->grids[3]) < count) {
        count = gridNavigationGetItemCount(&work->grids[3]);
    }
    u32 processed[25];
    memClear(processed, sizeof(processed));
    for (s32 row = 0; row < count; ++row) {
        s32 unit = work->skills[row].unit;
        if (processed[unit + 1] != 0) {
            continue;
        }
        processed[unit + 1] = 1;
        u16 categories;
        if (unit < 0) {
            categories = gameGetPlayerData()->ailments;
        } else {
            categories = gameGetUnitRecord(unit)->ailments;
        }
        s32 ordinal = 0;
        if (categories == 0) {
            work->categoryColors[unit + 1] = 0xffffffff;
        } else {
            for (s32 category = 1; category < 11; ++category) {
                if (categories & (1u << category)) {
                    if (work->categoryIndices[unit + 1] == ordinal) {
                        work->categoryColors[unit + 1] = categoryGetColor(category);
                        break;
                    }
                    ++ordinal;
                }
            }
        }
        if (++work->categoryTimers[unit + 1] >= 24) {
            work->categoryIndices[unit + 1] = (work->categoryIndices[unit + 1] + 1) % ordinal;
            work->categoryTimers[unit + 1] = 0;
        }
    }
    s32 page = resourceRunOperationIfUnblocked(&work->grids[3]);
    s32 row = listCursorGetRowIfUnblocked(&work->grids[3]);
    FUN_0026dafc(work->categoryColors[work->skills[page + row].unit + 1]);
}
}
