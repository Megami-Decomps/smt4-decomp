/* NON_MATCHING: 50 lines, allocation and literal placement: the prologue's argument moves are scheduled
 * differently, retail's two spill slots (the name entry, the armour's MP) are swapped, it keeps the digit
 * count 5 in sl (strd) where this build uses r9 (stm), and it loads the armour block's "%d" from a pool word
 * pointing at the function's first "%d" where this build emits a second copy. */
#include "common.h"
#include "runtime/Stdio.h"
#include "camp/CampStateA.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess.h"
#include "code/Code0028.h"
#include "code/Code0026_Smt4a.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "shard/W5_W5Match7_EntrySort.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/AnimatedMessage.h"
#include "text/TextDraw.h"
#include "ui/NumberFont.h"

extern "C" {

const char *dataFindKindRecordWithAocOverrides(s32 value, s32 option);
u32 unitMatchesAlignment(s32 unitId);
bool equipmentHasPositiveUpgrade(u32 item);
u32 equipmentIsFullyUpgraded(u32 itemId);
void drawSetColorFromRGBA8(u32 packed);
void effectDispatchSelector(u32 kind, u32 first, u32 second, u32 third, f32 speed);

/* Draws an equipment row of the camp's equipment lists (list kinds 19-25 and 72-78) at (x, y): its frame,
 * name, owned count and category icon, then the stats of its kind (attack, attribute and element of a weapon
 * or bullets; attack, targets and hits of a gun; HP and MP of armour), each coloured against what the player
 * has equipped in that slot. `row` is the list row + 2: it picks the row's sprite-table entry and touch region. */
void campEquipListDrawRow(s32 kind, s32 row, u32 itemId, s32 x, s32 y)
{
    CampStateA *camp = g_camp;
    PlayerDataA *player = gameGetPlayerData();
    char text[0x40];

    if (itemId == 0) {
        return;
    }
    EquipmentRecordA *record = itemTableGetEquipmentRecord(itemId);
    s32 pressed = 0;
    s16 equippedBonuses[8] = {0};
    u32 equippedId = 0;
    s16 bonuses[8] = {0};
    equipmentGetCappedUpgradeBonuses(itemId, bonuses);

    u8 touchMode = recordGetModeForId(camp->touch.rowRegions[row - 2]);
    u32 color = 0x9FE7FFFF;
    if (touchMode == 1 || touchMode == 2 || touchMode == 6) {
        color = 0xF5FF9FFF;
        pressed = 1;
    }
    const TextureTableEntryIV *panel = asdTMTexTableEntryAt(0x14, row + 0x42E);
    FUN_0026ec00(panel->x + x, panel->y + y, pressed);

    const TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x14, 0x523);
    const char *name = dataFindKindRecordWithAocOverrides(itemId, 0);
    if (name != NULL) {
        if (!unitMatchesAlignment(itemId)) {
            color = 0x9B9B9BFF;
        }
        if (equipmentHasPositiveUpgrade(itemId)) {
            color = 0x008400FF;
            if (equipmentIsFullyUpgraded(itemId)) {
                color = 0xFBEB39FF;
            }
        }
        textDrawString((f32)(panel->x + entry->x + x), (f32)(panel->y + entry->y + y), 0.5f, 3, -1.0f, color, 1.0f,
                       name);
    }

    entry = asdTMTexTableEntryAt(0x14, 0x52F);
    __2sprintf(text, "%d", flagValueRead(itemId));
    drawSetColorFromRGBA8(0xFFFFFFFF);
    numberFontDrawFormatted(0, panel->x + entry->x + x, panel->y + entry->y + y, 1, 2, 0x83, text);
    gxResetColorQuadToWhite();
    texDrawTableEntryAtStoredOrigin(2, 0x14, 0x521, panel->x + x, panel->y + y, 0x83);
    entry = asdTMTexTableEntryAt(0x14, 0x522);
    uiDrawItemCategoryIcon((s16)itemId, panel->x + entry->x + x, panel->y + entry->y + y, 0x88, 1);

    switch (kind) {
    case 19:
    case 21:
    case 72:
    case 74: {
        /* A weapon or bullets: attack, attribute and element. */
        if (kind == 19 || kind == 72) {
            equippedId = player->equipped.weapon;
        }
        if (kind == 21 || kind == 74) {
            equippedId = player->equipped.bullets;
        }
        s32 equippedPower = equippedId != 0 ? (s32)itemTableGetEquipmentRecord(equippedId)->traitBits.group : 0;
        drawSetColorFromRGBA8(0xFFFFFFFF);
        if ((s32)record->traitBits.group > equippedPower) {
            drawSetColorFromRGBA8(0x72E027FF);
        } else if ((s32)record->traitBits.group < equippedPower) {
            drawSetColorFromRGBA8(0xFF2529FF);
        }
        entry = asdTMTexTableEntryAt(0x14, 0x527);
        __2sprintf(text, "%d", record->traitBits.group);
        numberFontDrawFormatted(0, panel->x + entry->x + x, panel->y + entry->y + y, 1, 4, 0x83, text);
        gxResetColorQuadToWhite();
        if (record->traits >> 20 == 0) {
            __2sprintf(text, "\x82\x72\x82\x8c\x82\x81\x82\x93\x82\x88"); /* Slash */
        }
        if (record->traits >> 20 == 1) {
            __2sprintf(text, "\x82\x66\x82\x95\x82\x8e"); /* Gun */
        }
        if (record->traits >> 20 == 2) {
            __2sprintf(text, "\x82\x65\x82\x89\x82\x92\x82\x85"); /* Fire */
        }
        if (record->traits >> 20 == 3) {
            __2sprintf(text, "\x82\x68\x82\x83\x82\x85"); /* Ice */
        }
        if (record->traits >> 20 == 4) {
            __2sprintf(text, "\x82\x64\x82\x8c\x82\x85\x82\x83"); /* Elec */
        }
        if (record->traits >> 20 == 5) {
            __2sprintf(text, "\x82\x65\x82\x8f\x82\x92\x82\x83\x82\x85"); /* Force */
        }
        if (record->traits >> 20 == 6) {
            __2sprintf(text, "\x82\x6b\x82\x89\x82\x87\x82\x88\x82\x94"); /* Light */
        }
        if (record->traits >> 20 == 7) {
            __2sprintf(text, "\x82\x63\x82\x81\x82\x92\x82\x8b"); /* Dark */
        }
        if (record->traits >> 20 == 20) {
            __2sprintf(text, "\x82\x60\x82\x8c\x82\x8d\x82\x89\x82\x87\x82\x88\x82\x94\x82\x99"); /* Almighty */
        }
        entry = asdTMTexTableEntryAt(0x14, 0x528);
        textDrawString((f32)(panel->x + entry->x + x), (f32)(panel->y + entry->y + y), 0.5f, 3, 0.0f, 0xFFFFFFFF, 1.0f,
                       text);
        if (record->element != 0) {
            entry = asdTMTexTableEntryAt(0x14, 0x529);
            effectDispatchSelector(record->element, panel->x + entry->x + x + 30, panel->y + entry->y + y, 0x83, 1.0f);
        } else if (record->specialElement != 0) {
            entry = asdTMTexTableEntryAt(0x14, 0x529);
            effectDispatchSelector(12, panel->x + entry->x + x + 30, panel->y + entry->y + y, 0x6F, 1.0f);
        }
        break;
    }
    case 20:
    case 73: {
        /* A gun: attack, targets and hits. */
        equippedId = player->equipped.gun;
        s32 equippedPower = equippedId != 0 ? (s32)itemTableGetEquipmentRecord(equippedId)->traitBits.group : 0;
        drawSetColorFromRGBA8(0xFFFFFFFF);
        if ((s32)record->traitBits.group > equippedPower) {
            drawSetColorFromRGBA8(0x72E027FF);
        } else if ((s32)record->traitBits.group < equippedPower) {
            drawSetColorFromRGBA8(0xFF2529FF);
        }
        entry = asdTMTexTableEntryAt(0x14, 0x542);
        __2sprintf(text, "%d", record->traitBits.group);
        numberFontDrawFormatted(0, panel->x + entry->x + x, panel->y + entry->y + y, 1, 4, 0x83, text);
        gxResetColorQuadToWhite();
        if (record->target == 0) {
            __2sprintf(text, "\x82\x72\x82\x89\x82\x8e\x82\x87\x82\x8c\x82\x85"); /* Single */
        }
        if (record->target == 1) {
            __2sprintf(text, "\x82\x60\x82\x8c\x82\x8c"); /* All */
        }
        if (record->target == 6) {
            __2sprintf(text, "\x82\x6c\x82\x95\x82\x8c\x82\x94\x82\x89"); /* Multi */
        }
        entry = asdTMTexTableEntryAt(0x14, 0x543);
        textDrawString((f32)(panel->x + entry->x + x), (f32)(panel->y + entry->y + y), 0.5f, 3, 0.0f, 0xFFFFFFFF, 1.0f,
                       text);
        if (record->hits.minimum == record->hits.maximum) {
            __2sprintf(text, "%d", record->hits.minimum);
        } else {
            __2sprintf(text, "%d-%d", record->hits.minimum, record->hits.maximum);
        }
        drawSetColorFromRGBA8(0xFFFFFFFF);
        entry = asdTMTexTableEntryAt(0x14, 0x546);
        numberFontDrawFormatted(0, panel->x + entry->x + x, panel->y + entry->y + y, 1, 3, 0x83, text);
        gxResetColorQuadToWhite();
        break;
    }
    case 22:
    case 23:
    case 24:
    case 25:
    case 75:
    case 76:
    case 77:
    case 78: {
        /* Armour: HP and MP. */
        if (kind == 22 || kind == 75) {
            equippedId = player->equipped.head;
        } else if (kind == 23 || kind == 76) {
            equippedId = player->equipped.body;
        } else if (kind == 24 || kind == 77) {
            equippedId = player->equipped.legs;
        } else if (kind == 25 || kind == 78) {
            equippedId = player->equipped.accessory;
        }
        s32 hp = record->hpBonus + bonuses[0];
        s32 mp = record->mpBonus + bonuses[1];
        equipmentGetCappedUpgradeBonuses(equippedId, equippedBonuses);
        s32 equippedHp;
        s32 equippedMp;
        if (equippedId == 0) {
            equippedHp = 0;
            equippedMp = 0;
        } else {
            equippedHp = itemTableGetEquipmentRecord(equippedId)->hpBonus + equippedBonuses[0];
            equippedMp = itemTableGetEquipmentRecord(equippedId)->mpBonus + equippedBonuses[1];
        }
        drawSetColorFromRGBA8(0xFFFFFFFF);
        if (hp > equippedHp) {
            drawSetColorFromRGBA8(0x72E027FF);
        } else if (hp < equippedHp) {
            drawSetColorFromRGBA8(0xFF2529FF);
        }
        entry = asdTMTexTableEntryAt(0x14, 0x55E);
        __2sprintf(text, "%d", hp);
        numberFontDrawFormatted(0, panel->x + entry->x + x, panel->y + entry->y + y, 1, 5, 0x83, text);
        gxResetColorQuadToWhite();
        drawSetColorFromRGBA8(0xFFFFFFFF);
        if (mp > equippedMp) {
            drawSetColorFromRGBA8(0x72E027FF);
        } else if (mp < equippedMp) {
            drawSetColorFromRGBA8(0xFF2529FF);
        }
        entry = asdTMTexTableEntryAt(0x14, 0x563);
        __2sprintf(text, "%d", mp);
        numberFontDrawFormatted(0, panel->x + entry->x + x, panel->y + entry->y + y, 1, 5, 0x83, text);
        gxResetColorQuadToWhite();
        break;
    }
    }
}

} /* extern "C" */
