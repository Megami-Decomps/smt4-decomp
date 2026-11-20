#include "common.h"
#include "camp/CampState.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 flagValueIsPositive(u32);
void gridNavigationConfigure(GridNavigation *, s32, s32, s32, s32, s32);
void campRebuildCategoryList(u32);
void scrollListSetSelectionMarkChanged(GridNavigation *, s32);
void objClearFlagPair(GridNavigation *);

void campRefreshEquipmentCategory(u32 category)
{
    CampState *camp = g_camp;
    if (camp->busy)
        return;
    s32 first, last;
    u16 *items;
    u16 equipped;
    GridNavigation *grid;
    switch (category) {
    case 17:
        first = 61; last = 180;
        items = camp->meleeIds; grid = &camp->grids[5];
        equipped = gameGetPlayerData()->equipment[0];
        break;
    case 18:
        first = 181; last = 300;
        items = camp->rangedIds; grid = &camp->grids[6];
        equipped = gameGetPlayerData()->equipment[1];
        break;
    case 19:
        first = 781; last = 830;
        items = camp->ammunitionIds; grid = &camp->grids[7];
        equipped = gameGetPlayerData()->equipment[2];
        break;
    case 20:
        first = 301; last = 420;
        items = camp->headIds; grid = &camp->grids[8];
        equipped = gameGetPlayerData()->equipment[3];
        break;
    case 21:
        first = 421; last = 540;
        items = camp->bodyIds; grid = &camp->grids[9];
        equipped = gameGetPlayerData()->equipment[4];
        break;
    case 22:
        first = 541; last = 660;
        items = camp->legsIds; grid = &camp->grids[10];
        equipped = gameGetPlayerData()->equipment[5];
        break;
    case 23:
        first = 661; last = 780;
        items = camp->accessoryIds; grid = &camp->grids[11];
        equipped = gameGetPlayerData()->equipment[6];
        break;
    default:
        return;
    }
    if (grid == NULL)
        return;
    s32 count = 0;
    for (s32 id = first; id <= last; ++id) {
        if (flagValueIsPositive(id))
            items[count++] = id;
    }
    gridNavigationConfigure(grid, count, 9, 1, 1, 0);
    campRebuildCategoryList(category);
    s32 selected = 0;
    for (s32 i = 0; i < count + 1; ++i) {
        if (items[i] == equipped)
            selected = i;
    }
    scrollListSetSelectionMarkChanged(grid, selected);
    objClearFlagPair(grid);
}
}
