/* NON_MATCHING: 335 rows: the item-ID spill, stat-colour constant placement and several draw-argument schedules differ. */
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
void FUN_002bdf94(u32 font, s32 x, s32 y, u32 align, u32 columns, u32 layer, const char *format, ...);
void drawSetColorFromRGBA8(u32 packed);
u8 *dataFindKindRecordWithAocOverrides(u32 id, s32 payload);
u32 recordAcceptsStickDirection(s32 id);
}

namespace {

// Paint stat differences relative to the player's currently equipped item.
static __inline void setStatComparisonColor(s32 value, s32 equipped)
{
    u32 color;
    if (value < equipped)
        color = 0xDC0F14FF;
    else if (value > equipped)
        color = 0x72E027FF;
    else
        return;
    drawSetColorFromRGBA8(color);
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
    char text[32];
    const TextureTableEntryIV *rowEntry = asdTMTexTableEntryAt(texture, row + 0x42E);
    // The first two layout rows are the header; touch regions start at the first item.
    FUN_0028f694(rowEntry->x + x, rowEntry->y + y, camp->touch.rowRegions[row - 2]);

    const TextureTableEntryIV *part = asdTMTexTableEntryAt(texture, 0x523);
    const char *name = reinterpret_cast<const char *>(dataFindKindRecordWithAocOverrides(itemId, 0));
    if (name != NULL) {
        u32 color = 0xFFFFFFFF;
        if (!recordAcceptsStickDirection(itemId))
            color = 0x5A5A5AFF;
        textDrawString(rowEntry->x + part->x + x, rowEntry->y + part->y + y, 0.5f, 3, 0.0f,
                       color, 1.0f, name);
    }
    part = asdTMTexTableEntryAt(texture, 0x52F);
    sprintf(text, "%d", flagValueRead(itemId));
    drawSetColorFromRGBA8(0xFFFFFFFF);
    FUN_002bdf94(0, part->x + rowEntry->x + x, rowEntry->y + part->y + y, 1, 2, layer, text);
    gxResetColorQuadToWhite();
    texDrawTableEntryAtStoredOrigin(2, texture, 0x521, rowEntry->x + x, rowEntry->y + y, layer);
    part = asdTMTexTableEntryAt(texture, 0x522);
    BadgeWord equippedFlag;
    equippedFlag.i = 1;
    itemDrawCategoryBadge((s16)itemId, part->x + rowEntry->x + x, rowEntry->y + part->y + y, 0x88, equippedFlag);

    switch (category) {
    case 0x11:
    case 0x13: {
        u16 equippedId = 0;
        if (category == 0x11)
            equippedId = player->equipped.weapon;
        else if (category == 0x13)
            equippedId = player->equipped.bullets;
        s32 equippedAttack = equippedId ? itemTableGetEquipmentRecord(equippedId)->traitBits.group : 0;
        drawSetColorFromRGBA8(0xFFFFFFFF);
        setStatComparisonColor(item->traitBits.group, equippedAttack);
        part = asdTMTexTableEntryAt(texture, 0x527);
        sprintf(text, "%d", item->traitBits.group);
        FUN_002bdf94(0, rowEntry->x + part->x + x, part->y + rowEntry->y + y, 1, 4, layer, text);
        gxResetColorQuadToWhite();

        // These Shift-JIS strings are the weapon's attack attributes.
        if (item->traitBits.attribute == 0)
            sprintf(text, "\x82r\x82\x8C\x82\x81\x82\x93\x82\x88"); // Slash
        if (item->traitBits.attribute == 1)
            sprintf(text, "\x82o\x82\x89\x82\x85\x82\x92\x82\x83\x82\x85"); // Pierce
        if (item->traitBits.attribute == 2)
            sprintf(text, "\x82e\x82\x89\x82\x92\x82\x85"); // Fire
        if (item->traitBits.attribute == 3)
            sprintf(text, "\x82h\x82\x83\x82\x85"); // Ice
        if (item->traitBits.attribute == 4)
            sprintf(text, "\x82d\x82\x8C\x82\x85\x82\x83"); // Elec
        if (item->traitBits.attribute == 5)
            sprintf(text, "\x82e\x82\x8F\x82\x92\x82\x83\x82\x85"); // Force
        if (item->traitBits.attribute == 6)
            sprintf(text, "\x82k\x82\x89\x82\x87\x82\x88\x82\x94"); // Light
        if (item->traitBits.attribute == 7)
            sprintf(text, "\x82c\x82\x81\x82\x92\x82\x8B"); // Dark
        if (item->traitBits.attribute == 0x11)
            sprintf(text, "\x82`\x82\x8C\x82\x8D\x82\x89\x82\x87\x82\x88\x82\x94\x82\x99"); // Almighty
        part = asdTMTexTableEntryAt(texture, 0x528);
        textDrawString(rowEntry->x + part->x + x, rowEntry->y + part->y + y, 0.5f, 3, 0.0f, 0xFFFFFFFF, 1.0f, text);
        if (item->element != 0) {
            part = asdTMTexTableEntryAt(texture, 0x529);
            messageKindForward(item->element, rowEntry->x + part->x + (x + 24), part->y + rowEntry->y + y, layer);
        }
        break;
    }
    case 0x12: {
        u16 equippedId = player->equipped.gun;
        s32 equippedAttack = equippedId ? itemTableGetEquipmentRecord(equippedId)->traitBits.group : 0;
        drawSetColorFromRGBA8(0xFFFFFFFF);
        setStatComparisonColor(item->traitBits.group, equippedAttack);
        part = asdTMTexTableEntryAt(texture, 0x542);
        sprintf(text, "%d", item->traitBits.group);
        FUN_002bdf94(0, rowEntry->x + part->x + x, part->y + rowEntry->y + y, 1, 4, layer, text);
        gxResetColorQuadToWhite();

        if (item->target == 0)
            sprintf(text, "\x82r\x82\x89\x82\x8E\x82\x87\x82\x8C\x82\x85"); // Single
        if (item->target == 1)
            sprintf(text, "\x82`\x82\x8C\x82\x8C"); // All
        if (item->target == 6)
            sprintf(text, "\x82l\x82\x95\x82\x8C\x82\x94\x82\x89"); // Multi
        part = asdTMTexTableEntryAt(texture, 0x543);
        textDrawString(rowEntry->x + part->x + x, rowEntry->y + part->y + y, 0.5f, 3, 0.0f, 0xFFFFFFFF, 1.0f, text);
        u8 hitRange = item->hitRange;
        if ((hitRange & 15) == (hitRange >> 4))
            sprintf(text, "%d", hitRange & 15);
        else
            sprintf(text, "%d-%d", hitRange & 15, hitRange >> 4);
        drawSetColorFromRGBA8(0xFFFFFFFF);
        part = asdTMTexTableEntryAt(texture, 0x546);
        FUN_002bdf94(0, part->x + rowEntry->x + x, rowEntry->y + part->y + y, 1, 3, layer, text);
        gxResetColorQuadToWhite();
        break;
    }
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17: {
        u16 equippedId = 0;
        if (category == 0x14)
            equippedId = player->equipped.head;
        else if (category == 0x15)
            equippedId = player->equipped.body;
        else if (category == 0x16)
            equippedId = player->equipped.legs;
        else if (category == 0x17)
            equippedId = player->equipped.accessory;
        s32 equippedHp;
        s32 equippedMp;
        if (equippedId != 0) {
            equippedHp = itemTableGetEquipmentRecord(equippedId)->hpBonus;
            equippedMp = itemTableGetEquipmentRecord(equippedId)->mpBonus;
        } else {
            equippedHp = equippedMp = 0;
        }
        drawSetColorFromRGBA8(0xFFFFFFFF);
        setStatComparisonColor(item->hpBonus, equippedHp);
        part = asdTMTexTableEntryAt(texture, 0x55E);
        sprintf(text, "%d", item->hpBonus);
        FUN_002bdf94(0, rowEntry->x + part->x + x, part->y + rowEntry->y + y, 1, 5, layer, text);
        gxResetColorQuadToWhite();
        drawSetColorFromRGBA8(0xFFFFFFFF);
        setStatComparisonColor(item->mpBonus, equippedMp);
        part = asdTMTexTableEntryAt(texture, 0x563);
        sprintf(text, "%d", item->mpBonus);
        FUN_002bdf94(0, rowEntry->x + part->x + x, part->y + rowEntry->y + y, 1, 5, layer, text);
        gxResetColorQuadToWhite();
        break;
    }
    }
}
