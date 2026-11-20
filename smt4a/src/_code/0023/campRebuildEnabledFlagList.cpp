#include "camp/CampStateA.h"
#include "gamedata/FlagValueIsPositive.h"



extern "C" {
void gridNavigationConfigure(GridNavigation *, s32 count, s32 kind, s32 a, s32 b, s32 c);
void campRebuildListByMode(s32 mode);

// Rebuild the requested camp list from the enabled flag ranges.
void campRebuildEnabledFlagList(s32 mode)
{
    s32 first, last;
    u16 *entries;
    GridNavigation *menu;
    CampStateA *camp = g_camp;
    switch (mode) {
    case 11:
        first = 1;
        last = 0x3c;
        entries = camp->gridIds0;
        menu = &camp->grids[0];
        break;
    case 13:
        first = 0x3b7;
        last = 0x47e;
        entries = camp->gridIds1;
        menu = &camp->grids[1];
        break;
    case 14:
        first = 0x33f;
        last = 0x3b6;
        entries = camp->gridIds2;
        menu = &camp->grids[2];
        break;
    default:
        return;
    }
    if (entries == NULL || menu == NULL)
        return;
    s32 count = 0;
    for (s32 flag = first; flag <= last; ++flag) {
        if (flagValueIsPositive(flag))
            entries[count++] = flag;
    }
    if (mode == 11) {
        for (u32 flag = 0x79f; flag <= 0x7de; ++flag) {
            if (flagValueIsPositive(flag))
                entries[count++] = flag;
        }
    } else if (mode == 13) {
        for (u32 flag = 0x47f; flag <= 0x79e; ++flag) {
            if (flagValueIsPositive(flag))
                entries[count++] = flag;
        }
    }
    gridNavigationConfigure(menu, count, 11, 1, 1, 1);
    campRebuildListByMode(mode);
}
}
