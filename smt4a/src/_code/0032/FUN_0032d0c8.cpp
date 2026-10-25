/* NON_MATCHING: only the prologue schedule differs: retail loads the g_buttonHelp address before moving the arguments and reads the work pointer right after the frame setup; the build loads the address after them. */
#include "common.h"
#include "ui/ButtonHelp.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

/* The part of a skill record this help text reads. */
struct SkillHelpRecord {
    /* 0x00 */ u8 unk00[0x0A];
    /* 0x0A */ u16 unused : 1;
    u16 target : 4;
    u16 power : 3;
    u16 maxPower : 3;
    u16 unkBits : 5;
    /* 0x0C */ u8 attribute;
    /* 0x0D */ u8 unk0D;
    /* 0x0E */ u8 ailment;
};

/* g_buttonHelp followed by the default help text directory. */
struct ButtonHelpTextGlobals {
    ButtonHelpGlobalsA prefix;
    /* 0x08 */ RelativeDirectory *defaultDirectory;
};

extern "C" {
extern ButtonHelpTextGlobals g_buttonHelp;
SkillHelpRecord *FUN_00184310(u16 id);
void FUN_00359974(s32 index, u32 a, u32 b, u32 c);
void FUN_002c0940(char *output, s32 value);
s32 textFormatBuffer(char *destination, const char *format, ...);
void battleAttributeFormatName(char *out, s32 kind);
void skillFormatTargetLabel(char *text, s32 target);
void FUN_002ad414(u32 a, u32 b, u32 id, char *text);
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y, RelativeDirectory *directory, u32 index);

// Fill the help text variables for a skill (power range, attribute, target, ailment) and draw its help entry.
void FUN_0032d0c8(RelativeDirectory *directory, u32 index, u16 skillId, u32 extra)
{
    ButtonHelpWorkA *work = g_buttonHelp.prefix.work;
    SkillHelpRecord *skill = FUN_00184310(skillId);

    char text[128];

    if (skill == NULL) {
        work->mode = 0;
        return;
    }
    work->helpState = 1;
    work->mode = 1;
    if (skill->power == skill->maxPower) {
        FUN_00359974(37, skill->power, 0xFFFFFFFF, 0);
    } else {
        char low[8];
        char high[8];
        FUN_002c0940(low, skill->power);
        FUN_002c0940(high, skill->maxPower);
        textFormatBuffer(text, "%s\x81\x60%s", low, high);
        FUN_003180c4(37, text);
    }
    battleAttributeFormatName(text, skill->attribute);
    FUN_003180c4(38, text);
    skillFormatTargetLabel(text, skill->target);
    FUN_003180c4(39, text);
    if (skill->ailment == 0) {
        textFormatBuffer(text, "\x82\x6d\x82\x8f\x82\x8e\x82\x85");
    }
    if (skill->ailment == 1) {
        textFormatBuffer(text, "\x82\x68\x82\x8e\x82\x93\x82\x94\x82\x81\x82\x8e\x82\x94\x81\x40\x82\x6a\x82\x89\x82\x8c\x82\x8c");
    }
    if (skill->ailment == 5) {
        textFormatBuffer(text, "\x82\x6f\x82\x8f\x82\x89\x82\x93\x82\x8f\x82\x8e");
    }
    if (skill->ailment == 6) {
        textFormatBuffer(text, "\x82\x6f\x82\x81\x82\x8e\x82\x89\x82\x83");
    }
    if (skill->ailment == 7) {
        textFormatBuffer(text, "\x82\x72\x82\x8c\x82\x85\x82\x85\x82\x90");
    }
    if (skill->ailment == 8) {
        textFormatBuffer(text, "\x82\x61\x82\x89\x82\x8e\x82\x84");
    }
    if (skill->ailment == 9) {
        textFormatBuffer(text, "\x82\x72\x82\x89\x82\x83\x82\x8b");
    }
    if (skill->ailment == 11) {
        textFormatBuffer(text, "\x82\x62\x82\x88\x82\x81\x82\x92\x82\x8d");
    }
    if (skill->ailment == 12) {
        textFormatBuffer(text, "\x82\x63\x82\x81\x82\x9a\x82\x85");
    }
    if (skill->ailment == 13) {
        textFormatBuffer(text, "\x82\x6c\x82\x95\x82\x94\x82\x85");
    }
    FUN_003180c4(40, text);
    FUN_002ad414(0, extra, skillId, text);
    FUN_003180c4(41, text);
    if (directory == NULL) {
        directory = g_buttonHelp.defaultDirectory;
    }
    asdTextDrawDirectoryEntry((AsdText *)work->unk678, 2, -1, 0, 3, directory, index);
}

}
