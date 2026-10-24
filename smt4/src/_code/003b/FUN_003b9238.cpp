#include "common.h"

struct StepText {
    u8 unk00[2];     // 0x00
    u8 text[0x3D];   // 0x02
    u8 infoId;       // 0x3F
};

struct TextStep {
    u8 unk00[0x28];          // 0x00
    s32 state;               // 0x28
    s32 substate;            // 0x2C
    u8 unk30[0x69C];         // 0x30
    u8 unk6CC;               // 0x6CC
    u8 unk6CD[0x68F];        // 0x6CD
    StepText *textEntry;     // 0xD5C
    u8 unkD60[0x20];         // 0xD60
    u32 infoWindow;          // 0xD80
    u8 unkD84[0x18];         // 0xD84
    u32 script;              // 0xD9C
};

extern "C" {

s32 scrRunOpcodesStub(u32 script);
void buttonHelpSelectByProgress(TextStep *step);
void FUN_0027db24(s32 arg);
void dialogOpen(u8 mode, u8 arg);
void infoWinSetMessage(u32 window, s32 id);
void placeWinStartText(const void *text);
void FUN_002305e8(s32 value);

/* When the step's script finishes, opens the text of its entry and moves the step to state 5. */
void FUN_003b9238(TextStep *step)
{
    if (scrRunOpcodesStub(step->script) == 2) {
        buttonHelpSelectByProgress(step);
        FUN_0027db24(0);
        dialogOpen(0, 0);
        infoWinSetMessage(step->infoWindow, step->textEntry->infoId);
        step->substate = 0;
        step->state = 5;
        step->unk6CC = 0;
        placeWinStartText(step->textEntry->text);
        FUN_002305e8(1);
    }
}

} /* extern "C" */
