/* NON_MATCHING: only the prologue schedule differs: retail loads the g_buttonHelp address before moving the arguments and reads the work pointer right after the frame setup; the build loads the address after them. */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "ui/ButtonHelpGlobal.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
void FUN_00359974(s32 index, u32 a, u32 b, u32 c);
void textFormatFullWidthNumber(char *output, s32 value);
s32 textFormatBuffer(char *destination, const char *format, ...);
void battleAttributeFormatName(char *out, s32 kind);
void skillFormatTargetLabel(char *text, s32 target);
void FUN_002ad414(u32 a, u32 b, u32 id, char *text);
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y, RelativeDirectory *directory, u32 index);

// Fill the help text variables for a demon's normal attack (hit range, attribute, target, ailment) and draw its help entry.
void FUN_0032d0c8(RelativeDirectory *directory, u32 index, u16 devilId, u32 extra)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    NkmBaseRecordA *devil = nkmBaseGetRecord(devilId);

    char text[128];

    if (devil == NULL) {
        work->textVisible = 0;
        return;
    }
    work->text.useDirectoryText = 1;
    work->textVisible = 1;
    if (devil->attack.minHits == devil->attack.maxHits) {
        FUN_00359974(37, devil->attack.minHits, 0xFFFFFFFF, 0);
    } else {
        char low[8];
        char high[8];
        textFormatFullWidthNumber(low, devil->attack.minHits);
        textFormatFullWidthNumber(high, devil->attack.maxHits);
        textFormatBuffer(text, "%s\x81\x60%s", low, high);
        scrSetStringSlot(37, text);
    }
    battleAttributeFormatName(text, devil->kind);
    scrSetStringSlot(38, text);
    skillFormatTargetLabel(text, devil->attack.target);
    scrSetStringSlot(39, text);
    if (devil->element == 0) {
        textFormatBuffer(text, "\x82\x6d\x82\x8f\x82\x8e\x82\x85");
    }
    if (devil->element == 1) {
        textFormatBuffer(text, "\x82\x68\x82\x8e\x82\x93\x82\x94\x82\x81\x82\x8e\x82\x94\x81\x40\x82\x6a\x82\x89\x82\x8c\x82\x8c");
    }
    if (devil->element == 5) {
        textFormatBuffer(text, "\x82\x6f\x82\x8f\x82\x89\x82\x93\x82\x8f\x82\x8e");
    }
    if (devil->element == 6) {
        textFormatBuffer(text, "\x82\x6f\x82\x81\x82\x8e\x82\x89\x82\x83");
    }
    if (devil->element == 7) {
        textFormatBuffer(text, "\x82\x72\x82\x8c\x82\x85\x82\x85\x82\x90");
    }
    if (devil->element == 8) {
        textFormatBuffer(text, "\x82\x61\x82\x89\x82\x8e\x82\x84");
    }
    if (devil->element == 9) {
        textFormatBuffer(text, "\x82\x72\x82\x89\x82\x83\x82\x8b");
    }
    if (devil->element == 11) {
        textFormatBuffer(text, "\x82\x62\x82\x88\x82\x81\x82\x92\x82\x8d");
    }
    if (devil->element == 12) {
        textFormatBuffer(text, "\x82\x63\x82\x81\x82\x9a\x82\x85");
    }
    if (devil->element == 13) {
        textFormatBuffer(text, "\x82\x6c\x82\x95\x82\x94\x82\x85");
    }
    scrSetStringSlot(40, text);
    FUN_002ad414(0, extra, devilId, text);
    scrSetStringSlot(41, text);
    if (directory == NULL) {
        directory = static_cast<RelativeDirectory *>(g_buttonHelp.mbm);
    }
    asdTextDrawDirectoryEntry((AsdText *)work->text.directoryText, 2, -1, 0, 3, directory, index);
}

}
