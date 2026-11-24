#include "camp/Config/Config.h"
/* NON_MATCHING: the signed initial selection now matches. The row-value switch holds the value and row address in the opposite scratch registers from retail. */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/ParamsClearPacket.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

enum {
    MENU_FLAG_EXTRA_TOP = 0x558,
    MENU_FLAG_EXTRA_BOTTOM = 0x559,
    MENU_CHOICE_COUNT = 5,
};

extern "C" {
/* The menu's motion and opacity tracks, and the commands that start them. */
static const UiSpritePositionKey sPositions[] = {
    { 30, 0, 0, 0, 5, 0, 0 },
    { 0, 0, -30, 0, 3, 0, 0 },
};
static const UiSpriteScalarKey sOpacity[] = {
    { 0.0f, 1.0f, 5, 0, 0 },
    { 1.0f, 0.0f, 3, 0, 0 },
    { 0.0f, 1.0f, 30, 0, 0 },
    { 1.0f, 0.0f, 30, 0, 0 },
};
static const SpriteAnimationCommand sCommands[] = {
    { -3, 0, { 0 }, -3, 2, 0, { 0 }, -3, 0, { 0 } },
    { -3, 0, { 0 }, -3, 3, 0, { 0 }, -3, 0, { 0 } },
    { -2, 0, { 0 }, -3, -2, 0, { 0 }, -3, 0, { 0 } },
    { -1, 0, { 0 }, -1, -1, 0, { 0 }, -1, 0, { 0 } },
};

s32 gameFlagIsSet(s32 flag);
void gridNavigationConfigure(ConfigWorkA *work, s32 a, s32 b, s32 c, s32 d, s32 e);


/* Sets up the visible option rows, chooses the initial row and initializes their sprites. */
void FUN_003d05a4(ConfigWorkA *work, u32 initialValue)
{
    s32 count = 3;
    if (gameFlagIsSet(MENU_FLAG_EXTRA_TOP) != 0)
        count = 4;
    if (gameFlagIsSet(MENU_FLAG_EXTRA_BOTTOM) != 0)
        count++;

    if (count == 3) {
        work->firstRegionImage = 0x75;
        work->regionImageEnd = 0x78;
    } else if (count == 4) {
        work->firstRegionImage = 0x7B;
        work->regionImageEnd = 0x7F;
    } else {
        work->firstRegionImage = 0x83;
        work->regionImageEnd = 0x88;
    }

    s32 shown = 0;
    for (s32 slot = 0; slot < MENU_CHOICE_COUNT; slot++) {
        work->rows[slot].value = -1;
        work->rows[slot].helpId = -1;
        if (slot == 0 && gameFlagIsSet(MENU_FLAG_EXTRA_TOP) == 0)
            continue;
        if (slot == 4 && gameFlagIsSet(MENU_FLAG_EXTRA_BOTTOM) == 0)
            break;
        s32 value;
        switch (slot) {
        case 0: value = 3; break;
        case 1: value = 1; break;
        case 2: value = 0; break;
        case 3: value = 2; break;
        case 4: value = 4; break;
        default: value = -1; break;
        }
        ConfigRowA row = { value, (u32)slot };
        work->rows[shown++] = row;
    }

    work->unkBC = (u32)-1;
    s32 selected;
    switch ((s16)initialValue) {
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
    work->row = selected;

    gridNavigationConfigure(work, count, count, 1, 0, 1);
    scrollListSetSelectionTracked((ScrollSelection *)&work->cursor, work->row);
    paramsClearPacket(&work->resources);
    paramsInit(&work->resources, sPositions, sizeof(sPositions), sOpacity, sizeof(sOpacity), NULL, 0, NULL, 0, sCommands, sizeof(sCommands));
    uiSpriteStateInitFromSource(&work->sprites[0], 0x24, 0x57, &work->resources, 1, 1.0f);
    uiSpriteSetKeyframe(&work->sprites[0], 0, 0);
    uiSpriteSetImageKeyframe(&work->sprites[0], 0, 0);
    for (s32 i = 0; i < MENU_CHOICE_COUNT; i++) {
        uiSpriteStateInitFromSource(&work->sprites[i + 1], 0x24, 0x57, &work->resources, 1, 1.0f);
        uiSpriteSetKeyframe(&work->sprites[i + 1], 0, 0);
        uiSpriteSetImageKeyframe(&work->sprites[i + 1], 0, 0);
    }
    uiSpriteStateInitFromSource(&work->cursorSprite, 0x24, 1, &work->resources, 1, 1.0f);
    uiSpriteSelectAnim(&work->cursorSprite, 0);
    work->frames = 0;
}

} /* extern "C" */
