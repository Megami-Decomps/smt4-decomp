#include <stdio.h>
#include "ui/ButtonHelpGlobal.h"
#include "code/Code0035.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
void textFormatFullWidthNumber(char *out, s32 value);
void ailmentResistanceSummaryFormat(s32 a, s32 b, s32 c, char *text);
void battleAttributeFormatName(char *buffer, u32 attribute);
void skillFormatTargetLabel(char *buffer, u32 target);
void asdTextDrawDirectoryEntry(u32 directory, s32 a, s32 b, s32 c, s32 d, s32 e, u32 f);

/* Fills the skill info panel from the first equipped skill record: level range, attribute, target
 * and the effect label, then draws it. */
void FUN_003aeb18(s32 textId, u32 flags)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    EquipmentRecordA *first = itemTableGetEquipmentRecord(*(u16 *)gameGetPlayerData());
    if (first == NULL) {
        work->textVisible = 0;
        return;
    }
    work->text.useDirectoryText = 1;
    work->textVisible = 1;
    char text[128];
    u32 range = first->hitRange;
    if ((range & 0xF) == range >> 4) {
        entryTableResetAndInit(0x25, range & 0xF, 0xFFFFFFFF, 0);
    } else {
        char minimum[8], maximum[8];
        textFormatFullWidthNumber(minimum, range & 0xF);
        textFormatFullWidthNumber(maximum, first->hitRange >> 4);
        sprintf(text, "%s\x81\x60%s", minimum, maximum); /* "%s～%s" */
        scrSetStringSlot(0x25, text);
    }
    battleAttributeFormatName(text, first->traits >> 20);
    scrSetStringSlot(0x26, text);
    skillFormatTargetLabel(text, first->target);
    scrSetStringSlot(0x27, text);
    if (first->element == 0)
        sprintf(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85"); /* Ｎｏｎｅ */
    if (first->element == 1)
        sprintf(text, "\x82\x68\x82\x8E\x82\x93\x82\x94\x82\x81\x82\x8E\x82\x94\x81\x40\x82\x6A\x82\x89\x82\x8C\x82\x8C"); /* Ｉｎｓｔａｎｔ　Ｋｉｌｌ */
    if (first->element == 5)
        sprintf(text, "\x82\x6F\x82\x8F\x82\x89\x82\x93\x82\x8F\x82\x8E"); /* Ｐｏｉｓｏｎ */
    if (first->element == 6)
        sprintf(text, "\x82\x6F\x82\x81\x82\x8E\x82\x89\x82\x83"); /* Ｐａｎｉｃ */
    if (first->element == 7)
        sprintf(text, "\x82\x72\x82\x8C\x82\x85\x82\x85\x82\x90"); /* Ｓｌｅｅｐ */
    if (first->element == 8)
        sprintf(text, "\x82\x61\x82\x89\x82\x8E\x82\x84"); /* Ｂｉｎｄ */
    if (first->element == 9)
        sprintf(text, "\x82\x72\x82\x89\x82\x83\x82\x8B"); /* Ｓｉｃｋ */
    if (first->element == 11)
        sprintf(text, "\x82\x62\x82\x88\x82\x81\x82\x92\x82\x8D"); /* Ｃｈａｒｍ */
    if (first->element == 12)
        sprintf(text, "\x82\x63\x82\x81\x82\x9A\x82\x85"); /* Ｄａｚｅ */
    if (first->element == 13)
        sprintf(text, "\x82\x6C\x82\x95\x82\x94\x82\x85"); /* Ｍｕｔｅ */
    scrSetStringSlot(0x28, text);
    ailmentResistanceSummaryFormat(1, 0, 0, text);
    scrSetStringSlot(0x29, text);
    if (textId == 0)
        textId = reinterpret_cast<s32>(g_buttonHelp.mbm); /* this function passes the directory as an integer */
    asdTextDrawDirectoryEntry(work->text.directoryText, 2, -1, 0, 3, textId, flags);
}

} /* extern "C" */
