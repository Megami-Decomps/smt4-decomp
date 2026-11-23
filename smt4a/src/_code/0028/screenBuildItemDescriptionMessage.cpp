#include <stdio.h>
#include "addon/AocEntryKind.h"
#include "code/Code002e.h"
#include "code/Code0035.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

s32 itemGetStackLimit(u32 id);
void textFormatFullWidthNumber(char *output, s32 value);
s32 battleAttributeFormatName(char *out, s32 kind);
void skillFormatTargetLabel(char *buffer, s32 target);

/* Writes `value` in full-width digits with its sign: ±０, ＋n or －n. */
static void textFormatSignedFullWidthNumber(char *output, s32 value)
{
    char number[20];
    s32 magnitude = value;

    if (value < 0) {
        magnitude = -value;
    }

    textFormatFullWidthNumber(number, magnitude);
    if (value == 0) {
        sprintf(output, "\x81\x7D\x82\x4F"); /* ±０ */
    } else if (value > 0) {
        sprintf(output, "\x81\x7B%s", number); /* ＋%s */
    } else {
        sprintf(output, "\x81\x7C%s", number); /* －%s */
    }
}

/* Fills the message string slots (0x24 up) the description of content entry `id` shows: an item's
 * target and stack limit (or the points it awards), a weapon's power, hit range, attribute, target
 * and ailment, or an armour's stat changes, affinities and modifier. */
void screenBuildItemDescriptionMessage(s32 id)
{
    char text[128];

    sysMemClear(text, sizeof(text));
    switch (aocEntryGetKind(id)) {
    case 1:
    case 12: {
        ConsumableRecordA *item = itemTableGetItemRecord(id);

        if (item->points != 0) {
            s32 points = gameSaveGetPoints();

            entryTableResetAndInit(0x24, points, 0xFFFFFFFF, 0);
            points += item->points;
            points = points > 9999 ? 9999 : points;
            entryTableResetAndInit(0x25, points, 0xFFFFFFFF, 0);
            return;
        }
        if (item->skillId != 0) {
            skillFormatTargetLabel(text, skillDataFindById(item->skillId)->effectProperties.targeting);
        } else if (item->flags & 0x20) {
            sprintf(text, "\x82\x6F\x82\x81\x82\x92\x82\x94\x82\x8E\x82\x85\x82\x92"); /* Ｐａｒｔｎｅｒ */
        } else if (item->groupFlags & 0x80) {
            sprintf(text, "\x82\x60\x82\x8C\x82\x8C\x81\x40\x82\x81\x82\x8C\x82\x8C\x82\x89\x82\x85\x82\x93"); /* Ａｌｌ　ａｌｌｉｅｓ */
        } else {
            sprintf(text, "\x82\x50\x81\x40\x82\x81\x82\x8C\x82\x8C\x82\x99"); /* １　ａｌｌｙ */
        }
        scrSetStringSlot(0x24, text);
        entryTableResetAndInit(0x25, itemGetStackLimit(id), 0xFFFFFFFF, 0);
        return;
    }
    case 2:
    case 3:
    case 8: {
        EquipmentRecordA *weapon = itemTableGetEquipmentRecord(id);

        entryTableResetAndInit(0x24, weapon->traitBits.group, 0xFFFFFFFF, 0);
        u32 range = weapon->hitRange;
        if ((range & 0xF) == range >> 4) {
            entryTableResetAndInit(0x25, range & 0xF, 0xFFFFFFFF, 0);
        } else {
            char minimum[8], maximum[8];
            textFormatFullWidthNumber(minimum, range & 0xF);
            textFormatFullWidthNumber(maximum, weapon->hitRange >> 4);
            sprintf(text, "%s\x81\x60%s", minimum, maximum); /* "%s～%s" */
            scrSetStringSlot(0x25, text);
        }
        battleAttributeFormatName(text, weapon->traits >> 20);
        scrSetStringSlot(0x26, text);
        skillFormatTargetLabel(text, weapon->target);
        scrSetStringSlot(0x27, text);
        if (weapon->element == 0)
            sprintf(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85"); /* Ｎｏｎｅ */
        if (weapon->element == 1)
            sprintf(text, "\x82\x68\x82\x8E\x82\x93\x82\x94\x82\x81\x82\x8E\x82\x94\x81\x40\x82\x6A\x82\x89\x82\x8C\x82\x8C"); /* Ｉｎｓｔａｎｔ　Ｋｉｌｌ */
        if (weapon->element == 5)
            sprintf(text, "\x82\x6F\x82\x8F\x82\x89\x82\x93\x82\x8F\x82\x8E"); /* Ｐｏｉｓｏｎ */
        if (weapon->element == 6)
            sprintf(text, "\x82\x6F\x82\x81\x82\x8E\x82\x89\x82\x83"); /* Ｐａｎｉｃ */
        if (weapon->element == 7)
            sprintf(text, "\x82\x72\x82\x8C\x82\x85\x82\x85\x82\x90"); /* Ｓｌｅｅｐ */
        if (weapon->element == 8)
            sprintf(text, "\x82\x61\x82\x89\x82\x8E\x82\x84"); /* Ｂｉｎｄ */
        if (weapon->element == 9)
            sprintf(text, "\x82\x72\x82\x89\x82\x83\x82\x8B"); /* Ｓｉｃｋ */
        if (weapon->element == 11)
            sprintf(text, "\x82\x62\x82\x88\x82\x81\x82\x92\x82\x8D"); /* Ｃｈａｒｍ */
        if (weapon->element == 12)
            sprintf(text, "\x82\x63\x82\x81\x82\x9A\x82\x85"); /* Ｄａｚｅ */
        if (weapon->element == 13)
            sprintf(text, "\x82\x6C\x82\x95\x82\x94\x82\x85"); /* Ｍｕｔｅ */
        scrSetStringSlot(0x28, text);
        break;
    }
    case 4:
    case 5:
    case 6:
    case 7: {
        EquipmentRecordA *armor = itemTableGetEquipmentRecord(id);
        s16 bonuses[7] = { 0 };
        s16 totals[5] = { 0 };

        /* the five stat changes, upgrades included */
        equipmentGetCappedUpgradeBonuses(id, bonuses);
        for (s32 i = 0; i < 5; i++) {
            totals[i] = bonuses[2 + i] + armor->statBonus[i];
        }
        for (s32 i = 0; i < 5; i++) {
            textFormatSignedFullWidthNumber(text, totals[i]);
            scrSetStringSlot(0x24 + i, text);
        }

        /* the affinities, grouped by state */
        s8 lists[5][21];

        sysMemClear(lists, 108); /* the lists and their padding */
        s8 counts[5] = { 0 };
        for (s32 i = 0; i < 21; i++) {
            if (armor->affinities[i].raw >> 10 == 4) {
                lists[0][counts[0]++] = i;
            }
            if (armor->affinities[i].raw >> 10 == 3) {
                lists[1][counts[1]++] = i;
            }
            if (armor->affinities[i].raw >> 10 == 1) {
                lists[2][counts[2]++] = i;
            }
            if (armor->affinities[i].raw >> 10 == 5) {
                lists[3][counts[3]++] = i;
            }
            if (armor->affinities[i].raw >> 10 == 2) {
                lists[4][counts[4]++] = i;
            }
        }

        s32 groups = 0;
        s32 length = 0;
        for (s32 list = 0; list < 5; list++) {
            if (counts[list] > 0) {
                if (groups > 0) {
                    length += sprintf(text + length, ", ");
                }
                if (list == 0) {
                    length += sprintf(text + length, "\x82\x63\x82\x92\x82\x81\x82\x89\x82\x8E: "); /* Ｄｒａｉｎ */
                } else if (list == 1) {
                    length += sprintf(text + length, "\x82\x71\x82\x85\x82\x90\x82\x85\x82\x8C: "); /* Ｒｅｐｅｌ */
                } else if (list == 2) {
                    length += sprintf(text + length, "\x82\x6D\x82\x95\x82\x8C\x82\x8C: "); /* Ｎｕｌｌ */
                } else if (list == 3) {
                    length += sprintf(text + length, "\x82\x71\x82\x85\x82\x93\x82\x89\x82\x93\x82\x94: "); /* Ｒｅｓｉｓｔ */
                } else if (list == 4) {
                    length += sprintf(text + length, "\x82\x76\x82\x85\x82\x81\x82\x8B: "); /* Ｗｅａｋ */
                }
                for (s32 i = 0; i < counts[list]; i++) {
                    length += battleAttributeFormatName(text + length, lists[list][i]);
                    if (i < 20 && lists[list][i + 1] > 0) {
                        length += sprintf(text + length, "\x81\x5E"); /* ／ */
                    }
                }
                groups++;
            }
        }
        scrSetStringSlot(0x29, text);

        if (armor->modifierId == 0) {
            sprintf(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85"); /* Ｎｏｎｅ */
        } else {
            sprintf(text, "%s", aocIndexValueOrDefault(armor->modifierId));
        }
        scrSetStringSlot(0x2A, text);
        break;
    }
    }
}

} /* extern "C" */
