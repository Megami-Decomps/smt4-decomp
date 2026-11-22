/* NON_MATCHING: every call and store is retail's. Retail addresses the five animation tables from one pool word
 * (they are this unit's own constant tables: not written out yet), reaches unk3648/unk364C from a work + 0x3600
 * base and gold through a pool offset, derives the three cleared flag bytes' offsets differently and uses other
 * scratch registers in the -1 fill. */
#include "result/Result.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_UiResourceParameters.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "camp/PartyPanel/PartyPanel.h"
#include "gamedata/GameSaveData.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"
#include "shard/W6_W6Match2_HelpResources.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiControl.h"
#include "ui/UiSpriteApi.h"

enum {
    TEX_TABLE_RESULT = 0x28,
    TEX_TABLE_ICONS = 0xd
};

extern "C" {

extern const char DAT_00405da4[]; /* "battle/Result.bf" */
extern const char DAT_00405d8c[]; /* "battle/ResultMsg.mbm" */
extern const char DAT_00405d78[]; /* "battle/DevilLvUp.bf" */
/* The result sprites' animation resource tables. */
extern const u8 DAT_004058d4[];
extern const u8 DAT_0040591c[];
extern const u8 DAT_004059c4[];
extern const u8 DAT_00405a30[];
extern const u8 DAT_00405a4c[];

void statusAcquireSharedResources(void);
void buttonHelpCreate(void);
void statusBustUpPortraitAcquire(s32 id, s32 byDevilId);
void gameGlobalsSetSelected(s32 selected);
void mapIfRequestResource(s32 id);

/* Fills a new result screen block: requests the textures, portraits and scripts, clears the reward totals and
 * the per-entry state, and sets up every sprite of the screen. */
void resultInitialize(ResultWork *work)
{
    for (s32 i = 0; i < 2; i++) {
        asdTMTexTableLoadEntryAsync(TEX_TABLE_RESULT, i);
    }
    SaveSlotTableIV *table = gameGetSlotTable();
    statusBustUpPortraitAcquire(-1, 1);
    for (s32 i = 0; i < 3; i++) {
        if (table->active[i] >= 0) {
            statusBustUpPortraitAcquire((s16)gameGetUnitRecord(table->active[i])->id, 1);
        }
    }
    mapIfRequestResource(0x14);
    mapIfRequestResource(0x25);

    work->buffer3564 = 0;
    work->buffer356C = 0;
    work->buffer3570 = 0;
    work->process = NULL;
    asdLoadFileAsyncSimple(DAT_00405da4, &work->buffer3564, 0);
    asdLoadFileAsyncSimple(DAT_00405d8c, &work->buffer356C, 0);
    asdLoadFileAsyncSimple(DAT_00405d78, &work->buffer3570, 0);

    memClear(&work->totalExperience, sizeof(work->totalExperience) + sizeof(work->unitExperience));
    for (s32 i = 0; i < RESULT_ITEM_SLOTS; i++) {
        work->itemIds[i] = 0;
    }
    for (s32 i = 0; i < RESULT_ITEM_SLOTS; i++) {
        work->itemCounts[i] = 0;
    }
    work->unk3648 = 0;
    work->unk364C = 0;
    work->gold = 0;
    for (s32 i = 0; i < RESULT_ENTRY_COUNT; i++) {
        work->unkCF96[i] = -1;
    }
    work->unkCFCA = 0;
    work->current = 0;
    work->unkD640 = 0;
    work->rewardFlagA = 0;
    work->rewardFlagB = 0;

    drawParameterBlockClear(&resultScreenSprites(work)->parameters);
    paramsInit(&resultScreenSprites(work)->parameters, DAT_004058d4, 0x48, DAT_0040591c, 0xa8, DAT_004059c4, 0x6c, DAT_00405a30, 0x1c,
               DAT_00405a4c, 0x32c);

    uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_BACKGROUND], TEX_TABLE_RESULT, 0, &resultScreenSprites(work)->parameters, 1,
                                1.0f);
    uiSpriteSetKeyframe(&resultScreenSprites(work)->sprites[RESULT_SPRITE_BACKGROUND], 0, 0);
    for (s32 i = 0; i < 6; i++) {
        uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_ROWS + i], TEX_TABLE_RESULT, 0, &resultScreenSprites(work)->parameters,
                                    1, 1.0f);
        uiSpriteSetKeyframe(&resultScreenSprites(work)->sprites[RESULT_SPRITE_ROWS + i], 4, 0);
    }
    uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_STAT_HIGHLIGHT], TEX_TABLE_RESULT, 0,
                                &resultScreenSprites(work)->parameters, 1, 1.0f);
    spriteStartAnimationByIndex(&resultScreenSprites(work)->sprites[RESULT_SPRITE_STAT_HIGHLIGHT], 4);
    uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_HEADER], TEX_TABLE_RESULT, 0, &resultScreenSprites(work)->parameters, 1,
                                1.0f);
    uiSpriteSetKeyframe(&resultScreenSprites(work)->sprites[RESULT_SPRITE_HEADER], 2, 0);
    uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_REWARD], TEX_TABLE_RESULT, 0, &resultScreenSprites(work)->parameters, 1,
                                1.0f);
    uiSpriteSetKeyframe(&resultScreenSprites(work)->sprites[RESULT_SPRITE_REWARD], 0, 0);
    uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_DETAIL], TEX_TABLE_RESULT, 0, &resultScreenSprites(work)->parameters, 1,
                                1.0f);
    uiSpriteSetKeyframe(&resultScreenSprites(work)->sprites[RESULT_SPRITE_DETAIL], 0, 0);
    uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_OVERLAY], TEX_TABLE_RESULT, 1000, &resultScreenSprites(work)->parameters,
                                101, 1.0f);
    uiSpriteStartFrameSequence(&resultScreenSprites(work)->sprites[RESULT_SPRITE_OVERLAY], 0);
    uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_OVERLAY + 1], TEX_TABLE_RESULT, 1000,
                                &resultScreenSprites(work)->parameters, 101, 1.0f);
    uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_CURTAIN], TEX_TABLE_RESULT, 1000, &resultScreenSprites(work)->parameters,
                                101, 1.0f);
    spriteStartAnimationByIndex(&resultScreenSprites(work)->sprites[RESULT_SPRITE_CURTAIN], 5);
    for (s32 i = 0; i < 16; i++) {
        uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_MARKERS + i], TEX_TABLE_RESULT, 0,
                                    &resultScreenSprites(work)->parameters, 1, 1.0f);
        spriteStartAnimationByIndex(&resultScreenSprites(work)->sprites[RESULT_SPRITE_MARKERS + i], 0);
    }

    for (s32 i = 0; i < RESULT_ENTRY_COUNT; i++) {
        work->unkD468[i] = 0;
        work->unkD2D8[i] = 0;
        work->unkD49A[i] = 0;
        work->unkD4FE[i] = 0;
        work->unkD517[i] = 0;
        uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_ENTRIES + i], TEX_TABLE_RESULT, 26,
                                    &resultScreenSprites(work)->parameters, 201, 1.0f);
        spriteSetLayer(&resultScreenSprites(work)->sprites[RESULT_SPRITE_ENTRIES + i], 2);
    }
    for (s32 row = 0; row < 4; row++) {
        for (s32 column = 0; column < 7; column++) {
            s32 icon = row * 7 + column + RESULT_SPRITE_ICONS;
            uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[icon], TEX_TABLE_ICONS, 0x80c,
                                        &resultScreenSprites(work)->parameters, 151, 1.0f);
            spriteStartAnimationByIndex(&resultScreenSprites(work)->sprites[icon], 1);
        }
    }
    for (s32 i = 0; i < RESULT_ITEM_SLOTS; i++) {
        uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_ITEMS + i], TEX_TABLE_RESULT, 62,
                                    &resultScreenSprites(work)->parameters, 106, 1.0f);
        spriteStartAnimationByIndex(&resultScreenSprites(work)->sprites[RESULT_SPRITE_ITEMS + i], 8);
        uiSpriteStateInitFromSource(&resultScreenSprites(work)->sprites[RESULT_SPRITE_ITEM_COUNTS + i], TEX_TABLE_RESULT, 281,
                                    &resultScreenSprites(work)->parameters, 241, 0.0f);
        spriteStartAnimationByIndex(&resultScreenSprites(work)->sprites[RESULT_SPRITE_ITEM_COUNTS + i], 9);
        spriteSetLayer(&resultScreenSprites(work)->sprites[RESULT_SPRITE_ITEM_COUNTS + i], 2);
    }

    for (s32 i = 0; i < 6; i++) {
        work->unk3548[i] = 0;
    }
    statusAcquireSharedResources();
    gameGlobalsSetSelected(0);
    statusDownSwitchTab(0);
    gameSetIconDisplayEnabled(0);
    buttonHelpCreate();
}

} /* extern "C" */
