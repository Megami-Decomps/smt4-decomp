/* NON_MATCHING: only the initial mode compare is scheduled after `mov r9, r0` and the first literal load (retail compares r0 first; 4 diff lines); the switch already gives retail's r8/r9 allocation. */
#include "common.h"
#include "gamedata/FlagValueIsPositive.h"

struct CampFlagMenu {
    u8 storage[0x64];
};

struct CampFlagLists {
    /* 0x0000 */ u8 unk0000[0xc0];
    /* 0x00c0 */ CampFlagMenu firstMenu;
    /* 0x0124 */ CampFlagMenu secondMenu;
    /* 0x0188 */ CampFlagMenu thirdMenu;
    /* 0x01ec */ u8 unk01ec[0x1fc4];
    /* 0x21b0 */ s16 first[124];
    /* 0x22a8 */ s16 second[1000];
    /* 0x2a78 */ s16 third[120];
};

extern "C" {
extern CampFlagLists *g_camp;
void FUN_00203b40(CampFlagMenu *, s32 count, s32 kind, s32 a, s32 b, s32 c);
void FUN_003d0bc0(s32 mode);

// Rebuild the requested camp list from the enabled flag ranges.
void campRebuildEnabledFlagList(s32 mode)
{
    s32 first, last;
    s16 *entries;
    CampFlagMenu *menu;
    switch (mode) {
    case 11:
        first = 1;
        last = 0x3c;
        entries = g_camp->first;
        menu = &g_camp->firstMenu;
        break;
    case 13:
        first = 0x3b7;
        last = 0x47e;
        entries = g_camp->second;
        menu = &g_camp->secondMenu;
        break;
    case 14:
        first = 0x33f;
        last = 0x3b6;
        entries = g_camp->third;
        menu = &g_camp->thirdMenu;
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
    FUN_00203b40(menu, count, 11, 1, 1, 1);
    FUN_003d0bc0(mode);
}
}
