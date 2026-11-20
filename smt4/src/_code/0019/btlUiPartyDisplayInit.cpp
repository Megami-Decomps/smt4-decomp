/* NON_MATCHING: 138 lines, most of them branch targets moved by the first block, which is two
 * instructions shorter than retail's. Retail keeps the -1 for `page` in r8 and stores unk3058/page
 * with one stm (unit and unk3044 apart), and derives the alpha and position key tables from the
 * scale table's address; this build pairs unit/unk3044 and chains the tables from the command
 * list. The party loop's three address temporaries are also numbered differently. */
#include "battle/ActorCardAnimations.h"
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_UiResourceParameters.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/FlagValueIsPositive.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SupportUnitRecord.h"
#include "shard/GameOptions.h"
#include "code/Code002b.h"

extern "C" {
void partyCaptureEligibleSkills(ActorCardAnimations *card);
void partyStatusRefreshSlot(void *work, s32 slot, s32 refreshIndex);
void FUN_0028e9ec(ActorCardAnimations *card);
void statusBustUpPortraitAcquire(s32 id, s32 byDevilId);
void uiStoreTextureEntryCenter(UiSpriteState *sprite, u32 textureTable, u32 image);
void gridNavigationConfigure(GridNavigation *work, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
void qsort(void *elements, u32 count, u32 elementSize, s32 (*compare)(const void *, const void *));
s32 FUN_0021960c(const void *a, const void *b);
u32 btlActorIsDown(u32 actor);
s32 FUN_0028e9a0(u32 id);
SupportUnitRecord *supportUnitGetEntry(s32 kind, u32 index);
void buttonHelpAcquireResources(void);
void buttonHelpCreate(void);
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
    {1.0f, 0.0f, 20, 0, 0},
    {1.0f, 0.5f, 20, 0, 0},
    {0.5f, 0.8f, 20, 0, 0},
    {0.8f, 0.5f, 40, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
    {0.0f, 1.0f, 8, 0, 0},
    {1.0f, 0.0f, 6, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 16, 0, 0},
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
    {-3, 0, {0}, -3, 10, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, 11, 0, {0}, -3, 0, {0}},
    {-3, 0, {0}, -3, -2, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {1, 0, {0}, -3, 0, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {9, 0, {0}, -3, 12, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 13, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 14, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 15, 0, {0}, 4, 0, {0}},
    {-3, 0, {0}, -3, -3, 0, {0}, 5, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 16, 0, {0}, 6, 0, {0}},
    {-3, 0, {0}, -3, 17, 0, {0}, -3, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
    {-3, 0, {0}, -3, 18, 0, {0}, 7, 0, {0}},
    {-1, 0, {0}, -1, -1, 0, {0}, -1, 0, {0}},
};

extern "C" {

/* Sets up the battle UI's party display for the guest `unit`: every sprite, the party members'
 * portraits and panels, the menu's list boxes, and the message file. */
void btlUiPartyDisplayInit(ActorCardAnimations *card, u32 unit)
{
    s32 i;

    card->state = 0;
    card->mode = 0;
    card->unit = unit;
    card->unk3044 = 0;
    card->unk3058 = 0;
    card->page = -1;
    card->unk307C = 0;
    card->unk3060 = 0x20;
    card->originX = 0;
    card->originY = 0;
    card->unk388C = 0.0f;
    card->unk3890 = 0;
    card->unk3894 = 0.0f;
    card->unk3898 = 0;
    FUN_001e0698();
    drawParameterBlockClear(&card->resources);
    paramsInit(&card->resources, sPositionKeys, sizeof(sPositionKeys), sAlphaKeys, sizeof(sAlphaKeys),
               sScaleKeys, sizeof(sScaleKeys), NULL, 0, sCommands, sizeof(sCommands));

    for (i = 0; i < 4; i++) {
        uiSpriteStateInitFromSource(&card->memberFrames[i], 0x15, 0, &card->resources, 6, 1.0f);
        spriteStartAnimationByIndex(&card->memberFrames[i], 0);
        uiSpriteStateInitFromSource(&card->memberGlows[i], 0x15, 0, &card->resources, 6, 1.0f);
        if (i == 0)
            uiSpriteSetImageKeyframe(&card->memberGlows[0], 9, 0);
        else
            uiSpriteSetImageKeyframe(&card->memberGlows[i], 8, 0);
        uiSpriteStateInitFromSource(&card->memberGlowMarks[i], 0x15, 0x1b, &card->resources, 0x1f, 1.0f);
        uiStoreTextureEntryCenter(&card->memberGlowMarks[i], 0x15, 0x45);
        spriteStartAnimationByIndex(&card->memberGlowMarks[i], 6);
        uiSpriteStateInitFromSource(&card->sprites[0][i], 0x15, 0x1c8, &card->resources, 0x1a, 1.0f);
        spriteStartAnimationByIndex(&card->sprites[0][i], 11);
        uiSpriteStateInitFromSource(&card->sprites[1][i], 0x15, 0xbba, &card->resources, 0x1a, 1.0f);
        uiStoreTextureEntryCenter(&card->sprites[1][i], 0x15, 0x1ca);
        spriteStartAnimationByIndex(&card->sprites[1][i], 13);
        uiSpriteStateInitFromSource(&card->sprites[2][i], 0x15, 0xbbe, &card->resources, 0x25, 1.0f);
        uiStoreTextureEntryCenter(&card->sprites[2][i], 0x15, 0x1ca);
        spriteStartAnimationByIndex(&card->sprites[2][i], 14);
    }
    uiSpriteStateInitFromSource(&card->guestFrame, 0x15, 0x5e, &card->resources, 6, 1.0f);
    if (btlActorIsDown(card->unit) && FUN_002b6ad0())
        uiSpriteSetKeyframe(&card->guestFrame, 13, 0);
    uiSpriteStateInitFromSource(&card->backdrop, 0x15, 0xdb, &card->resources, 6, 1.0f);
    spriteStartAnimationByIndex(&card->backdrop, 0);
    for (i = 0; i < 8; i++) {
        uiSpriteStateInitFromSource(&card->unk0138[i], 0x15, 0xdd, &card->resources, 6, 1.0f);
        spriteStartAnimationByIndex(&card->unk0138[i], 0);
    }
    uiSpriteStateInitFromSource(&card->intro, 0x15, 0xde, &card->resources, 6, 1.0f);
    spriteStartAnimationByIndex(&card->intro, 1);
    uiSpriteStateInitFromSource(&card->unk0598, 0x15, 0x4a, &card->resources, 6, 1.0f);
    spriteStartAnimationByIndex(&card->unk0598, 2);
    uiSpriteStateInitFromSource(&card->unk0624, 0x15, 0x96, &card->resources, 6, 1.0f);
    spriteStartAnimationByIndex(&card->unk0624, 3);
    uiSpriteStateInitFromSource(&card->unk06B0, 0x15, 0x9c, &card->resources, 6, 1.0f);
    uiSpriteSetKeyframe(&card->unk06B0, 6, 0);
    for (i = 0; i < 6; i++)
        uiSpriteStateInitFromSource(&card->unk0E58[i], 0x15, 0x72, &card->resources, 6, 1.0f);
    for (i = 0; i < 25; i++) {
        uiSpriteStateInitFromSource(&card->unk1A60[i], 0xd, 2000, &card->resources, 0xf1, 1.0f);
        spriteStartAnimationByIndex(&card->unk1A60[i], 4);
    }
    for (i = 0; i < 5; i++) {
        uiSpriteStateInitFromSource(&card->unk280C[i], 0x15, 1000, &card->resources, 0xf1, 1.0f);
        spriteStartAnimationByIndex(&card->unk280C[i], 5);
        uiSpriteStateInitFromSource(&card->unk2AC8[i], 0x15, 0x3ea, &card->resources, 0xf1, 1.0f);
        spriteStartAnimationByIndex(&card->unk2AC8[i], 5);
    }
    for (i = 0; i < 5; i++) {
        uiSpriteStateInitFromSource(&card->unk2D84[i], 0x15, 0x3ee, &card->resources, 0xf1, 1.0f);
        spriteStartAnimationByIndex(&card->unk2D84[i], 7);
    }
    uiSpriteStateInitFromSource(&card->unk11A0, 0x15, 0x110, &card->resources, 6, 1.0f);
    spriteStartAnimationByIndex(&card->unk11A0, 0);
    uiSpriteStateInitFromSource(&card->guestFlash, 0x15, 0, &card->resources, 6, 1.0f);
    spriteStartAnimationByIndex(&card->guestFlash, 9);
    FUN_0028e9ec(card);
    uiSpriteStateInitFromSource(&card->unk122C, 0x15, 0x124, &card->resources, 6, 1.0f);
    spriteStartAnimationByIndex(&card->unk122C, 8);
    uiSpriteStateInitFromSource(&card->slide, 0x15, 0, &card->resources, 6, 1.0f);

    /* The player's portrait, then each party member's. */
    statusBustUpPortraitAcquire(-1, 1);
    for (i = 0; i < 3; i++) {
        if (gameGetSlotTable()->active[i] >= 0) {
            StatBlock *record = gameGetUnitRecord(gameGetSlotTable()->active[i]);
            statusBustUpPortraitAcquire((s16)record->id, 1);
            card->memberModelIds[i] = record->id;
            card->unitIndices[i + 1] = gameGetSlotTable()->active[i];
            card->vacant[i + 1] = 0;
        } else {
            card->memberModelIds[i] = 0;
            card->unitIndices[i + 1] = -1;
            card->vacant[i + 1] = 1;
        }
    }
    if (FUN_002b6ad0()) {
        u16 index = ((GameOptions *)gameGetSupportUnitData())->supportIndex;
        SupportUnitRecord *support = supportUnitGetEntry((s16)((GameOptions *)gameGetSupportUnitData())->unk604, index);
        statusBustUpPortraitAcquire((s16)(support->demon.id + 1), 0);
    }
    partyStatusRefreshSlot(card, 0, 1);
    partyStatusRefreshSlot(card, 1, 1);
    partyStatusRefreshSlot(card, 2, 1);
    partyStatusRefreshSlot(card, 3, 1);
    partyStatusRefreshSlot(card, 4, 1);
    partyCaptureEligibleSkills(card);
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
    gridNavigationConfigure(&card->headerBox, 100, 6, 1, 0, 1);
    s32 count = 0;
    for (u32 id = 1; id <= 60; id++) {
        if (flagValueIsPositive(id) && FUN_0028e9a0(id))
            card->usable[count++] = id;
    }
    gridNavigationConfigure(&card->skillBox, count, 6, 1, 0, 1);
    qsort(card->usable, count, 2, FUN_0021960c);
    gridNavigationConfigure(&card->selector, 4, 1, 4, 1, 1);
    s32 flagCount = 0;
    for (i = 0; i < 6; i++) {
        if (flagBitIsSet(i + 0x2e))
            flagCount++;
    }
    gridNavigationConfigure(&card->unk3344, flagCount, 6, 1, 0, 1);
    buttonHelpAcquireResources();
    buttonHelpCreate();
    asdLoadFileAsyncSimple("battle/BattleUI.mbm", &card->messageFile, 0);
}

} /* extern "C" */
