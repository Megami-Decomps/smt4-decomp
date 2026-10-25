/* NON_MATCHING: builds the 3-5 entry choice menu (entries 0 and 4 depend on flags 0x558 / 0x559) and its sprites; written from the decompilation, branch layout not compared with retail */
#include "shard/W6_W6Match8_UiResourceParameters.h"

struct MenuSprite {
    /* 0x00 */ u8 data[0x8C];
};

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
    /* 0x0E8 */ MenuSprite header;
    /* 0x174 */ MenuSprite entries[5];
    /* 0x430 */ MenuSprite cursor;
    /* 0x4BC */ s32 cursorShown;
};

#define MENU_FLAG_EXTRA_TOP 0x558
#define MENU_FLAG_EXTRA_BOTTOM 0x559
#define MENU_CHOICE_COUNT 5

extern "C" {
extern const u8 DAT_0052c83c;
extern const u8 DAT_0052c854;
extern const u8 DAT_0052c884;

s32 gameFlagIsSet(s32 flag);
void FUN_00203b40(ChoiceMenuWork *work, s32 a, s32 b, s32 c, s32 d, s32 e);
void FUN_002a4964(ChoiceMenuWork *work, s32 selected);
void paramsClearPacket(UiResourceParameters *resources);

void FUN_0014e188(MenuSprite *sprite, s32 kind, s32 id, UiResourceParameters *resources, s32 flag);
void uiSpriteSetKeyframe(MenuSprite *sprite, s32 keyframe);
void uiSpriteSetImageKeyframe(MenuSprite *sprite, s32 keyframe);
void uiSpriteSelectAnim(MenuSprite *sprite, s32 animation);

/* Sets up the menu: frame size by entry count, the visible entries (icon, slot), the initial
 * selection from `initial` and the sprites. */
void FUN_003d05a4(ChoiceMenuWork *work, u16 initial)
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
    switch (initial) {
    case 0: selected = 2; break;
    case 1: selected = 1; break;
    case 2: selected = 3; break;
    case 3: selected = 0; break;
    case 4: selected = 4; break;
    default: selected = -1; break;
    }
    if (gameFlagIsSet(MENU_FLAG_EXTRA_TOP) == 0)
        selected--;
    work->selected = selected;

    FUN_00203b40(work, count, count, 1, 0, 1);
    FUN_002a4964(work, work->selected);
    paramsClearPacket(&work->resources);
    paramsInit(&work->resources, &DAT_0052c83c, 0x18, &DAT_0052c854, 0x30, NULL, 0, NULL, 0, &DAT_0052c884, 0x70);
    FUN_0014e188(&work->header, 0x24, 0x57, &work->resources, 1);
    uiSpriteSetKeyframe(&work->header, 0);
    uiSpriteSetImageKeyframe(&work->header, 0);
    for (s32 i = 0; i < MENU_CHOICE_COUNT; i++) {
        FUN_0014e188(&work->entries[i], 0x24, 0x57, &work->resources, 1);
        uiSpriteSetKeyframe(&work->entries[i], 0);
        uiSpriteSetImageKeyframe(&work->entries[i], 0);
    }
    FUN_0014e188(&work->cursor, 0x24, 1, &work->resources, 1);
    uiSpriteSelectAnim(&work->cursor, 0);
    work->cursorShown = 0;
}

} /* extern "C" */
