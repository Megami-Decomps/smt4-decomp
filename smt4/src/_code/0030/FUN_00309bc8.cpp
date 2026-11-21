#include <stdio.h>
#include "ui/ButtonHelpGlobal.h"
#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "bible/bibleDevil.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
void textFormatFullWidthNumber(char *buffer, u32 value);
void textEncodeFontSlot(u32 slot, const char *text);
void btlFormatCategoryLabel(char *buffer, u32 value);
void skillFormatTargetLabel(char *buffer, u32 target);
void asdTextDrawDirectoryEntry(u32 handle, u32 directory, u32 color, s32 mode,
    s32 style, u32 context, u32 depth);

/* Fills the gun help text slots (hit count, bullet category, target and ailment) and draws its directory entry. */
void FUN_00309bc8(u32 context, u32 depth)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    EquipmentRecord *firearm = itemTableGetEquipmentRecord(gameGetPlayerData()->equipped.gun);
    EquipmentRecord *ammunition = itemTableGetEquipmentRecord(gameGetPlayerData()->equipped.bullets);
    char text[0x60];
    if (firearm == NULL || ammunition == NULL) {
        work->textVisible = 0;
        return;
    }
    work->text.useDirectoryText = 1;
    work->textVisible = 1;
    u8 attackCount = firearm->hitRange;
    if ((attackCount & 0xF) == attackCount >> 4) {
        FUN_0029ede8(0x25, attackCount & 0xF, 0xFFFFFFFF, 0);
    } else {
        char minimum[8];
        char maximum[8];
        textFormatFullWidthNumber(minimum, attackCount & 0xF);
        textFormatFullWidthNumber(maximum, firearm->hitRange >> 4);
        sprintf(text, "%s\x81\x60%s", minimum, maximum);
        textEncodeFontSlot(0x25, text);
    }
    btlFormatCategoryLabel(text, ammunition->traits >> 20);
    textEncodeFontSlot(0x26, text);
    skillFormatTargetLabel(text, firearm->target);
    textEncodeFontSlot(0x27, text);
    /* Full-width English ailment labels in the retail font's Shift-JIS encoding. */
    if (ammunition->element == 0) /* None */
        sprintf(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85");
    if (ammunition->element == 1) /* KO */
        sprintf(text, "\x82\x6A\x82\x6E");
    if (ammunition->element == 5) /* Poison */
        sprintf(text, "\x82\x6F\x82\x8F\x82\x89\x82\x93\x82\x8F\x82\x8E");
    if (ammunition->element == 6) /* Panic */
        sprintf(text, "\x82\x6F\x82\x81\x82\x8E\x82\x89\x82\x83");
    if (ammunition->element == 7) /* Sleep */
        sprintf(text, "\x82\x72\x82\x8C\x82\x85\x82\x85\x82\x90");
    if (ammunition->element == 8) /* Bind */
        sprintf(text, "\x82\x61\x82\x89\x82\x8E\x82\x84");
    if (ammunition->element == 9) /* Sick */
        sprintf(text, "\x82\x72\x82\x89\x82\x83\x82\x8B");
    textEncodeFontSlot(0x28, text);
    if (context == 0)
        context = reinterpret_cast<u32>(g_buttonHelp.mbm); /* this function passes the directory as an integer */
    asdTextDrawDirectoryEntry(work->text.directoryText, 3, 0xFFFFFFFF, 0, 3, context, depth);
}
}
