/* NON_MATCHING: 16 rows, one call: the attack value of a weapon (layout part 0x527). Retail sums its coordinates as at
 * the gun's attack value (0x542: row y in r0, part y in r2, the y sum built in r2 before the x sum); this build loads
 * and sums them as at the hit range (0x546: the sums in r1 and r0, moved to r2 and r1 by the final adds). The same
 * statement gives retail's code at 0x542, 0x55E and 0x563; removing the element icon (0x529) from the same case gives
 * it here too. Every layout part has its own variable (one reused `part` cost 8 more rows at 0x528) and every site is
 * written `row + part + x`.
 * No change (16): the icon's x written without the parentheses, with `x + 24` first or last, the element cast.
 * The layout parts declared once at the top of the function (all eleven, or the weapon case's three) give a third
 * arrangement here (10 rows: the x sum in r0 as retail, the y sum still in r1 and moved to r2); one `equippedAttack`
 * for both attack cases is far off (71), as is the element's part declared at the case's scope (18). */
#include <stdio.h>
#include "camp/CampEquipment.h"
#include "camp/CampState.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/EquipmentRecord.h"
#include "code/Code0028.h"
#include "ui/AnimatedMessage.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "shard/W6_W6Match6_ItemIcon_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

extern "C" {
void textDrawFormattedAligned(u32 font, s32 x, s32 y, u32 align, u32 columns, u32 layer, const char *format, ...);
void drawSetColorFromRGBA8(u32 packed);
u8 *dataFindKindRecordWithAocOverrides(u32 id, s32 payload);
u32 recordAcceptsStickDirection(s32 id);
}

namespace {

// Paint stat differences relative to the player's currently equipped item.
static __inline void setStatComparisonColor(s32 value, s32 equipped)
{
    if (value > equipped)
        drawSetColorFromRGBA8(0x72E027FF);
    else if (value < equipped)
        drawSetColorFromRGBA8(0xDC0F14FF);
}

} // namespace

// Draw the selected equipment row and its comparison against the currently equipped item.
extern "C" void campDrawSelectedEquipmentDetails(s32 category, s32 row, u32 itemId, s32 x, s32 y)
{
    CampState *camp = g_camp;
    const PlayerDataIV *player = gameGetPlayerData();
    if (itemId == 0)
        return;

    const u32 texture = 0x1D;
    const u32 layer = 0x83;
    const EquipmentRecord *item = itemTableGetEquipmentRecord(itemId);
    u32 equippedId = 0;
    char text[32];
    const TextureTableEntryIV *rowEntry = asdTMTexTableEntryAt(texture, row + 0x42E);
    // The first two layout rows are the header; touch regions start at the first item.
    FUN_0028f694(rowEntry->x + x, rowEntry->y + y, camp->touch.rowRegions[row - 2]);

    const TextureTableEntryIV *nameEntry = asdTMTexTableEntryAt(texture, 0x523);
    const char *name = reinterpret_cast<const char *>(dataFindKindRecordWithAocOverrides(itemId, 0));
    if (name != NULL) {
        u32 color = 0xFFFFFFFF;
        if (!recordAcceptsStickDirection(itemId))
            color = 0x5A5A5AFF;
        textDrawString(rowEntry->x + nameEntry->x + x, rowEntry->y + nameEntry->y + y, 0.5f, 3, 0.0f,
                       color, 1.0f, name);
    }
    const TextureTableEntryIV *countEntry = asdTMTexTableEntryAt(texture, 0x52F);
    sprintf(text, "%d", flagValueRead(itemId));
    drawSetColorFromRGBA8(0xFFFFFFFF);
    textDrawFormattedAligned(0, rowEntry->x + countEntry->x + x, rowEntry->y + countEntry->y + y, 1, 2, layer, text);
    gxResetColorQuadToWhite();
    texDrawTableEntryAtStoredOrigin(2, texture, 0x521, rowEntry->x + x, rowEntry->y + y, layer);
    const TextureTableEntryIV *badgeEntry = asdTMTexTableEntryAt(texture, 0x522);
    BadgeWord equippedFlag;
    equippedFlag.i = 1;
    itemDrawCategoryBadge((s16)itemId, rowEntry->x + badgeEntry->x + x, rowEntry->y + badgeEntry->y + y, 0x88, equippedFlag);

    switch (category) {
    case 0x11:
    case 0x13: {
        if (category == 0x11)
            equippedId = player->equipped.weapon;
        if (category == 0x13)
            equippedId = player->equipped.bullets;
        s32 equippedAttack = equippedId == 0 ? 0 : itemTableGetEquipmentRecord(equippedId)->traitBits.group;
        drawSetColorFromRGBA8(0xFFFFFFFF);
        setStatComparisonColor(item->traitBits.group, equippedAttack);
        const TextureTableEntryIV *attackEntry = asdTMTexTableEntryAt(texture, 0x527);
        sprintf(text, "%d", item->traitBits.group);
        textDrawFormattedAligned(0, rowEntry->x + attackEntry->x + x, rowEntry->y + attackEntry->y + y, 1, 4, layer, text);
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
        const TextureTableEntryIV *attributeEntry = asdTMTexTableEntryAt(texture, 0x528);
        textDrawString(rowEntry->x + attributeEntry->x + x, rowEntry->y + attributeEntry->y + y, 0.5f, 3, 0.0f, 0xFFFFFFFF, 1.0f, text);
        if (item->element != 0) {
            const TextureTableEntryIV *elementEntry = asdTMTexTableEntryAt(texture, 0x529);
            messageKindForward(item->element, rowEntry->x + elementEntry->x + (x + 24), rowEntry->y + elementEntry->y + y, layer);
        }
        break;
    }
    case 0x12: {
        equippedId = player->equipped.gun;
        s32 equippedAttack = equippedId == 0 ? 0 : itemTableGetEquipmentRecord(equippedId)->traitBits.group;
        drawSetColorFromRGBA8(0xFFFFFFFF);
        setStatComparisonColor(item->traitBits.group, equippedAttack);
        const TextureTableEntryIV *gunAttackEntry = asdTMTexTableEntryAt(texture, 0x542);
        sprintf(text, "%d", item->traitBits.group);
        textDrawFormattedAligned(0, rowEntry->x + gunAttackEntry->x + x, rowEntry->y + gunAttackEntry->y + y, 1, 4, layer, text);
        gxResetColorQuadToWhite();

        if (item->target == 0)
            sprintf(text, "\x82r\x82\x89\x82\x8E\x82\x87\x82\x8C\x82\x85"); // Single
        if (item->target == 1)
            sprintf(text, "\x82`\x82\x8C\x82\x8C"); // All
        if (item->target == 6)
            sprintf(text, "\x82l\x82\x95\x82\x8C\x82\x94\x82\x89"); // Multi
        const TextureTableEntryIV *targetEntry = asdTMTexTableEntryAt(texture, 0x543);
        textDrawString(rowEntry->x + targetEntry->x + x, rowEntry->y + targetEntry->y + y, 0.5f, 3, 0.0f, 0xFFFFFFFF, 1.0f, text);
        u8 hitRange = item->hitRange;
        if ((hitRange & 15) == (hitRange >> 4))
            sprintf(text, "%d", hitRange & 15);
        else
            sprintf(text, "%d-%d", hitRange & 15, hitRange >> 4);
        drawSetColorFromRGBA8(0xFFFFFFFF);
        const TextureTableEntryIV *rangeEntry = asdTMTexTableEntryAt(texture, 0x546);
        textDrawFormattedAligned(0, rowEntry->x + rangeEntry->x + x, rowEntry->y + rangeEntry->y + y, 1, 3, layer, text);
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
        drawSetColorFromRGBA8(0xFFFFFFFF);
        setStatComparisonColor(item->hpBonus, equippedHp);
        const TextureTableEntryIV *hpEntry = asdTMTexTableEntryAt(texture, 0x55E);
        sprintf(text, "%d", item->hpBonus);
        textDrawFormattedAligned(0, rowEntry->x + hpEntry->x + x, rowEntry->y + hpEntry->y + y, 1, 5, layer, text);
        gxResetColorQuadToWhite();
        drawSetColorFromRGBA8(0xFFFFFFFF);
        setStatComparisonColor(item->mpBonus, equippedMp);
        const TextureTableEntryIV *mpEntry = asdTMTexTableEntryAt(texture, 0x563);
        sprintf(text, "%d", item->mpBonus);
        textDrawFormattedAligned(0, rowEntry->x + mpEntry->x + x, rowEntry->y + mpEntry->y + y, 1, 5, layer, text);
        gxResetColorQuadToWhite();
        break;
    }
    }
}
