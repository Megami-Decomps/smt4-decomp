/* NON_MATCHING: typed rewrite from retail's listing (348 raw / 186 shape rows, 586 rows on both sides): the
 * calls, their arguments, the blocks and the 436-byte frame are retail's. Left: retail keeps the closing
 * efctSetSpeed's 1.0f in s18 from the first block (vpush {d8-d9}; the build loads it at the call, so the opacity
 * and the texts' 0.0f sit in s16/s17 instead of s17/s16 and the spilled arguments 8 bytes lower); it converts the
 * two captions' coordinates through s0/s2 before moving them into place; it reads the selected pair's two words
 * one by one in the `detail` arm and with ldm in the `alternate` and default arms, which is why `detail` reads
 * the pair as `selected` and the other two as elements of `pairs` (built: the reverse loads); and it
 * pairs the 0x191 frame's y and depth in one strd. */
#include <stdio.h>
#include "camp/Unite/UniteWork.h"
#include "camp/Unite/UniteDraw.h"
#include "camp/CampStateQueries.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "addon/LookupRecord.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "gamedata/NkmBaseRecordA.h"
#include "shard/Shard0032.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* A pair of screen coordinates (FUN_0037c988 takes one by value). */
struct ScreenOffset {
    s32 x;
    s32 y;
};

extern "C" {

s32 uiSearchPrimary(ScrollSelection *list);
void numberFontDrawFormatted(u32 layer, s32 x, s32 y, u32 enabled, u32 flags, u32 mode, const char *format, ...);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 z, s32 tint);
void FUN_0020caec(u32 id, u32 a, u32 b, u32 c);
void unitRecordBuild(s32 id, UnitRecord *out);
void FUN_0037c988(UniteWorkA *work, UnitRecord *record, s32 drawExtra, s32 mode, u32 flags, f32 scale, ScreenOffset offset);
s32 statusCollectUnlearnedSkillsAboveLevel(u16 id, u32 level, const u16 *known, s16 *out, s32 skip);
void FUN_00185e84(s16 id, s32 x, s32 y, u32 layer, u32 a, u32 b);
void drawInteractiveEightRowList(UniteWorkA *work, struct SlotRecordA *record, s32 interactive, s32 x, s32 y, f32 effect);
void uiDrawListScrollBar(Object *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId, u32 arrowAId,
                  u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
                  u32 arrowBRegion, s32 layer, s32 horizontal);

enum {
    UNITE_SPRITES = 26,         /* the fusion screen's sprite table */
    LOST_SKILL_ROW_SLOT = 0x193, /* first of the lost-skill row slots */
    LOST_SKILL_ROWS = 8
};

/* Draws the skill inheritance screen at (x, y): the frame and its captions, the result demon's name, race,
 * level and icon, the eight slots, the skills the result would lose (or "None"), the candidate list and its
 * scroll bar. The demon is the previewed one, the selected pair's result (`detail`, `alternate`) or the
 * result of the first sorted pair. */
void uniteDrawSkillInheritancePanel(s32 x, s32 y, u32 mode, s32 preview, u32 opened, s32 detail, s32 alternate, f32 opacity)
{
    UniteWorkA *work = (UniteWorkA *)uniteGetWork();
    UnitRecord unit;
    char text[0x40];

    if (work == NULL) {
        return;
    }
    efctSetSpeed(opacity);
    texDrawCompositeSprite(2, UNITE_SPRITES, 1, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x163, x, y, 0x6a);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x164, x, y, 0x6a);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x165, x, y, 0x6f);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x166, x, y, 0x6a);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x167, x, y, 0x6f);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x16a, x, y, 0x6a);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x16b, x, y, 0x6f);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x16c, x, y, 0x74);

    const TextureTableEntryIV *caption = asdTMTexTableEntryAt(UNITE_SPRITES, 0x168);
    sprintf(text, "%s", "\x82h\x82\x8e\x82\x88\x82\x85\x82\x92\x82\x89\x82\x94\x82\x89\x82\x8e\x82\x87"); /* "Inheriting" */
    textDrawString((f32)(caption->x + x), (f32)(caption->y + y), 0.0f, 3, 0.0f, 0xff, opacity, text);
    caption = asdTMTexTableEntryAt(UNITE_SPRITES, 0x169);
    sprintf(text, "%s",
            "\x82o\x82\x81\x82\x92\x82\x85\x82\x8e\x82\x94\x81@\x82r\x82\x8b\x82\x89\x82\x8c\x82\x8c\x82\x93"); /* "Parent Skills" */
    textDrawString((f32)(caption->x + x), (f32)(caption->y + y), 0.0f, 3, 0.0f, 0xff, opacity, text);

    /* The arrows between the two lists, three frames of four ticks each. */
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x16d, x - (s32)work->transition.frame / 4 % 3, y, 0x6f);
    efctSetSpeed(vec2GetSpeed(&work->sprites.fade) * opacity);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x16e, x - (s32)work->transition.frame / 4 % 3, y, 0x74);
    efctSetSpeed(opacity);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x4f, x, y, 0x6a);

    const NkmBaseRecordA *demon;
    if (preview != 0) {
        demon = nkmBaseGetRecord(work->pairSort.previewIds[0]);
    } else if (detail != 0) {
        demon = nkmBaseGetRecord(work->pairSort.selected.resultId);
    } else if (alternate != 0) {
        demon = nkmBaseGetRecord(work->pairSort.pairs[0].resultId);
    } else {
        demon = nkmBaseGetRecord(work->pairSort.pairs[work->pairSort.sortedPairs[0]].resultId);
    }

    const TextureTableEntryIV *label = asdTMTexTableEntryAt(UNITE_SPRITES, 0x4d);
    sprintf(text, "%s", table01RecordLookupForContent(demon->id)->data);
    textDrawString((f32)(label->x + x), (f32)(label->y + y), 0.0f, 2, 0.0f, 0xffffffff, opacity, text);
    label = asdTMTexTableEntryAt(UNITE_SPRITES, 0x4e);
    sprintf(text, "%s", demonGetRaceLabel(demon->id, 0));
    textDrawString((f32)(label->x + x), (f32)(label->y + y), 0.0f, 2, 0.0f, SKILL_NAME_COLOR_SLOTTED, opacity, text);
    if (demon->level > 99) {
        const TextureTableEntryIV *level = asdTMTexTableEntryAt(UNITE_SPRITES, 0x265);
        numberFontDrawFormatted(0, level->x + x, level->y + y, 1, 3, 0x8d, "%d", demon->level);
    } else {
        const TextureTableEntryIV *level = asdTMTexTableEntryAt(UNITE_SPRITES, 0x51);
        numberFontDrawFormatted(0, level->x + x, level->y + y, 1, 2, 0x8d, "%d", demon->level);
    }

    /* The first free slot. */
    s32 freeSlot = 0;
    for (; freeSlot < uiSearchPrimary(&work->inheritanceA.slotList); freeSlot++) {
        if (work->inheritanceA.slots[freeSlot] == 0) {
            break;
        }
    }

    const TextureTableEntryIV *icon = asdTMTexTableEntryAt(UNITE_SPRITES, 0x1ed);
    uiDrawItemOrStatusIcon((s16)demon->id, icon->x + x, icon->y + y, 0x8d, 0);
    FUN_0020caec(demon->id, icon->x + x, icon->y + y, 0x92);
    unitRecordBuild(demon->id, &unit);
    getUnlockedSlotCount(&unit);
    ScreenOffset origin = { x, y };
    FUN_0037c988(work, &unit, opened, mode, freeSlot, opacity, origin);

    /* The skills the result's level would have taught it and the slots do not hold. */
    s16 lostSkills[LOST_SKILL_ROWS] = { 0 };
    statusCollectUnlearnedSkillsAboveLevel(demon->id, demon->level, work->inheritanceA.slots, lostSkills, 0);
    s32 lostCount = 0;
    for (; lostCount < LOST_SKILL_ROWS; lostCount++) {
        if (lostSkills[lostCount] == 0) {
            break;
        }
    }
    if (lostCount <= 0) {
        const TextureTableEntryIV *slot = asdTMTexTableEntryAt(UNITE_SPRITES, 0x197);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x16f, slot->x + x, slot->y + y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x170, slot->x + x, slot->y + y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x26f, slot->x + x, slot->y + y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x270, slot->x + x, slot->y + y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x171, slot->x + x, slot->y + y, 0x65);
        const TextureTableEntryIV *name = asdTMTexTableEntryAt(UNITE_SPRITES, 0x178);
        sprintf(text, "\x82m\x82\x8f\x82\x8e\x82\x85"); /* "None" */
        textDrawString((f32)(slot->x + name->x + x), (f32)(slot->y + name->y + y), 0.0f, 2, 0.0f, 0xf4f4f4ff, opacity,
                       text);
    } else {
        for (s32 row = 0; row < lostCount; row++) {
            const TextureTableEntryIV *slot = asdTMTexTableEntryAt(UNITE_SPRITES, row + LOST_SKILL_ROW_SLOT);
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x18e, slot->x + x, slot->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x18f, slot->x + x, slot->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x277, slot->x + x, slot->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x278, slot->x + x, slot->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x190, slot->x + x, slot->y + y, 0x65);
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x191, slot->x + x, slot->y + y, 0x6a);
            const TextureTableEntryIV *name = asdTMTexTableEntryAt(UNITE_SPRITES, 0x192);
            FUN_00185e84(lostSkills[row], slot->x + name->x + x, slot->y + name->y + y, 0x6f, 0, 0);
        }
    }

    drawInteractiveEightRowList(work, &unit, opened, x, y, opacity);
    efctSetSpeed(opacity);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x273, x, y, 0x97);
    uiDrawListScrollBar((Object *)&work->inheritanceA.skillList, x, y, UNITE_SPRITES, 0x2a, 0x2b, 0x2c, 0x26, 0x28, 0x27, 0x29,
                        work->touchA.scrollThumbRegion, work->touchA.scrollUpRegion, work->touchA.scrollDownRegion,
                        0x97, 0);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
