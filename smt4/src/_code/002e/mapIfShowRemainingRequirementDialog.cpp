/* NON_MATCHING: only the switch index and the raw sound flags swap r1/r2. */
#include <stdio.h>
#include "map/MapIfGlobals.h"
#include "ui/UiControl.h"
#include "addon/LookupRecord.h"
#include "code/Code002b_Smt4.h"
extern "C" {
void textFormatFullWidthTwoDigits(s32 count, char *text);
const char *textConvertToGlyphPairs(void *record, s32 variant);
void dialogSetText(const char *text);
u32 messageVoiceBankGet(void);
void voiceRequestPlayFile(s32 group, u32 sound, u32 voice, u32 flags, f32 leftVolume, f32 rightVolume);

void mapIfShowRemainingRequirementDialog(u32 kind, u32 item, s32 count)
{
    MapIfState *work = g_mapIf.state;
    u32 sound = 0;
    u32 flags = messageVoiceFlagsGet() | 4;
    char text[128];
    char number[8];
    work->unk18 = 1;
    work->unk1C = 0;
    switch (kind) {
    case 7:
        textFormatFullWidthTwoDigits(count, number);
        /* Full-width English: "%s type(s) of demon remaining." */
        sprintf(text, "%s\x81\x40\x82\x94\x82\x99\x82\x90\x82\x85\x81\x69\x82\x93\x81\x6a\x81\x40\x82\x8f\x82\x86\x81\x40\x82\x84\x82\x85\x82\x8d\x82\x8f\x82\x8e\x81\x40\x82\x92\x82\x85\x82\x8d\x82\x81\x82\x89\x82\x8e\x82\x89\x82\x8e\x82\x87\x81\x44", number);
        sound = 0x61ABF;
        break;
    case 8:
    case 9:
    case 11:
        textFormatFullWidthTwoDigits(count, number);
        /* Full-width English: "%s: %s Remaining". */
        sprintf(text, "%s\x81\x46\x81\x40%s\x81\x40\x82\x71\x82\x85\x82\x8d\x82\x81\x82\x89\x82\x8e\x82\x89\x82\x8e\x82\x87", textConvertToGlyphPairs(dataTable01FindByIdWithAoc(item), 0), number);
        break;
    case 6:
    case 10:
        work->unk18 = 0;
        return;
    }
    dialogSetText(text);
    dialogOpen(0, 1);
    if (!sound) {
        if (count == 0)
            return;
        if (count == 1) sound = 0x7A8F0;
        else if (count == 2) sound = 0x7A8F1;
        else if (count == 3) sound = 0x7A8F2;
        else if (count == 4) sound = 0x7A8F3;
        else if (count == 5) sound = 0x7A8F4;
        else if (count == 10) sound = 0x7A8F5;
        else if (count == 15) sound = 0x7A8F6;
        else if (count == 20) sound = 0x7A8F7;
        else sound = 0x7A8F8;
    }
    u32 voice = messageVoiceBankGet();
    voiceRequestPlayFile(1, sound, voice, flags, 0.707f, 0.707f);
}
}
