/* NON_MATCHING: 36 lines, same 631 rows. In the kind-12 set-up retail reads window->argument into r0 after the last
 * lineStates store and builds the zero again in both branches, where the build reads it into r2 two rows earlier and
 * keeps the zero. In the card loop the source stores cardStates[i] first, as retail does; the build then swaps r8/r9
 * through the loop (storing after the card sprite's address is formed scores 16, a store order chosen by score). */
#include "ui/MessageMain.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiTexturePlacement.h"
#include "camp/UIQuest/UIQuest.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match8_TextHistory.h"
#include "util/Random.h"

extern "C" {

void uiSpriteSetScaleKeyframe(UiSpriteState *sprite, s16 key, s32 reverse);
void recordSetSecondaryValue(UiSpriteState *sprite, u16 layer);
void FUN_002eb764(UiSpriteState *sprite, u8 active);
void uiLayoutSelectionSpritePair(MessageWindow *window);
u32 sentinelLookupGetValue(u32 key);

enum {
    MESSAGE_CARD_COUNT = 5,
    MESSAGE_CARD_SPRITE = 7,   /* the first of the five card sprites */
    MESSAGE_LINE_SCAN_LIMIT = 999
};

/* textMeasureLineWidth's body (a function of its own in smt4a, 0x33885c; smt4 has no copy outside this caller):
 * the width in pixels of line `line` of the shown text. Skips the control codes' arguments up to the line, then
 * adds up its characters' advances. */
static s32 textMeasureLineWidthInline(AsdText *text, s32 line)
{
    s32 currentLine = 0;
    if (!text->hasText) {
        return 0;
    }

    s32 position = text->firstCell;
    do {
        u32 code = text->cells[position].code;
        if (code == ASD_TEXT_CODE_NONE) {
            break;
        }
        if (code == ASD_TEXT_CODE_F813) {
            position += sentinelLookupGetValue(code);
        } else {
            if (currentLine == line) {
                break;
            }
            if (charCodeIsPrivateUseGlyph(code)) {
                switch (code) {
                case ASD_TEXT_CODE_LINE_END:
                    ++currentLine;
                    break;
                case ASD_TEXT_CODE_PAGE_END:
                    goto measure;
                default:
                    position += sentinelLookupGetValue(code);
                    break;
                }
            }
        }
        ++position;
    } while (position < text->firstCell + MESSAGE_LINE_SCAN_LIMIT);

measure:
    s32 width = 0;
    for (;;) {
        u32 code = text->cells[position].code;
        if (code == 0 || code == ASD_TEXT_CODE_LINE_END) {
            break;
        }
        const AsdTextCellMetrics *metrics = &text->cells[position++].metrics;
        width = (s32)(text->spacing + ((f32)metrics->advance + (f32)width));
    }
    return width;
}

/* Sets up a message window's sprites for its layout (the message kind). */
void messageWindowSetupLayoutSprites(MessageWindow *window, u32 layout)
{
    s32 i;

    uiSpriteStateInitFromSource(&window->sprites[0], 14, -1, &window->parameters, 11, 1.0f);
    uiSpriteStateInitFromSource(&window->sprites[1], 14, -1, &window->parameters, 11, 1.0f);
    uiSpriteStateInitFromSource(&window->sprites[2], 14, -1, &window->parameters, 11, 1.0f);
    uiSpriteStateInitFromSource(&window->sprites[3], 14, -1, &window->parameters, 11, 1.0f);
    uiSpriteStateInitFromSource(&window->sprites[4], 14, -1, &window->parameters, 11, 1.0f);
    uiSpriteStateInitFromSource(&window->sprites[5], 14, -1, &window->parameters, 11, 1.0f);
    uiSpriteStateInitFromSource(&window->sprites[6], 14, -1, &window->parameters, 11, 1.0f);

    switch (layout) {
    case 1:
        pairSetFirstResetSecond(&window->sprites[0], 2000);
        spriteStartAnimationByIndex(&window->sprites[0], 0);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[0], 14, 2004);
        pairSetFirstResetSecond(&window->sprites[4], 7);
        spriteStartAnimationByIndex(&window->sprites[4], 4);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[4], 14, 71);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 16:
    case 17:
    case 18:
        pairSetFirstResetSecond(&window->sprites[0], 2000);
        spriteStartAnimationByIndex(&window->sprites[0], 0);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[0], 14, 2004);
        pairSetFirstResetSecond(&window->sprites[2], 4);
        spriteStartAnimationByIndex(&window->sprites[2], 1);
        pairSetFirstResetSecond(&window->sprites[4], 7);
        spriteStartAnimationByIndex(&window->sprites[4], 4);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[4], 14, 71);
        /* The speaker's portrait frame. */
        if (layout == 3) {
            pairSetFirstResetSecond(&window->sprites[1], 2001);
            uiSpriteSetScaleKeyframe(&window->sprites[1], 1, 0);
            uiGetLayoutPointDifference((PointDeltaWork *)&window->sprites[1], 14, 2005, 2001);
            recordSetSecondaryValue(&window->sprites[1], 2);
        } else if (layout == 16) {
            pairSetFirstResetSecond(&window->sprites[1], 2012);
            uiSpriteSetScaleKeyframe(&window->sprites[1], 1, 0);
            uiGetLayoutPointDifference((PointDeltaWork *)&window->sprites[1], 14, 2015, 2012);
            recordSetSecondaryValue(&window->sprites[1], 2);
        } else if (layout == 4) {
            pairSetFirstResetSecond(&window->sprites[1], 2003);
            uiSpriteSetScaleKeyframe(&window->sprites[1], 1, 0);
            uiGetLayoutPointDifference((PointDeltaWork *)&window->sprites[1], 14, 2007, 2003);
            recordSetSecondaryValue(&window->sprites[1], 2);
        } else if (layout == 17) {
            pairSetFirstResetSecond(&window->sprites[1], 2014);
            uiSpriteSetScaleKeyframe(&window->sprites[1], 1, 0);
            uiGetLayoutPointDifference((PointDeltaWork *)&window->sprites[1], 14, 2017, 2014);
            recordSetSecondaryValue(&window->sprites[1], 2);
        } else if (layout == 5) {
            pairSetFirstResetSecond(&window->sprites[1], 2002);
            uiSpriteSetScaleKeyframe(&window->sprites[1], 1, 0);
            uiGetLayoutPointDifference((PointDeltaWork *)&window->sprites[1], 14, 2006, 2002);
            recordSetSecondaryValue(&window->sprites[1], 2);
        } else if (layout == 18) {
            pairSetFirstResetSecond(&window->sprites[1], 2013);
            uiSpriteSetScaleKeyframe(&window->sprites[1], 1, 0);
            uiGetLayoutPointDifference((PointDeltaWork *)&window->sprites[1], 14, 2016, 2013);
            recordSetSecondaryValue(&window->sprites[1], 2);
        }
        break;
    case 6:
        pairSetSecondResetFirst(&window->sprites[0], 16);
        spriteStartAnimationByIndex(&window->sprites[0], 0);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[0], 14, 273);
        FUN_002eb764(&window->sprites[0], 1);
        recordSetSecondaryValue(&window->sprites[0], 2);
        pairSetFirstResetSecond(&window->sprites[4], 7);
        spriteStartAnimationByIndex(&window->sprites[4], 4);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[4], 14, 71);
        break;
    case 7:
    case 8:
        pairSetSecondResetFirst(&window->sprites[0], 6);
        spriteStartAnimationByIndex(&window->sprites[0], 3);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[0], 14, 54);
        FUN_002eb764(&window->sprites[0], 1);
        pairSetSecondResetFirst(&window->sprites[6], 7);
        spriteStartAnimationByIndex(&window->sprites[6], 3);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[6], 14, 54);
        FUN_002eb764(&window->sprites[6], 1);
        pairSetFirstResetSecond(&window->sprites[4], 7);
        spriteStartAnimationByIndex(&window->sprites[4], 4);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[4], 14, 71);
        break;
    case 9:
        pairSetSecondResetFirst(&window->sprites[0], 4);
        spriteStartAnimationByIndex(&window->sprites[0], 3);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[0], 14, 34);
        FUN_002eb764(&window->sprites[0], 1);
        pairSetSecondResetFirst(&window->sprites[6], 5);
        spriteStartAnimationByIndex(&window->sprites[6], 3);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[6], 14, 54);
        FUN_002eb764(&window->sprites[6], 1);
        pairSetFirstResetSecond(&window->sprites[4], 7);
        spriteStartAnimationByIndex(&window->sprites[4], 4);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[4], 14, 71);
        break;
    case 10:
        pairSetSecondResetFirst(&window->sprites[0], 2);
        spriteStartAnimationByIndex(&window->sprites[0], 5);
        uiStoreTextureEntryCenter((PointDeltaWork *)&window->sprites[0], 14, 21);
        FUN_002eb764(&window->sprites[0], 1);
        break;
    case 11:
        pairSetSecondResetFirst(&window->sprites[0], 11);
        spriteStartAnimationByIndex(&window->sprites[0], 6);
        pairSetSecondResetFirst(&window->sprites[3], 15);
        spriteStartAnimationByIndex(&window->sprites[3], 6);
        pairSetFirstResetSecond(&window->sprites[5], 12);
        spriteStartAnimationByIndex(&window->sprites[5], 9);
        uiLayoutSelectionSpritePair(window);
        break;
    case 19:
        uiSpriteStateInitFromSource(&window->sprites[0], 58, -1, &window->parameters, 11, 1.0f);
        pairSetSecondResetFirst(&window->sprites[0], 16);
        spriteStartAnimationByIndex(&window->sprites[0], 6);
        break;
    case 12: {
        s32 cardImages[MESSAGE_CARD_COUNT];

        for (i = 0; i < MESSAGE_CARD_COUNT; i++) {
            cardImages[i] = i;
            window->lineOrder[i] = i;
            window->lineStates[i] = 0;
        }
        /* With three or four lines the last one stays the last choice until the shuffle. */
        if (window->argument == 4) {
            window->lineOrder[0] = 0;
            window->lineOrder[1] = 1;
            window->lineOrder[2] = (randNextInRange(99) & 1) + 2;
            window->lineOrder[3] = 4;
        } else if (window->argument == 3) {
            window->lineOrder[0] = 0;
            window->lineOrder[1] = 1;
            window->lineOrder[2] = 4;
        }
        for (i = 0; i < (s32)window->argument; i++) {
            window->lineDelays[i] = randNextInRange(10);
            u8 *first = &window->lineOrder[randNextInRange((u16)(window->argument - 1))];
            u8 *second = &window->lineOrder[randNextInRange((u16)(window->argument - 1))];
            u8 line = *first;
            *first = *second;
            *second = line;
        }
        for (i = 0; i < (s32)window->argument; i++) {
            window->lineWidths[i] = textMeasureLineWidthInline((AsdText *)window->box, (s8)window->lineOrder[i]);
        }
        for (i = 0; i < MESSAGE_CARD_COUNT; i++) {
            s32 *first = &cardImages[randNextInRange(4)];
            s32 *second = &cardImages[randNextInRange(4)];
            s32 image = *first;
            *first = *second;
            *second = image;
        }
        for (i = 0; i < MESSAGE_CARD_COUNT; i++) {
            window->cardStates[i] = 0;
            UiSpriteState *card = &window->sprites[MESSAGE_CARD_SPRITE + i];
            uiSpriteStateInitFromSource(card, 14, -1, &window->parameters, 11, 1.0f);
            pairSetFirstResetSecond(card, 139);
            uiSpriteSetImageKeyframe(card, 4, 0);
            uiSpriteSetScaleKeyframe(card, 6, 0);
            uiStoreTextureEntryCenter((PointDeltaWork *)card, 14, cardImages[i] + 143);
        }
        window->lineDelays[0] = 0;
        g_messageMain.aux->unk028 = 0;
        break;
    }
    }
}

} /* extern "C" */
