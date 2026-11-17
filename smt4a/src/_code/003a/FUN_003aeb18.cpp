/* NON_MATCHING: only the initial button-help global address load follows stack allocation and the first argument save instead of preceding them. */
#include "common.h"
#include "code/Code0035.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GamePlayerData.h"

/* The button help block (g_buttonHelp) the panel is drawn through. */
struct PanelBlock {
    /* 0x000 */ u8 unk000[0x5EA];
    /* 0x5EA */ u8 shown;
    /* 0x5EB */ u8 unk5EB[0x8D];
    /* 0x678 */ u32 directory;
    /* 0x67C */ u8 visible;
};
struct PanelButtonHelp {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ PanelBlock *block;
    /* 0x08 */ s32 defaultText;
};

extern "C" {
extern PanelButtonHelp g_buttonHelp;
void FUN_002c0940(char *out, s32 value);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_002ad414(s32 a, s32 b, s32 c, char *text);
void battleAttributeFormatName(char *buffer, u32 attribute);
void skillFormatTargetLabel(char *buffer, u32 target);
void asdTextDrawDirectoryEntry(u32 directory, s32 a, s32 b, s32 c, s32 d, s32 e, u32 f);

/* Fills the skill info panel from the first equipped skill record: level range, attribute, target
 * and the effect label, then draws it. */
void FUN_003aeb18(s32 textId, u32 flags)
{
    PanelBlock *block = g_buttonHelp.block;
    EquipmentRecordA *first = dataTable08Sub2GetRecord(*(u16 *)gameGetPlayerData());
    if (first == NULL) {
        block->shown = 0;
        return;
    }
    block->visible = 1;
    block->shown = 1;
    char text[128];
    u32 range = first->hitRange;
    if ((range & 0xF) == range >> 4) {
        FUN_00359974(0x25, range & 0xF, 0xFFFFFFFF, 0);
    } else {
        char minimum[8], maximum[8];
        FUN_002c0940(minimum, range & 0xF);
        FUN_002c0940(maximum, first->hitRange >> 4);
        textFormatBuffer(text, "%s\x81\x60%s", minimum, maximum); /* "%s～%s" */
        scrSetStringSlot(0x25, text);
    }
    battleAttributeFormatName(text, first->traits >> 20);
    scrSetStringSlot(0x26, text);
    skillFormatTargetLabel(text, first->target);
    scrSetStringSlot(0x27, text);
    if (first->element == 0)
        textFormatBuffer(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85"); /* Ｎｏｎｅ */
    if (first->element == 1)
        textFormatBuffer(text, "\x82\x68\x82\x8E\x82\x93\x82\x94\x82\x81\x82\x8E\x82\x94\x81\x40\x82\x6A\x82\x89\x82\x8C\x82\x8C"); /* Ｉｎｓｔａｎｔ　Ｋｉｌｌ */
    if (first->element == 5)
        textFormatBuffer(text, "\x82\x6F\x82\x8F\x82\x89\x82\x93\x82\x8F\x82\x8E"); /* Ｐｏｉｓｏｎ */
    if (first->element == 6)
        textFormatBuffer(text, "\x82\x6F\x82\x81\x82\x8E\x82\x89\x82\x83"); /* Ｐａｎｉｃ */
    if (first->element == 7)
        textFormatBuffer(text, "\x82\x72\x82\x8C\x82\x85\x82\x85\x82\x90"); /* Ｓｌｅｅｐ */
    if (first->element == 8)
        textFormatBuffer(text, "\x82\x61\x82\x89\x82\x8E\x82\x84"); /* Ｂｉｎｄ */
    if (first->element == 9)
        textFormatBuffer(text, "\x82\x72\x82\x89\x82\x83\x82\x8B"); /* Ｓｉｃｋ */
    if (first->element == 11)
        textFormatBuffer(text, "\x82\x62\x82\x88\x82\x81\x82\x92\x82\x8D"); /* Ｃｈａｒｍ */
    if (first->element == 12)
        textFormatBuffer(text, "\x82\x63\x82\x81\x82\x9A\x82\x85"); /* Ｄａｚｅ */
    if (first->element == 13)
        textFormatBuffer(text, "\x82\x6C\x82\x95\x82\x94\x82\x85"); /* Ｍｕｔｅ */
    scrSetStringSlot(0x28, text);
    FUN_002ad414(1, 0, 0, text);
    scrSetStringSlot(0x29, text);
    if (textId == 0)
        textId = g_buttonHelp.defaultText;
    asdTextDrawDirectoryEntry(block->directory, 2, -1, 0, 3, textId, flags);
}

} /* extern "C" */
