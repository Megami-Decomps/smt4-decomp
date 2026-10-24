#include "common.h"

extern "C" {

/* Local view of the camp state: seven selector widgets, each with its list of available ids. */
typedef struct CampSelectors {
    /* 0x0000 */ u8 unk0000[0x3D];
    /* 0x003D */ u8 locked;
    /* 0x003E */ u8 unk003E[0x276];
    /* 0x02B4 */ u8 widgets[7][0x64];
    /* 0x0570 */ u8 unk0570[0x25F8];
    /* 0x2B68 */ u16 lists0[120];
    /* 0x2C58 */ u16 lists1[120];
    /* 0x2D48 */ u16 lists2[50];
    /* 0x2DAC */ u16 lists3[120];
    /* 0x2E9C */ u16 lists4[120];
    /* 0x2F8C */ u16 lists5[120];
    /* 0x307C */ u16 lists6[120];
} CampSelectors;

typedef struct PlayerSelections {
    /* 0x0 */ u16 current[7];
} PlayerSelections;

extern CampSelectors *g_camp; /* 0x57f108 */

extern PlayerSelections *gameGetPlayerData(void);
extern s32 flagValueIsPositive(u32 flag);
extern void FUN_00203b40(u8 *widget, s32 count, s32 columns, s32 a, s32 b, s32 c);
extern void FUN_002a4964(u8 *widget, s32 index);
extern void FUN_003d0bc0(s32 id);
extern void objClearFlagPair(u8 *widget);

/* Rebuilds the selector list for a camp page: gathers the ids whose flags are set and selects the player's current one. */
void campSelectorRebuildList(s32 id)
{
    u16 *list;
    u8 *widget;
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
        list = g_camp->lists0;
        widget = g_camp->widgets[0];
        selected = gameGetPlayerData()->current[0];
        break;
    case 0x14:
    case 0x49:
        first = 0xB5;
        last = 0x12C;
        list = g_camp->lists1;
        widget = g_camp->widgets[1];
        selected = gameGetPlayerData()->current[1];
        break;
    case 0x15:
    case 0x4A:
        first = 0x30D;
        last = 0x33E;
        list = g_camp->lists2;
        widget = g_camp->widgets[2];
        selected = gameGetPlayerData()->current[2];
        break;
    case 0x16:
    case 0x4B:
        first = 0x12D;
        last = 0x1A4;
        list = g_camp->lists3;
        widget = g_camp->widgets[3];
        selected = gameGetPlayerData()->current[3];
        break;
    case 0x17:
    case 0x4C:
        first = 0x1A5;
        last = 0x21C;
        list = g_camp->lists4;
        widget = g_camp->widgets[4];
        selected = gameGetPlayerData()->current[4];
        break;
    case 0x18:
    case 0x4D:
        first = 0x21D;
        last = 0x294;
        list = g_camp->lists5;
        widget = g_camp->widgets[5];
        selected = gameGetPlayerData()->current[5];
        break;
    case 0x19:
    case 0x4E:
        first = 0x295;
        last = 0x30C;
        list = g_camp->lists6;
        widget = g_camp->widgets[6];
        selected = gameGetPlayerData()->current[6];
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
    FUN_00203b40(widget, count, 9, 1, 1, 0);
    FUN_003d0bc0(id);
    index = 0;
    for (i = 0; i < count + 1; i++) {
        if (list[i] == selected) {
            index = i;
        }
    }
    FUN_002a4964(widget, index);
    objClearFlagPair(widget);
}

} /* extern "C" */
