/* NON_MATCHING: choice-table copies, prompt literals, and message/menu register scheduling differ. */
#include "ui/ScriptChoiceMenu.h"
extern "C" {
extern const FiveChoiceTable DAT_00530a10;
extern const ChoiceLabelTable DAT_0052fe4c;
extern MessageGlobalsA g_messageMain;
extern const u8 LAB_0038870c;
extern const u8 LAB_00388748;
s32 scrGetCommandFrame(void);
s32 scrGetArg(u32 index);
void scrCommMessageSetMode(s32 mode);
s32 gameFlagIsSet(u32 flag);
void scrSetResult(s32 result);
void bustupCutAnimRequestStopSlots(void);
void eventTexRequestStopAll(void);
u32 FUN_002ba85c(void);
void FUN_0021bdac(u32, u32, u32, s32, s32, s32);
void asdTextFormatStream(u32, s32, u32, s32, s32, const u8 *, const u8 *);
void msgBoxFlagsSetBit7(u32 box);
void sortMenuAcquire(u32, s32);
void FUN_0031f208(u8 label);
void useCounterStart(void);
s32 useCounterGetCurrentValue(void);
s32 useCounterIsFinished(void);
void touchMenuClose(...);
void useCounterRelease(void);
void obj04Finish(void);

/* Offers enabled five-way choices, excluding the script's current selection. */
u32 FUN_003884d4(void)
{
    FiveChoiceTable choices = DAT_00530a10;
    u8 labels[8];
    for (s32 i = 0; i < 8; ++i) labels[i] = DAT_0052fe4c.five[i];
    s32 frame = scrGetCommandFrame();
    s32 excluded = scrGetArg(0);
    scrCommMessageSetMode(0);
    s32 available = 0;
    for (s32 i = 0; i < 5; ++i)
        if (i != excluded && gameFlagIsSet(choices.flags[i])) ++available;
    MessageWorkA *work = g_messageMain.state;
    if (!available) {
        scrSetResult(99);
        return 1;
    }
    if (frame == 0) {
        bustupCutAnimRequestStopSlots();
        eventTexRequestStopAll();
        if (g_messageMain.state) g_messageMain.state->displayMode = 0x15;
        u32 message = FUN_002ba85c();
        u32 argument = scrGetArg(0);
        u32 commandFrame = scrGetCommandFrame();
        FUN_0021bdac(message, argument, commandFrame, 6, 0, 0);
        asdTextFormatStream(work->box, 4, 0xffffffff, 0, 3, &LAB_00388748, &LAB_0038870c);
        msgBoxFlagsSetBit7(work->box);
        work->unk19C4 = 0;
        work->flags |= 0x20;
        sortMenuAcquire(0xffffffff, 3);
        for (s32 i = 0; i < 5; ++i)
            if (i != excluded && gameFlagIsSet(choices.flags[i])) FUN_0031f208(labels[i]);
        useCounterStart();
    }
    s32 result = useCounterGetCurrentValue();
    if (useCounterIsFinished()) {
        scrSetResult(0);
        touchMenuClose();
        useCounterRelease();
        obj04Finish();
        return 1;
    }
    if (result == 0x69) return 0;
    touchMenuClose(0);
    useCounterRelease();
    scrSetResult(result == 0x5a ? 5 : result - 0x54);
    obj04Finish();
    return 1;
}
}
