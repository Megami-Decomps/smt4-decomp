/* NON_MATCHING: 181 lines (396 vs 395 rows); control flow, calls, strings and arguments are retail's (the IV twin
 * of Apocalypse's screenBuildItemDescriptionMessage). Retail's frame is 32 bytes larger (three slots of 8, 16 and
 * 8 bytes that nothing references; the weapon case's two number buffers sit 8 bytes past its text), it copies
 * the id into r5 for the switch and the cases (this build reloads it from the stack), and the stat loop keeps the
 * signed value in r5 and its magnitude in r1 (this build the reverse). Each case declares its own text buffer:
 * retail's shares sp+0 with the stack arguments of the final draw call. */
#include <stdio.h>
#include "addon/AocEntryKind.h"
#include "bible/bibleDevil.h"
#include "code/Code002e.h"
#include "ui/ButtonHelpGlobal.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "gamedata/ConsumableRecord.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

extern "C" {

int dataTableValue0f(void);
void textFormatFullWidthNumber(char *output, s32 value);
s32 btlFormatCategoryLabel(char *output, s32 category);
void skillFormatTargetLabel(char *buffer, s32 target);

/* Writes `value` in full-width digits with its sign: ±０, ＋n or －n. */
static void textFormatSignedFullWidthNumber(char *output, s32 value)
{
    char number[16];
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

/* Shows the button help's description of content entry `id`: fills the font slots (0x24 up) with an item's
 * target and stack limit (or the points it awards), a weapon's power, hit range, attribute, target and
 * ailment, or an armour's stat changes, affinities and modifier, then draws the directory text. */
void buttonHelpShowEntryDescription(u32 id)
{
    ButtonHelpWork *help = g_buttonHelp.work;

    if (id == 0) {
        help->textVisible = 0;
        return;
    }
    help->text.useDirectoryText = 1;
    help->textVisible = 1;
    RelativeDirectory *directory = (RelativeDirectory *)dataTableValue0f();
    switch (aocEntryGetKind(id)) {
    case 1: {
        char text[96];
        ConsumableRecord *item = itemTableGetItemRecord(id);

        if (item->points != 0) {
            s32 points = gameSaveGetPoints();

            FUN_0029ede8(0x24, points, 0xFFFFFFFF, 0);
            points += item->points;
            if (points > 9999) {
                points = 9999;
            }
            FUN_0029ede8(0x25, points, 0xFFFFFFFF, 0);
            break;
        }
        if (item->skillId != 0) {
            skillFormatTargetLabel(text, skillDataFindById(item->skillId)->effectProperties.targeting);
        } else if (item->target & 0x80) {
            sprintf(text, "\x82\x60\x82\x8C\x82\x8C\x81\x40\x82\x81\x82\x8C\x82\x8C\x82\x89\x82\x85\x82\x93"); /* Ａｌｌ　ａｌｌｉｅｓ */
        } else {
            sprintf(text, "\x82\x50\x81\x40\x82\x81\x82\x8C\x82\x8C\x82\x99"); /* １　ａｌｌｙ */
        }
        textEncodeFontSlot(0x24, (const u8 *)text);
        FUN_0029ede8(0x25, recordPackedValue(id), 0xFFFFFFFF, 0);
        break;
    }
    case 2:
    case 3:
    case 8: {
        char text[96];
        EquipmentRecord *weapon = itemTableGetEquipmentRecord(id);

        FUN_0029ede8(0x24, weapon->traits & 0x3FF, 0xFFFFFFFF, 0);
        u32 range = weapon->hitRange;
        if ((range & 0xF) == range >> 4) {
            FUN_0029ede8(0x25, range & 0xF, 0xFFFFFFFF, 0);
        } else {
            char minimum[8], maximum[8];
            textFormatFullWidthNumber(minimum, range & 0xF);
            textFormatFullWidthNumber(maximum, weapon->hitRange >> 4);
            sprintf(text, "%s\x81\x60%s", minimum, maximum); /* "%s～%s" */
            textEncodeFontSlot(0x25, (const u8 *)text);
        }
        btlFormatCategoryLabel(text, weapon->traits >> 20);
        textEncodeFontSlot(0x26, (const u8 *)text);
        skillFormatTargetLabel(text, weapon->target);
        textEncodeFontSlot(0x27, (const u8 *)text);
        if (weapon->element == 0)
            sprintf(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85"); /* Ｎｏｎｅ */
        if (weapon->element == 1)
            sprintf(text, "\x82\x6A\x82\x6E"); /* ＫＯ */
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
        textEncodeFontSlot(0x28, (const u8 *)text);
        break;
    }
    case 4:
    case 5:
    case 6:
    case 7: {
        char text[96];
        EquipmentRecord *armor = itemTableGetEquipmentRecord(id);

        /* the five stat changes */
        for (s32 i = 0; i < 5; i++) {
            textFormatSignedFullWidthNumber(text, armor->statBonus[i]);
            textEncodeFontSlot(0x24 + i, (const u8 *)text);
        }

        /* the affinities, grouped by state */
        s8 lists[5][18];

        memClear(lists, 92); /* the lists and their padding */
        s8 counts[5] = { 0 };
        for (s32 i = 0; i < 18; i++) {
            if (armor->affinities[i] >> 10 == 4) {
                lists[0][counts[0]++] = i;
            }
            if (armor->affinities[i] >> 10 == 3) {
                lists[1][counts[1]++] = i;
            }
            if (armor->affinities[i] >> 10 == 1) {
                lists[2][counts[2]++] = i;
            }
            if (armor->affinities[i] >> 10 == 5) {
                lists[3][counts[3]++] = i;
            }
            if (armor->affinities[i] >> 10 == 2) {
                lists[4][counts[4]++] = i;
            }
        }

        s32 groups = 0;
        s32 length = 0;
        for (s32 list = 0; list < 5; list++) {
            if (counts[list] > 0) {
                if (groups > 0) {
                    length += sprintf(text + length, "\x81\x40"); /* a full-width space */
                }
                for (s32 i = 0; i < counts[list]; i++) {
                    length += btlFormatCategoryLabel(text + length, lists[list][i]);
                    if (i < 17 && lists[list][i + 1] > 0) {
                        length += sprintf(text + length, "\x81\x5E"); /* ／ */
                    }
                }
                if (list == 0) {
                    length += sprintf(text + length, "\x81\x46\x82\x63\x82\x92\x82\x81\x82\x89\x82\x8E"); /* ：Ｄｒａｉｎ */
                } else if (list == 1) {
                    length += sprintf(text + length, "\x81\x46\x82\x71\x82\x85\x82\x90\x82\x85\x82\x8C"); /* ：Ｒｅｐｅｌ */
                } else if (list == 2) {
                    length += sprintf(text + length, "\x81\x46\x82\x6D\x82\x95\x82\x8C\x82\x8C"); /* ：Ｎｕｌｌ */
                } else if (list == 3) {
                    length += sprintf(text + length, "\x81\x46\x82\x71\x82\x85\x82\x93\x82\x89\x82\x93\x82\x94"); /* ：Ｒｅｓｉｓｔ */
                } else if (list == 4) {
                    length += sprintf(text + length, "\x81\x46\x82\x76\x82\x85\x82\x81\x82\x8B"); /* ：Ｗｅａｋ */
                }
                groups++;
            }
        }
        textEncodeFontSlot(0x29, (const u8 *)text);

        if (armor->modifierId == 0) {
            sprintf(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85"); /* Ｎｏｎｅ */
        } else {
            sprintf(text, "%s", aocIndexValueOrDefault(armor->modifierId));
        }
        textEncodeFontSlot(0x2A, (const u8 *)text);
        break;
    }
    }
    asdTextDrawDirectoryEntry((AsdText *)help->text.directoryText, 3, -1, 0, 3, directory, id);
}

} /* extern "C" */
