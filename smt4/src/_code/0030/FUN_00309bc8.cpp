/* NON_MATCHING: only count-label/text stack placement, frame size and prologue global-load scheduling differ. */
#include "ui/ButtonHelp.h"
#include "shard/W6_W6Match2_RankedTableRecord.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
PlayerEquipmentAppearance *gameGetPlayerData();
void FUN_0029ede8(u32 slot, u32 value, u32 color, s32 mode);
void FUN_002907c4(char *buffer, u32 value);
void textFormatBuffer(char *buffer, const char *format, ...);
void textEncodeFontSlot(u32 slot, const char *text);
void btlFormatCategoryLabel(char *buffer, u32 value);
void skillFormatTargetLabel(char *buffer, u32 target);
void asdTextDrawDirectoryEntry(u32 handle, u32 directory, u32 color, s32 mode,
    s32 style, u32 context, u32 depth);

void FUN_00309bc8(u32 context, u32 depth)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    RankedTableRecord *firearm = dataTable08Sub2GetRecord(gameGetPlayerData()->equipped.firearm);
    RankedTableRecord *ammunition = dataTable08Sub2GetRecord(gameGetPlayerData()->equipped.ammunition);
    char text[100];
    if (firearm == NULL || ammunition == NULL) {
        work->unk4CB = 0;
        return;
    }
    work->unk55C = 1;
    work->unk4CB = 1;
    u8 attackCount = firearm->attack.attackCount;
    if ((attackCount & 0xF) == attackCount >> 4) {
        FUN_0029ede8(0x25, attackCount & 0xF, 0xFFFFFFFF, 0);
    } else {
        char countLabels[2][8];
        FUN_002907c4(countLabels[0], attackCount & 0xF);
        FUN_002907c4(countLabels[1], firearm->attack.attackCount >> 4);
        textFormatBuffer(text, "%s\x81\x60%s", countLabels[0], countLabels[1]);
        textEncodeFontSlot(0x25, text);
    }
    btlFormatCategoryLabel(text, rankedTableRecordGetSortFlags(ammunition) >> 20);
    textEncodeFontSlot(0x26, text);
    skillFormatTargetLabel(text, firearm->category);
    textEncodeFontSlot(0x27, text);
    // Full-width English ailment labels in the retail font's Shift-JIS encoding.
    if (ammunition->ailment == 0) // None
        textFormatBuffer(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85");
    if (ammunition->ailment == 1) // KO
        textFormatBuffer(text, "\x82\x6A\x82\x6E");
    if (ammunition->ailment == 5) // Poison
        textFormatBuffer(text, "\x82\x6F\x82\x8F\x82\x89\x82\x93\x82\x8F\x82\x8E");
    if (ammunition->ailment == 6) // Panic
        textFormatBuffer(text, "\x82\x6F\x82\x81\x82\x8E\x82\x89\x82\x83");
    if (ammunition->ailment == 7) // Sleep
        textFormatBuffer(text, "\x82\x72\x82\x8C\x82\x85\x82\x85\x82\x90");
    if (ammunition->ailment == 8) // Bind
        textFormatBuffer(text, "\x82\x61\x82\x89\x82\x8E\x82\x84");
    if (ammunition->ailment == 9) // Sick
        textFormatBuffer(text, "\x82\x72\x82\x89\x82\x83\x82\x8B");
    textEncodeFontSlot(0x28, text);
    if (context == 0)
        context = g_buttonHelp.mbm;
    asdTextDrawDirectoryEntry(work->unk558, 3, 0xFFFFFFFF, 0, 3, context, depth);
}
}
