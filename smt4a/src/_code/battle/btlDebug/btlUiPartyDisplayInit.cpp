/* NON_MATCHING: 349 lines, about 75 once register numbers are ignored: the first block (written in
 * IV's order; retail stores unk3878 and unk388C before the unit and derives their offsets from a mov
 * of 0x3880), paramsInit's argument scheduling, the 0xFA9 image family (retail adds to one
 * register), the 0x4B0F block's store order and the list boxes' stacked arguments (two str for
 * retail's 0 and 1). */
#include "battle/ActorCardAnimations.h"
#include "ui/UiSpriteApi.h"
#include "ui/ParamsClearPacket.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "battle/btlDebug.h"
#include "code/Code0018.h"
#include "code/Code001c_Smt4a.h"
#include "gamedata/FlagValueIsPositive.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/NkmBaseRecordA.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "shard/W6_W6Match8_StatGrowth.h"

extern "C" {
extern Record DAT_005e1560;

void qsort(void *elements, u32 count, u32 elementSize, s32 (*compare)(const u16 *, const u16 *));
s32 dataTableCompareIdsByOrder(const u16 *a, const u16 *b);
void rangeSelectionSelectEndpoint(UiSpriteState *sprite, s32 index, s32 reverse);
void gridNavigationConfigure(GridNavigation *work, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
void FUN_0020d3d4(ActorCardAnimationsA *card);
void FUN_0023f328(ActorCardAnimationsA *card, s32 slot, s32 reset);
void FUN_0023f788(ActorCardAnimationsA *card);
u32 dataSet16LoadAndSort(void);
void campButtonHelpLoad(void);
void campButtonHelpAcquire(void);
void statusBustUpPortraitAcquire(s32 id, s32 byDevilId);
void uiStoreTextureEntryCenter(UiSpriteState *sprite, u32 textureTable, s32 image);
u16 FUN_003e53ec(void);
u32 FUN_003eb200(u32 actor);
s32 FUN_0047fbb4(u32 id);
}

/* The party display's animation tables. */
static const UiSpritePositionKey sPositionKeys[] = {
    {0, 0, 0, 0, 0, 0, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {-20, 0, 0, 0, 2, 0, 0},
    {20, 0, 0, 0, 8, 0, 0},
    {0, 20, 0, -2, 8, 0, 0},
    {0, -2, 0, 0, 2, 0, 0},
    {230, 0, 0, 0, 40, 1, 0},
    {0, 0, 0, -3, 6, 0, 0},
    {0, -3, 0, 0, 9, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {0, 0, 320, 0, 4, 0, 0},
    {-320, 0, 0, 0, 8, 0, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {30, 0, 0, 0, 4, 0, 0},
    {0, 0, -30, 0, 5, 0, 0},
    {0, 0, 30, 0, 3, 0, 0},
    {-30, 0, 0, 0, 5, 0, 0},
    {30, 0, 0, 0, 5, 0, 0},
    {320, 0, 0, 0, 4, 0, 0},
    {0, 0, 320, 0, 9, 0, 0},
    {0, 0, 320, 0, 9, 0, 0},
    {0, 0, 320, 0, 9, 0, 0},
};

static const UiSpriteScalarKey sAlphaKeys[] = {
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 0.8f, 20, 0, 0},
    {0.8f, 0.0f, 40, 0, 0},
    {0.5f, 1.0f, 10, 0, 0},
    {1.0f, 0.5f, 20, 0, 0},
    {1.0f, 0.5f, 20, 0, 0},
    {0.5f, 1.0f, 40, 0, 0},
    {0.0f, 1.0f, 30, 0, 0},
    {1.0f, 0.0f, 30, 0, 0},
    {1.0f, 0.0f, 20, 0, 0},
    {1.0f, 0.5f, 20, 0, 0},
    {0.5f, 0.8f, 20, 0, 0},
    {0.8f, 0.5f, 40, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
    {0.0f, 1.0f, 8, 0, 0},
    {1.0f, 0.0f, 6, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 11, 0, 0},
    {1.0f, 0.0f, 6, 0, 0},
    {0.0f, 1.0f, 8, 0, 0},
    {1.0f, 0.0f, 5, 0, 0},
    {1.0f, 0.0f, 5, 0, 0},
    {1.0f, 0.0f, 5, 0, 0},
    {0.0f, 1.0f, 9, 0, 0},
    {1.0f, 0.0f, 11, 0, 0},
    {0.0f, 1.0f, 5, 0, 0},
    {0.0f, 1.0f, 3, 0, 0},
    {1.0f, 1.0f, 6, 0, 0},
    {1.0f, 0.0f, 16, 0, 0},
    {0.0f, 1.0f, 6, 0, 0},
    {1.0f, 1.0f, 19, 0, 0},
    {0.0f, 1.0f, 6, 0, 0},
    {1.0f, 0.0f, 19, 0, 0},
    {0.0f, 0.5f, 1, 0, 0},
    {0.5f, 0.0f, 18, 0, 0},
    {0.0f, 0.4f, 15, 0, 0},
    {0.4f, 0.0f, 15, 0, 0},
    {0.4f, 0.4f, 5, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {0.0f, 0.4f, 8, 0, 0},
    {0.4f, 0.0f, 25, 0, 0},
    {0.0f, 0.0f, 5, 0, 0},
    {0.5f, 1.0f, 5, 0, 0},
    {1.0f, 1.0f, 0, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {1.0f, 0.0f, 6, 0, 0},
};

static const UiSpriteScalarKey sScaleKeys[] = {
    {1.0f, 1.0f, 1, 0, 0},
    {0.0f, 1.5f, 4, 0, 0},
    {1.5f, 1.0f, 4, 0, 0},
    {2.0f, 1.0f, 4, 0, 0},
    {4.0f, 1.0f, 4, 0, 0},
    {1.0f, 1.0f, 2, 0, 0},
    {1.0f, 2.0f, 8, 0, 0},
    {1.0f, 0.0f, 6, 0, 0},
    {0.0f, 1.7f, 7, 0, 0},
    {1.7f, 0.0f, 6, 0, 0},
    {0.0f, 1.0f, 2, 0, 0},
    {1.0f, 0.0f, 11, 0, 0},
    {0.0f, 1.6f, 7, 0, 0},
    {1.6f, 1.7f, 13, 0, 0},
    {1.0f, 1.5f, 19, 0, 0},
    {0.8f, 1.0f, 8, 0, 0},
    {1.0f, 1.4f, 25, 0, 0},
    {1.4f, 1.4f, 5, 0, 0},
};

static const SpriteAnimationCommand sCommands[] = {
    {1, 0, {0}, -3, -3, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {7, 0, {0}, -3, 3, 0, {0}, -3, 0, {0}},
    {8, 0, {0}, -3, 2, 0, {0}, -3, 0, {0}},
    {-2, 0, {0}, -3, -2, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 4, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 5, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, -2, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 6, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 7, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, -2, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 0, 0, {0}, 1, 0, {0}},
    {-3, 0, {0}, -3, -3, 0, {0}, 2, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {3, 0, {0}, -3, 0, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {4, 0, {0}, -3, 1, 0, {0}, -3, 0, {0}},
    {5, 0, {0}, -3, -3, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 0, 0, {0}, 3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 12, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 13, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, -2, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {1, 0, {0}, -3, 0, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {9, 0, {0}, -3, 14, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 15, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 16, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 17, 0, {0}, 4, 0, {0}},
    {-3, 0, {0}, -3, -3, 0, {0}, 5, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 18, 0, {0}, 6, 0, {0}},
    {-3, 0, {0}, -3, 19, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 20, 0, {0}, 7, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, -3, 0, {0}, 8, 0, {0}},
    {-3, 0, {0}, -3, -3, 0, {0}, 9, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 21, 0, {0}, 10, 0, {0}},
    {-3, 0, {0}, -3, 22, 0, {0}, 11, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 23, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 24, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 25, 0, {0}, 12, 0, {0}},
    {-3, 0, {0}, -3, 26, 0, {0}, 13, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 28, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 29, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 30, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 33, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 34, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 35, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 36, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 31, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 32, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 37, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 39, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 38, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, -2, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 41, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 42, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 43, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, -2, 0, {0}, -2, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {19, 0, {0}, -3, 0, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {14, 0, {0}, -3, 46, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {20, 0, {0}, -3, -3, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 14, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 8, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 9, 0, {0}, -3, 0, {0}},
    {-2, 0, {0}, -3, -2, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
};

extern "C" {

/* Sets up the battle UI's party display for the guest `unit`: every sprite, the party members'
 * portraits and panels, the menu's list boxes, and the message file. Apocalypse's FUN_00199b9c. */
void btlUiPartyDisplayInit(ActorCardAnimationsA *card, u32 unit)
{
    s32 i;

    card->state = 0;
    card->mode = 0;
    card->unit = unit;
    card->unk3878 = 0;
    card->unk388C = 0;
    card->page = -1;
    card->unk38B0 = 0;
    card->unk38BA = 0;
    card->unk3894 = 0x20;
    card->originX = 0;
    card->originY = 0;
    card->unk41A8 = 0.0f;
    card->unk41AC = 0;
    card->unk41B0 = 0.0f;
    card->unk41B4 = 0;
    card->unk4BA4 = 0;
    card->unk4BC0 = 0;
    card->unk3DB0 = 0;
    dataSet16LoadAndSort();
    paramsClearPacket(&card->resources);
    paramsInit(&card->resources, sPositionKeys, sizeof(sPositionKeys), sAlphaKeys, sizeof(sAlphaKeys),
               sScaleKeys, sizeof(sScaleKeys), NULL, 0, sCommands, sizeof(sCommands));

    for (i = 0; i < 4; i++) {
        uiSpriteStateInitFromSource(&card->memberFrames[i], 0xd, 0, &card->resources, 6, 1.0f);
        uiSpriteSelectAnim(&card->memberFrames[i], 0);
        uiSpriteStateInitFromSource(&card->memberGlows[i], 0xd, 0, &card->resources, 6, 1.0f);
        if (i == 0)
            uiSpriteSetImageKeyframe(&card->memberGlows[0], 11, 0);
        else
            uiSpriteSetImageKeyframe(&card->memberGlows[i], 10, 0);
        uiSpriteStateInitFromSource(&card->memberGlowMarks[i], 0xd, 0x1b, &card->resources, 0x1f, 1.0f);
        uiStoreTextureEntryCenter(&card->memberGlowMarks[i], 0xd, 0x45);
        uiSpriteSelectAnim(&card->memberGlowMarks[i], 6);
        uiSpriteStateInitFromSource(&card->sprites[0][i], 0xd, 0x1c8, &card->resources, 0x1a, 1.0f);
        uiSpriteSelectAnim(&card->sprites[0][i], 11);
        uiSpriteStateInitFromSource(&card->sprites[1][i], 0xd, 0xbba, &card->resources, 0x1a, 1.0f);
        uiStoreTextureEntryCenter(&card->sprites[1][i], 0xd, 0x1ca);
        uiSpriteSelectAnim(&card->sprites[1][i], 13);
        uiSpriteStateInitFromSource(&card->sprites[2][i], 0xd, 0xbbe, &card->resources, 0x25, 1.0f);
        uiStoreTextureEntryCenter(&card->sprites[2][i], 0xd, 0x1ca);
        uiSpriteSelectAnim(&card->sprites[2][i], 14);
    }
    uiSpriteStateInitFromSource(&card->guestFrame, 0xd, 0x5e, &card->resources, 6, 1.0f);
    if (FUN_003eb200(card->unit))
        uiSpriteSetKeyframe(&card->guestFrame, 13, 0);
    uiSpriteStateInitFromSource(&card->backdrop, 0xd, 0xdb, &card->resources, 6, 1.0f);
    uiSpriteSelectAnim(&card->backdrop, 0x1b);
    for (i = 0; i < 8; i++) {
        uiSpriteStateInitFromSource(&card->unk0138[i], 0xd, 0xdd, &card->resources, 6, 1.0f);
        uiSpriteSelectAnim(&card->unk0138[i], 0x1b);
    }
    uiSpriteStateInitFromSource(&card->intro, 0xd, 0xde, &card->resources, 6, 1.0f);
    uiSpriteSelectAnim(&card->intro, 1);
    uiSpriteStateInitFromSource(&card->unk0598, 0xd, 0x4a, &card->resources, 6, 1.0f);
    uiSpriteSelectAnim(&card->unk0598, 2);
    uiSpriteStateInitFromSource(&card->unk0624, 0xd, 0x96, &card->resources, 6, 1.0f);
    uiSpriteSelectAnim(&card->unk0624, 3);
    uiSpriteStateInitFromSource(&card->unk06B0, 0xd, 0x9c, &card->resources, 6, 1.0f);
    uiSpriteSelectAnim(&card->unk06B0, 0x1e);
    for (i = 0; i < 6; i++)
        uiSpriteStateInitFromSource(&card->unk0E58[i], 0xd, 0x72, &card->resources, 6, 1.0f);
    for (i = 0; i < 25; i++) {
        uiSpriteStateInitFromSource(&card->unk2294[i], 7, 2000, &card->resources, 0xf1, 1.0f);
        uiSpriteSelectAnim(&card->unk2294[i], 4);
    }
    for (i = 0; i < 5; i++) {
        uiSpriteStateInitFromSource(&card->unk3040[i], 0xd, 1000, &card->resources, 0xf1, 1.0f);
        uiSpriteSelectAnim(&card->unk3040[i], 5);
        uiSpriteStateInitFromSource(&card->unk32FC[i], 0xd, 0x3ea, &card->resources, 0xf1, 1.0f);
        uiSpriteSelectAnim(&card->unk32FC[i], 5);
    }
    for (i = 0; i < 5; i++) {
        uiSpriteInitializeState(&card->unk35B8[i], 0xd, -1, 0xf, &card->resources, 0xf1, 1.0f);
        uiSpriteSelectAnim(&card->unk35B8[i], 7);
    }
    uiSpriteStateInitFromSource(&card->unk11A0, 0xd, 0x110, &card->resources, 6, 1.0f);
    uiSpriteSelectAnim(&card->unk11A0, 0x1b);
    uiSpriteStateInitFromSource(&card->guestFlash, 0xd, 0, &card->resources, 6, 1.0f);
    uiSpriteSelectAnim(&card->guestFlash, 9);
    uiSpriteStateInitFromSource(&card->unk13D0, 0xd, 0, &card->resources, 6, 1.0f);
    uiSpriteSelectAnim(&card->unk13D0, 9);
    FUN_0020d3d4(card);
    uiSpriteStateInitFromSource(&card->unk122C, 0xd, 0x124, &card->resources, 6, 1.0f);
    uiSpriteSelectAnim(&card->unk122C, 8);
    uiSpriteStateInitFromSource(&card->slide, 0xd, 0, &card->resources, 6, 1.0f);
    uiSpriteStateInitFromSource(&card->unk2208, 0xd, 0, &card->resources, 6, 1.0f);
    uiSpriteStateInitFromSource(&card->unk1AEC, 0xd, 0xfa9, &card->resources, 0x42, 1.0f);
    uiSpriteSetImageKeyframe(&card->unk1AEC, 0x1b, 0);
    uiSpriteStateInitFromSource(&card->unk1B78, 0xd, 0xfa9, &card->resources, 0x42, 1.0f);
    uiSpriteSelectAnim(&card->unk1B78, 0x14);
    uiSpriteStateInitFromSource(&card->unk1C04, 0xd, 0xfbd, &card->resources, 0x42, 1.0f);
    uiSpriteStateInitFromSource(&card->unk1C90, 0xd, 0xfbe, &card->resources, 0x42, 1.0f);
    uiSpriteSelectAnim(&card->unk1C90, 0x15);
    uiStoreTextureEntryCenter(&card->unk1C04, 0xd, 0xfc1);
    uiSpriteStateInitFromSource(&card->unk1D1C, 0xd, 0xfbf, &card->resources, 0x42, 1.0f);
    uiSpriteSelectAnim(&card->unk1D1C, 0x16);
    rangeSelectionSelectEndpoint(&card->unk1D1C, 14, 0);
    uiStoreTextureEntryCenter(&card->unk1C04, 0xd, 0xfc2);
    for (i = 0; i < 8; i++) {
        uiSpriteStateInitFromSource(&card->unk1DA8[i], 0xd, 0xfbf, &card->resources, 0x42, 1.0f);
        uiSpriteSetImageKeyframe(&card->unk1D1C, 0x28, 0);
    }
    card->unk4B9C = FUN_003e53ec();
    card->unk4BA0 = 0;
    if (FUN_003e48bc())
        card->unk4BA0 = 2;
    card->unk4B9E = 0;
    for (i = 0; i < 4; i++)
        card->portraitIds[i] = 0;

    /* The player's portrait, then each party member's and every stock demon's. */
    statusBustUpPortraitAcquire(-1, 1);
    card->portraitIds[0] = -1;
    for (i = 0; i < 3; i++) {
        if (gameGetSlotTable()->reserve[i] >= 0) {
            SlotRecordA *record = gameGetSlotRecord(gameGetSlotTable()->reserve[i]);
            statusBustUpPortraitAcquire((s16)record->id, 1);
            card->portraitIds[i + 1] = record->id;
            card->memberModelIds[i] = record->id;
            card->unitIndices[i + 1] = gameGetSlotTable()->reserve[i];
            card->vacant[i + 1] = 0;
        } else {
            card->portraitIds[i + 1] = 0;
            card->memberModelIds[i] = 0;
            card->unitIndices[i + 1] = -4;
            card->vacant[i + 1] = 1;
        }
    }
    for (i = 0; i < 12; i++) {
        PartySlotA *slot = partyGetSlot((u16)i);
        if (partySlotIsOccupied(slot))
            statusBustUpPortraitAcquire((s16)(nkmBaseGetRecord(slot->record.id)->model + 1), 0);
    }
    card->unitIndices[4] = -4;
    card->unk4BAC = 0;
    FUN_0023f328(card, 0, 1);
    FUN_0023f328(card, 1, 1);
    FUN_0023f328(card, 2, 1);
    FUN_0023f328(card, 3, 1);
    FUN_0023f328(card, 4, 1);
    /* A party panel is vacant without a usable unit. */
    for (i = 1; i < 4; i++) {
        SlotRecordA *record;
        if (card->unitIndices[i] < 0 || (record = gameGetSlotRecord(card->unitIndices[i])) == NULL ||
            bitsAt60Test(record, 1))
            card->vacant[i] = 1;
    }
    FUN_0023f788(card);
    card->unk4B0F = 0;
    card->unk4B10 = 0;
    card->unk4B14 = 0;
    card->unk4B16 = 0;
    card->unk4B18[0] = 0;
    card->unk4B18[1] = 0;
    card->unk4B18[2] = 0;
    card->unk4B18[3] = 0;
    card->unk4B18[4] = 0;
    card->unk4B1E = -1;
    card->unk4B20 = 0;
    card->unk4B24 = 0;
    for (i = 0; i < 5; i++) {
        card->animation.states[i] = 0;
        card->animation.frames[i] = 0;
        card->animation.times[i] = 0.0f;
        card->animation.blocked[i] = 0;
        card->animation.counters[0][i] = 0;
        card->animation.counters[1][i] = 0;
        card->animation.counters[2][i] = 0;
        card->animation.counters[3][i] = 0;
        card->animation.counters[4][i] = 0;
        card->animation.counters[5][i] = 0;
    }

    /* The menu's list boxes. */
    card->activeBox = &card->pageBox;
    gridNavigationConfigure(&card->pageBox, 399, 6, 1, 0, 1);
    s32 count = 0;
    u32 id;
    for (id = 1; id <= 60; id++) {
        if (flagValueIsPositive(id) && FUN_0047fbb4(id))
            card->usable[count++] = id;
    }
    for (id = 0x79f; id <= 0x79f + 63; id++) {
        if (flagValueIsPositive(id) && FUN_0047fbb4(id))
            card->usable[count++] = id;
    }
    gridNavigationConfigure(&card->skillBox, count, 6, 1, 0, 1);
    qsort(card->usable, count, 2, dataTableCompareIdsByOrder);
    gridNavigationConfigure(&card->selector, 4, 1, 4, 1, 1);
    u32 flags[3] = { 0x2e, 0x32, 0x33 };
    s32 flagCount = 0;
    for (i = 0; i < 3; i++) {
        if (gameDataFlagTestBit(flags[i]))
            flagCount++;
    }
    gridNavigationConfigure(&card->unk3B78, flagCount, 6, 1, 0, 1);
    campButtonHelpLoad();
    campButtonHelpAcquire();
    asdLoadFileAsyncSimple("battle/BattleUI.mbm", &card->messageFile, 0);
    wordTripleClear(&DAT_005e1560);
}

} /* extern "C" */
