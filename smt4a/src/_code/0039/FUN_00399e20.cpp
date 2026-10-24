/* NON_MATCHING: readable rebuild of the equipped-skill info panel; the Shift-JIS literals are written with hex escapes (decoded in the comments) and armcc here pools/orders them differently from retail's four-byte-aligned inline strings. */
#include "common.h"

/* A skill record as the panel reads it. */
struct PanelSkill {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 attributeWord;     /* attribute id in the top twelve bits */
    /* 0x28 */ u8 levelRange;         /* low nibble: minimum, high nibble: maximum */
    /* 0x29 */ u8 target;
    /* 0x2A */ u8 unk2A;
    /* 0x2B */ u8 effect;             /* the ailment/effect group shown in the last field */
};

struct PanelPlayerData {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 firstSkill;
    /* 0x04 */ u16 secondSkill;
};

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

PanelPlayerData *gameGetPlayerData(void);
PanelSkill *dataTable08Sub2GetRecord(u32 id);
void FUN_002c0940(s32 *out, u32 value);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_003180c4(s32 slot, const char *text);
void FUN_00359974(s32 slot, u32 level, s32 a, s32 b);
void battleAttributeFormatName(char *buffer, u32 attribute);
void skillFormatTargetLabel(char *buffer, u32 target);
void asdTextDrawDirectoryEntry(u32 directory, s32 a, s32 b, s32 c, s32 d, s32 e, u32 f);

/* Fills the skill info panel from the two equipped skill records: level range, attribute, target
 * and the effect label, then draws it. */
void FUN_00399e20(s32 textId, u32 flags)
{
    PanelBlock *block = g_buttonHelp.block;
    PanelSkill *first = dataTable08Sub2GetRecord(gameGetPlayerData()->firstSkill);
    PanelSkill *second = dataTable08Sub2GetRecord(gameGetPlayerData()->secondSkill);
    if (first == NULL || second == NULL) {
        block->shown = 0;
        return;
    }
    block->visible = 1;
    block->shown = 1;
    s32 minimum[2];
    s32 maximum[2];
    char text[132];
    u32 range = first->levelRange;
    if ((range & 0xF) == range >> 4) {
        FUN_00359974(0x25, range & 0xF, 0xFFFFFFFF, 0);
    } else {
        FUN_002c0940(minimum, range & 0xF);
        FUN_002c0940(maximum, first->levelRange >> 4);
        textFormatBuffer(text, "%s\x81\x60%s", minimum, maximum); /* "%s～%s" */
        FUN_003180c4(0x25, text);
    }
    battleAttributeFormatName(text, second->attributeWord >> 20);
    FUN_003180c4(0x26, text);
    skillFormatTargetLabel(text, first->target);
    FUN_003180c4(0x27, text);
    if (second->effect == 0)
        textFormatBuffer(text, "\x82\x6D\x82\x8F\x82\x8E\x82\x85"); /* Ｎｏｎｅ */
    if (second->effect == 1)
        textFormatBuffer(text, "\x82\x68\x82\x8E\x82\x93\x82\x94\x82\x81\x82\x8E\x82\x94\x81\x40\x82\x6A\x82\x89\x82\x8C\x82\x8C"); /* Ｉｎｓｔａｎｔ　Ｋｉｌｌ */
    if (second->effect == 5)
        textFormatBuffer(text, "\x82\x6F\x82\x8F\x82\x89\x82\x93\x82\x8F\x82\x8E"); /* Ｐｏｉｓｏｎ */
    if (second->effect == 6)
        textFormatBuffer(text, "\x82\x6F\x82\x81\x82\x8E\x82\x89\x82\x83"); /* Ｐａｎｉｃ */
    if (second->effect == 7)
        textFormatBuffer(text, "\x82\x72\x82\x8C\x82\x85\x82\x85\x82\x90"); /* Ｓｌｅｅｐ */
    if (second->effect == 8)
        textFormatBuffer(text, "\x82\x61\x82\x89\x82\x8E\x82\x84"); /* Ｂｉｎｄ */
    if (second->effect == 9)
        textFormatBuffer(text, "\x82\x72\x82\x89\x82\x83\x82\x8B"); /* Ｓｉｃｋ */
    if (second->effect == 11)
        textFormatBuffer(text, "\x82\x62\x82\x88\x82\x81\x82\x92\x82\x8D"); /* Ｃｈａｒｍ */
    if (second->effect == 12)
        textFormatBuffer(text, "\x82\x63\x82\x81\x82\x9A\x82\x85"); /* Ｄａｚｅ */
    if (second->effect == 13)
        textFormatBuffer(text, "\x82\x6C\x82\x95\x82\x94\x82\x85"); /* Ｍｕｔｅ */
    FUN_003180c4(0x28, text);
    if (textId == 0)
        textId = g_buttonHelp.defaultText;
    asdTextDrawDirectoryEntry(block->directory, 2, -1, 0, 3, textId, flags);
}

} /* extern "C" */
