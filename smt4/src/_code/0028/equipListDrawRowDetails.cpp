/* NON_MATCHING: 40 rows, all in three calls of the weapon and gun cases (the attack value at 0x518, the gun's
 * attack value at 0x535 and its target text at 0x536): retail loads and sums the row and part coordinates in
 * another order and through other scratch registers. Every site is written `row + part + x` (no per-site order
 * picked by score). Everything else agrees, including the item id's spill to the parameter save area.
 * Wave 91: the sum has only two distinct forms: armcc sorts its operands, so the twelve orders and groupings of
 * row, part and x give 40 lines (row before part) or 100 (part before row) wherever x stands; inline x/y getters
 * compile like the fields. Named px/py locals per call score 253 or more, a non-const `layer` 105. At the two
 * attack values the stack arguments leave a constant in r0 (the layer, the column count) and retail's first
 * halfword avoids r0 where this build's takes it; at the gun's target text retail loads the part's x into ip and
 * finishes the y sum before the x sum. Scoring all 64 per-site orders of the three sites (a diagnostic, not a
 * candidate) gives 40 at best: the order is not the cause.
 * The layer as a by-value int/float word (textDrawFormattedAligned keeps that argument in s16) scores 113 or more.
 * Retail's weapon attribute text and gun target text are the same instructions; this build matches the first
 * and not the second from the same source line, so the cause is allocation state, not that line. */
#include <stdio.h>
#include "camp/CampEquipment.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/EquipmentRecord.h"
#include "code/Code0028.h"
#include "ui/AnimatedMessage.h"
#include "text/TextDraw.h"
#include "shard/W6_W6Match6_ItemIcon_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

extern "C" {
void textDrawFormattedAligned(u32 font, s32 x, s32 y, u32 align, u32 columns, u32 layer, const char *format, ...);
void drawSetColorFromRGBA8(u32 packed);
u8 *dataFindKindRecordWithAocOverrides(u32 id, s32 payload);
u32 recordAcceptsStickDirection(s32 id);
}

namespace {

// Paint a stat green when it beats the player's equipped item and red when it is worse.
static __inline void setStatComparisonColor(s32 value, s32 equipped)
{
    if (value > equipped)
        drawSetColorFromRGBA8(0x008400FF);
    else if (value < equipped)
        drawSetColorFromRGBA8(0xDC0F14FF);
}

} // namespace

// Draw one equipment list row (name, owned count, category badge) and its comparison against the
// item the player has equipped in that category.
extern "C" void equipListDrawRowDetails(s32 category, s32 row, u32 itemId, s32 x, s32 y)
{
    const PlayerDataIV *player = gameGetPlayerData();
    if (itemId == 0)
        return;

    const u32 texture = 0x1D;
    const u32 layer = 0x6F;
    const EquipmentRecord *item = itemTableGetEquipmentRecord(itemId);
    u32 equippedId = 0;
    char text[32];
    const TextureTableEntryIV *rowEntry = asdTMTexTableEntryAt(texture, row + 0x40D);
    const TextureTableEntryIV *part = asdTMTexTableEntryAt(texture, 0x514);
    const char *name = reinterpret_cast<const char *>(dataFindKindRecordWithAocOverrides(itemId, 0));
    if (name != NULL) {
        u32 color = 0xFF;
        if (!recordAcceptsStickDirection(itemId))
            color = 0x5A5A5AFF;
        textDrawString(rowEntry->x + part->x + x, rowEntry->y + part->y + y, 0.55f, 2, 0.0f,
                       color, 1.0f, name);
    }
    part = asdTMTexTableEntryAt(texture, 0x520);
    sprintf(text, "%d", flagValueRead(itemId));
    drawSetColorFromRGBA8(0xFF);
    textDrawFormattedAligned(0, rowEntry->x + part->x + x, rowEntry->y + part->y + y, 1, 2, layer, text);
    gxResetColorQuadToWhite();
    part = asdTMTexTableEntryAt(texture, 0x513);
    BadgeWord equippedFlag;
    equippedFlag.i = 1;
    itemDrawCategoryBadge((s16)itemId, rowEntry->x + part->x + x, rowEntry->y + part->y + y, layer, equippedFlag);

    switch (category) {
    case 0x11:
    case 0x13: {
        if (category == 0x11)
            equippedId = player->equipped.weapon;
        if (category == 0x13)
            equippedId = player->equipped.bullets;
        s32 equippedAttack;
        if (equippedId == 0)
            equippedAttack = 0;
        else
            equippedAttack = itemTableGetEquipmentRecord(equippedId)->traitBits.group;
        drawSetColorFromRGBA8(0xFF);
        setStatComparisonColor(item->traitBits.group, equippedAttack);
        part = asdTMTexTableEntryAt(texture, 0x518);
        sprintf(text, "%d", item->traitBits.group);
        textDrawFormattedAligned(0, rowEntry->x + part->x + x, rowEntry->y + part->y + y, 1, 4, layer, text);
        gxResetColorQuadToWhite();

        // These Shift-JIS strings are the weapon's attack attributes.
        if (item->traitBits.attribute == 0)
            sprintf(text, "\x82r\x82\x8C\x82\x81\x82\x93\x82\x88"); // Slash
        if (item->traitBits.attribute == 1)
            sprintf(text, "\x82o\x82\x89\x82\x85\x82\x92\x82\x83\x82\x85"); // Pierce
        if (item->traitBits.attribute == 2)
            sprintf(text, "\x82\x65\x82\x89\x82\x92\x82\x85"); // Fire
        if (item->traitBits.attribute == 3)
            sprintf(text, "\x82h\x82\x83\x82\x85"); // Ice
        if (item->traitBits.attribute == 4)
            sprintf(text, "\x82\x64\x82\x8C\x82\x85\x82\x83"); // Elec
        if (item->traitBits.attribute == 5)
            sprintf(text, "\x82\x65\x82\x8F\x82\x92\x82\x83\x82\x85"); // Force
        if (item->traitBits.attribute == 6)
            sprintf(text, "\x82k\x82\x89\x82\x87\x82\x88\x82\x94"); // Light
        if (item->traitBits.attribute == 7)
            sprintf(text, "\x82\x63\x82\x81\x82\x92\x82\x8B"); // Dark
        if (item->traitBits.attribute == 0x11)
            sprintf(text, "\x82`\x82\x8C\x82\x8D\x82\x89\x82\x87\x82\x88\x82\x94\x82\x99"); // Almighty
        part = asdTMTexTableEntryAt(texture, 0x519);
        textDrawString(rowEntry->x + part->x + x, rowEntry->y + part->y + y, 0.55f, 2, 0.0f, 0xFF, 1.0f, text);
        if (item->element != 0) {
            part = asdTMTexTableEntryAt(texture, 0x51A);
            messageKindForward(item->element, rowEntry->x + part->x + (x + 24), rowEntry->y + part->y + y, layer);
        }
        break;
    }
    case 0x12: {
        equippedId = player->equipped.gun;
        s32 equippedAttack;
        if (equippedId == 0)
            equippedAttack = 0;
        else
            equippedAttack = itemTableGetEquipmentRecord(equippedId)->traitBits.group;
        drawSetColorFromRGBA8(0xFF);
        setStatComparisonColor(item->traitBits.group, equippedAttack);
        part = asdTMTexTableEntryAt(texture, 0x535);
        sprintf(text, "%d", item->traitBits.group);
        textDrawFormattedAligned(0, rowEntry->x + part->x + x, rowEntry->y + part->y + y, 1, 4, layer, text);
        gxResetColorQuadToWhite();

        // The gun's target range.
        if (item->target == 0)
            sprintf(text, "\x82r\x82\x89\x82\x8E\x82\x87\x82\x8C\x82\x85"); // Single
        if (item->target == 1)
            sprintf(text, "\x82`\x82\x8C\x82\x8C"); // All
        if (item->target == 6)
            sprintf(text, "\x82l\x82\x95\x82\x8C\x82\x94\x82\x89"); // Multi
        part = asdTMTexTableEntryAt(texture, 0x536);
        textDrawString(rowEntry->x + part->x + x, rowEntry->y + part->y + y, 0.55f, 2, 0.0f, 0xFF, 1.0f, text);
        u8 hitRange = item->hitRange;
        if ((hitRange & 15) == (hitRange >> 4))
            sprintf(text, "%d", hitRange & 15);
        else
            sprintf(text, "%d-%d", hitRange & 15, hitRange >> 4);
        drawSetColorFromRGBA8(0xFF);
        part = asdTMTexTableEntryAt(texture, 0x539);
        textDrawFormattedAligned(0, rowEntry->x + part->x + x, rowEntry->y + part->y + y, 1, 3, layer, text);
        gxResetColorQuadToWhite();
        break;
    }
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17: {
        if (category == 0x14)
            equippedId = player->equipped.head;
        if (category == 0x15)
            equippedId = player->equipped.body;
        if (category == 0x16)
            equippedId = player->equipped.legs;
        if (category == 0x17)
            equippedId = player->equipped.accessory;
        s32 equippedHp;
        s32 equippedMp;
        if (equippedId == 0) {
            equippedHp = 0;
            equippedMp = 0;
        } else {
            equippedHp = itemTableGetEquipmentRecord(equippedId)->hpBonus;
            equippedMp = itemTableGetEquipmentRecord(equippedId)->mpBonus;
        }
        drawSetColorFromRGBA8(0xFF);
        setStatComparisonColor(item->hpBonus, equippedHp);
        part = asdTMTexTableEntryAt(texture, 0x54F);
        sprintf(text, "%d", item->hpBonus);
        textDrawFormattedAligned(0, rowEntry->x + part->x + x, rowEntry->y + part->y + y, 1, 5, layer, text);
        gxResetColorQuadToWhite();
        drawSetColorFromRGBA8(0xFF);
        setStatComparisonColor(item->mpBonus, equippedMp);
        part = asdTMTexTableEntryAt(texture, 0x554);
        sprintf(text, "%d", item->mpBonus);
        textDrawFormattedAligned(0, rowEntry->x + part->x + x, rowEntry->y + part->y + y, 1, 5, layer, text);
        gxResetColorQuadToWhite();
        break;
    }
    }
}
