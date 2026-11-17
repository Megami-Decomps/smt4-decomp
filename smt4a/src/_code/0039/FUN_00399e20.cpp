/* NON_MATCHING: recovered 128-byte text/8-byte scoped range buffers and formatter contract; initial button-help global load is scheduled after argument saves. */
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
void battleAttributeFormatName(char *buffer, u32 attribute);
void skillFormatTargetLabel(char *buffer, u32 target);
void asdTextDrawDirectoryEntry(u32 directory, s32 a, s32 b, s32 c, s32 d, s32 e, u32 f);

/* Fills the skill info panel from the two equipped skill records: level range, attribute, target
 * and the effect label, then draws it. */
void FUN_00399e20(s32 textId, u32 flags)
{
    PanelBlock *block = g_buttonHelp.block;
    EquipmentRecordA *first = itemTableGetEquipmentRecord(gameGetPlayerData()->equipped.gun);
    EquipmentRecordA *second = itemTableGetEquipmentRecord(gameGetPlayerData()->equipped.bullets);
    if (first == NULL || second == NULL) {
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
    battleAttributeFormatName(text, second->traits >> 20);
    scrSetStringSlot(0x26, text);
    skillFormatTargetLabel(text, first->target);
    scrSetStringSlot(0x27, text);
    if (second->element == 0)
        textFormatBuffer(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85"); /* Ｎｏｎｅ */
    if (second->element == 1)
        textFormatBuffer(text, "\x82\x68\x82\x8E\x82\x93\x82\x94\x82\x81\x82\x8E\x82\x94\x81\x40\x82\x6A\x82\x89\x82\x8C\x82\x8C"); /* Ｉｎｓｔａｎｔ　Ｋｉｌｌ */
    if (second->element == 5)
        textFormatBuffer(text, "\x82\x6F\x82\x8F\x82\x89\x82\x93\x82\x8F\x82\x8E"); /* Ｐｏｉｓｏｎ */
    if (second->element == 6)
        textFormatBuffer(text, "\x82\x6F\x82\x81\x82\x8E\x82\x89\x82\x83"); /* Ｐａｎｉｃ */
    if (second->element == 7)
        textFormatBuffer(text, "\x82\x72\x82\x8C\x82\x85\x82\x85\x82\x90"); /* Ｓｌｅｅｐ */
    if (second->element == 8)
        textFormatBuffer(text, "\x82\x61\x82\x89\x82\x8E\x82\x84"); /* Ｂｉｎｄ */
    if (second->element == 9)
        textFormatBuffer(text, "\x82\x72\x82\x89\x82\x83\x82\x8B"); /* Ｓｉｃｋ */
    if (second->element == 11)
        textFormatBuffer(text, "\x82\x62\x82\x88\x82\x81\x82\x92\x82\x8D"); /* Ｃｈａｒｍ */
    if (second->element == 12)
        textFormatBuffer(text, "\x82\x63\x82\x81\x82\x9A\x82\x85"); /* Ｄａｚｅ */
    if (second->element == 13)
        textFormatBuffer(text, "\x82\x6C\x82\x95\x82\x94\x82\x85"); /* Ｍｕｔｅ */
    scrSetStringSlot(0x28, text);
    if (textId == 0)
        textId = g_buttonHelp.defaultText;
    asdTextDrawDirectoryEntry(block->directory, 2, -1, 0, 3, textId, flags);
}

} /* extern "C" */
