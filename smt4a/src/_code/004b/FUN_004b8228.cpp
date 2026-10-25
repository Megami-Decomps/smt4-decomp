#include "common.h"
#include "event/2dEvent/EventEffect.h"

struct StepText {
    u8 unk00[2];     // 0x00
    u8 text[0x3D];   // 0x02
    u8 infoId;       // 0x3F
};

struct TextStep {
    u8 unk00[0x28];          // 0x00
    s32 state;               // 0x28
    s32 substate;            // 0x2C
    u8 unk30[0xA58];         // 0x30
    u8 unkA88;               // 0xA88
    u8 unkA89[0x68F];        // 0xA89
    StepText *textEntry;     // 0x1118
    u8 unk111C[0x20];        // 0x111C
    u32 infoWindow;          // 0x113C
    u8 unk1140[0x18];        // 0x1140
    u32 script;              // 0x1158
};

extern "C" {

s32 scrRunOpcodesStub(u32 script);
void FUN_004b7d88(TextStep *step);
void FUN_00215978(s32 arg);
void dialogOpen(u8 mode, u8 arg);
void placeWinStartText(const void *text);
void placeWinSetValue(s32 value);

/* When the step's script finishes, opens the text of its entry and moves the step to state 5. */
void FUN_004b8228(TextStep *step)
{
    if (scrRunOpcodesStub(step->script) == 2) {
        FUN_004b7d88(step);
        FUN_00215978(0);
        dialogOpen(0, 0);
        infoWinSetText(reinterpret_cast<const char *>(step->infoWindow), step->textEntry->infoId);
        step->substate = 0;
        step->state = 5;
        step->unkA88 = 0;
        placeWinStartText(step->textEntry->text);
        placeWinSetValue(1);
    }
}

} /* extern "C" */
