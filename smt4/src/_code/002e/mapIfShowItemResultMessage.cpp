/* NON_MATCHING: result/state/flags allocation and initial zero scheduling differ; -O2 candidate. */
#include "map/mapIf.h"

extern "C" {
extern MapIfGlobals g_mapIf;
u32 FUN_002bfdd4();
u32 FUN_002bfdc4();
void FUN_0025086c(s32, char *);
u32 FUN_002be650(u32, s32);
const char *FUN_002bcfc0(u32, s32);
void textFormatBuffer(char *, const char *, ...);
void dialogSetText(const char *);
void dialogOpen(s32, s32);
void FUN_002bfc24(s32, u32, u32, u32, f32, f32);

// Show the result of obtaining map items and choose the matching spoken message.
void mapIfShowItemResultMessage(u32 result, u32 item, s32 count)
{
    MapIfState *state = g_mapIf.state;
    u32 flags = FUN_002bfdd4() | 4;
    state->unk18 = 1;
    state->unk1C = 0;
    u32 message = 0;
    char text[128];
    char countText[12];
    switch (result) {
    case 0:
        textFormatBuffer(text, "\x82\x60\x82\x8c\x82\x8c\x81\x40\x82\x93\x82\x90\x82\x85\x82\x83\x82\x89\x82\x86\x82\x89\x82\x85\x82\x84\x81\x40\x82\x89\x82\x94\x82\x85\x82\x8d\x82\x93\x81\x40\x82\x8f\x82\x82\x82\x94\x82\x81\x82\x89\x82\x8e\x82\x85\x82\x84\x81\x44");
        message = 0x7a906;
        break;
    case 1:
        FUN_0025086c(count, countText);
        textFormatBuffer(text, "\x25\x73\x81\x40\x82\x94\x82\x99\x82\x90\x82\x85\x81\x69\x82\x93\x81\x6a\x81\x40\x82\x8f\x82\x86\x81\x40\x82\x89\x82\x94\x82\x85\x82\x8d\x81\x40\x82\x92\x82\x85\x82\x8d\x82\x81\x82\x89\x82\x8e\x82\x89\x82\x8e\x82\x87\x81\x44", countText);
        message = 0x61abf;
        break;
    case 2:
    case 3:
    case 5:
    {
        u32 entry = FUN_002be650(item, 0);
        FUN_0025086c(count, countText);
        textFormatBuffer(text, "\x25\x73\x81\x46\x81\x40\x25\x73\x81\x40\x82\x71\x82\x85\x82\x8d\x82\x81\x82\x89\x82\x8e\x82\x89\x82\x8e\x82\x87", FUN_002bcfc0(entry, 0), countText);
        break;
    }
    case 4:
    {
        u32 entry = FUN_002be650(item, 0);
        textFormatBuffer(text, "\x82\x6e\x82\x82\x82\x94\x82\x81\x82\x89\x82\x8e\x82\x85\x82\x84\x81\x40\x82\x94\x82\x88\x82\x85\x81\x40\x82\x8e\x82\x85\x82\x85\x82\x84\x82\x85\x82\x84\x81\x40\x25\x73\x81\x44", FUN_002bcfc0(entry, 0));
        message = 0x7a906;
        break;
    }
    }
    dialogSetText(text);
    dialogOpen(0, 1);
    if (message == 0) {
        if (count == 0) message = 0x7a906;
        else if (count == 1) message = 0x7a8f9;
        else if (count == 2) message = 0x7a8fa;
        else if (count == 3) message = 0x7a8fb;
        else if (count == 4) message = 0x7a8fc;
        else if (count == 5) message = 0x7a8fd;
        else if (count == 10) message = 0x7a8fe;
        else if (count == 15) message = 0x7a8ff;
        else if (count == 20) message = 0x7a900;
        else message = 0x7a901;
    }
    FUN_002bfc24(1, message, FUN_002bfdc4(), flags, 0.707f, 0.707f);
}
}
