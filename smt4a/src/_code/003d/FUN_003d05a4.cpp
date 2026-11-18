/* NON_MATCHING: retail sign-extends the initial choice and uses r1 for the icon across the slot switch, with the destination address in r0. */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/ParamsClearPacket.h"
#include "shard/W6_W6Match3_ScrollSelection.h"


struct MenuChoice {
    /* 0x00 */ s32 icon;
    /* 0x04 */ s32 index;
};

struct ChoiceMenuWork {
    /* 0x000 */ u8 unk000[0x88];
    /* 0x088 */ s32 selected;
    /* 0x08C */ s32 frameTop;
    /* 0x090 */ s32 frameBottom;
    /* 0x094 */ MenuChoice choices[5];
    /* 0x0BC */ s32 end;
    /* 0x0C0 */ u8 unk0C0[8];
    /* 0x0C8 */ UiResourceParameters resources;
    /* 0x0E8 */ UiSpriteState header;
    /* 0x174 */ UiSpriteState entries[5];
    /* 0x430 */ UiSpriteState cursor;
    /* 0x4BC */ s32 cursorShown;
};

#define MENU_FLAG_EXTRA_TOP 0x558
#define MENU_FLAG_EXTRA_BOTTOM 0x559
#define MENU_CHOICE_COUNT 5

extern "C" {
/* The menu's sprite resource packets, in retail's order (0x18, 0x30 and 0x70 bytes). */
static const u32 sMenuPacketA[6] = {
    0x1e, 0x0, 0x5, 0x0, 0xffe2, 0x3,
};
static const u32 sMenuPacketB[12] = {
    0x0, 0x3f800000, 0x5, 0x3f800000, 0x0, 0x3, 0x0, 0x3f800000, 0x1e, 0x3f800000, 0x0, 0x1e,
};
static const u32 sMenuPacketC[28] = {
    0xfffffffd, 0x0, 0xfffffffd, 0x2, 0x0, 0xfffffffd, 0x0, 0xfffffffd, 0x0, 0xfffffffd, 0x3, 0x0, 0xfffffffd, 0x0,
    0xfffffffe, 0x0, 0xfffffffd, 0xfffffffe, 0x0, 0xfffffffd, 0x0, 0xffffffff, 0x0, 0xffffffff, 0xffffffff, 0x0, 0xffffffff, 0x0,
};

s32 gameFlagIsSet(s32 flag);
void gridNavigationConfigure(ChoiceMenuWork *work, s32 a, s32 b, s32 c, s32 d, s32 e);


/* Sets up the menu: frame size by entry count, the visible entries (icon, slot), the initial
 * selection from `initial` and the sprites. */
void FUN_003d05a4(ChoiceMenuWork *work, s16 initial)
{
    s32 count = 3;
    if (gameFlagIsSet(MENU_FLAG_EXTRA_TOP) != 0)
        count = 4;
    if (gameFlagIsSet(MENU_FLAG_EXTRA_BOTTOM) != 0)
        count++;

    if (count == 3) {
        work->frameTop = 0x75;
        work->frameBottom = 0x78;
    } else if (count == 4) {
        work->frameTop = 0x7B;
        work->frameBottom = 0x7F;
    } else {
        work->frameTop = 0x83;
        work->frameBottom = 0x88;
    }

    s32 shown = 0;
    for (s32 slot = 0; slot < MENU_CHOICE_COUNT; slot++) {
        work->choices[slot].icon = -1;
        work->choices[slot].index = -1;
        if (slot == 0 && gameFlagIsSet(MENU_FLAG_EXTRA_TOP) == 0)
            continue;
        if (slot == 4 && gameFlagIsSet(MENU_FLAG_EXTRA_BOTTOM) == 0)
            break;
        s32 icon;
        switch (slot) {
        case 0: icon = 3; break;
        case 1: icon = 1; break;
        case 2: icon = 0; break;
        case 3: icon = 2; break;
        case 4: icon = 4; break;
        default: icon = -1; break;
        }
        work->choices[shown].icon = icon;
        work->choices[shown].index = slot;
        shown++;
    }

    work->end = -1;
    s32 selected;
    switch ((u16)initial) {
    case 0: selected = 2; break;
    case 1: selected = 1; break;
    case 2: selected = 3; break;
    case 3: selected = 0; break;
    case 4: selected = 4; break;
    default: selected = -1; break;
    }
    if (!(gameFlagIsSet(MENU_FLAG_EXTRA_TOP) != 0 && gameFlagIsSet(MENU_FLAG_EXTRA_BOTTOM) != 0)) {
        if (gameFlagIsSet(MENU_FLAG_EXTRA_TOP) == 0) {
            gameFlagIsSet(MENU_FLAG_EXTRA_BOTTOM);
            selected--;
        }
    }
    work->selected = selected;

    gridNavigationConfigure(work, count, count, 1, 0, 1);
    scrollListSetSelectionTracked(reinterpret_cast<ScrollSelection *>(work), work->selected);
    paramsClearPacket(&work->resources);
    paramsInit(&work->resources, sMenuPacketA, 0x18, sMenuPacketB, 0x30, NULL, 0, NULL, 0, sMenuPacketC, 0x70);
    uiSpriteStateInitFromSource(&work->header, 0x24, 0x57, &work->resources, 1, 1.0f);
    uiSpriteSetKeyframe(&work->header, 0, 0);
    uiSpriteSetImageKeyframe(&work->header, 0, 0);
    for (s32 i = 0; i < MENU_CHOICE_COUNT; i++) {
        uiSpriteStateInitFromSource(&work->entries[i], 0x24, 0x57, &work->resources, 1, 1.0f);
        uiSpriteSetKeyframe(&work->entries[i], 0, 0);
        uiSpriteSetImageKeyframe(&work->entries[i], 0, 0);
    }
    uiSpriteStateInitFromSource(&work->cursor, 0x24, 1, &work->resources, 1, 1.0f);
    uiSpriteSelectAnim(&work->cursor, 0);
    work->cursorShown = 0;
}

} /* extern "C" */
