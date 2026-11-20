#include "camp/CampStateA.h"
#include "gamedata/FlagValueIsPositive.h"
#include "gamedata/GamePlayerData.h"

extern "C" {


extern void gridNavigationConfigure(GridNavigation *widget, s32 count, s32 columns, s32 a, s32 b, s32 c);
extern void scrollListSetSelectionTracked(GridNavigation *widget, s32 index);
extern void campRebuildListByMode(s32 id);
extern void objClearFlagPair(GridNavigation *widget);

/* Rebuilds the selector list for a camp page: gathers the ids whose flags are set and selects the player's current one. */
void campSelectorRebuildList(s32 id)
{
    u16 *list;
    GridNavigation *widget;
    s32 first;
    s32 last;
    u16 selected;
    s32 count;
    s32 i;
    s32 index;

    if (g_camp->locked != 0) {
        return;
    }
    switch (id) {
    case 0x13:
    case 0x48:
        first = 0x3D;
        last = 0xB4;
        list = g_camp->meleeIds;
        widget = &g_camp->grids[5];
        selected = gameGetPlayerData()->equipment[0];
        break;
    case 0x14:
    case 0x49:
        first = 0xB5;
        last = 0x12C;
        list = g_camp->rangedIds;
        widget = &g_camp->grids[6];
        selected = gameGetPlayerData()->equipment[1];
        break;
    case 0x15:
    case 0x4A:
        first = 0x30D;
        last = 0x33E;
        list = g_camp->ammunitionIds;
        widget = &g_camp->grids[7];
        selected = gameGetPlayerData()->equipment[2];
        break;
    case 0x16:
    case 0x4B:
        first = 0x12D;
        last = 0x1A4;
        list = g_camp->headIds;
        widget = &g_camp->grids[8];
        selected = gameGetPlayerData()->equipment[3];
        break;
    case 0x17:
    case 0x4C:
        first = 0x1A5;
        last = 0x21C;
        list = g_camp->bodyIds;
        widget = &g_camp->grids[9];
        selected = gameGetPlayerData()->equipment[4];
        break;
    case 0x18:
    case 0x4D:
        first = 0x21D;
        last = 0x294;
        list = g_camp->legsIds;
        widget = &g_camp->grids[10];
        selected = gameGetPlayerData()->equipment[5];
        break;
    case 0x19:
    case 0x4E:
        first = 0x295;
        last = 0x30C;
        list = g_camp->accessoryIds;
        widget = &g_camp->grids[11];
        selected = gameGetPlayerData()->equipment[6];
        break;
    default:
        return;
    }
    if (widget == NULL) {
        return;
    }
    count = 0;
    for (i = first; i <= last; i++) {
        if (flagValueIsPositive(i) != 0) {
            list[count++] = i;
        }
    }
    gridNavigationConfigure(widget, count, 9, 1, 1, 0);
    campRebuildListByMode(id);
    index = 0;
    for (i = 0; i < count + 1; i++) {
        if (list[i] == selected) {
            index = i;
        }
    }
    scrollListSetSelectionTracked(widget, index);
    objClearFlagPair(widget);
}

} /* extern "C" */
