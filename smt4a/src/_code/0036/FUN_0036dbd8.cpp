/* NON_MATCHING: choice-table copies, prompt literals, and message/menu register scheduling differ. */
#include "ui/MessageMainA.h"
#include "ui/ScriptChoiceMenu.h"
extern "C" {
extern const SevenChoiceTable DAT_00530a4c;
extern const ChoiceLabelTable DAT_0052fe4c;
extern const u8 LAB_0036de54;
s32 scrGetCommandFrame(void);
s32 scrGetArg(u32 index);
void scrCommMessageSetMode(s32 mode);
s32 gameFlagIsSet(u32 flag);
void scrSetResult(s32 result);
void bustupCutAnimRequestStopSlots(void);
void eventTexRequestStopAll(void);
u32 scrGetCommandOwner(void);
void messageWindowShowOrPoll(u32, u32, u32, s32, s32, s32);
void asdTextFormatStream(u32, s32, u32, s32, s32, const u8 *, const u8 *);
void msgBoxFlagsSetBit7(u32 box);
void sortMenuAcquire(u32, s32);
void useCounterAppendValue(u8 label);
void useCounterStart(void);
s32 useCounterGetCurrentValue(void);
s32 useCounterIsFinished(void);
void touchMenuClose(...);
void useCounterRelease(void);
void obj04Finish(void);

/* Offers the enabled seven-way choices, excluding the script's current selection. */
u32 FUN_0036dbd8(void)
{
    u32 flags[7];
    u8 labels[8];
    for (s32 i = 0; i < 7; ++i) flags[i] = DAT_00530a4c.flags[i];
    for (s32 i = 0; i < 8; ++i) labels[i] = DAT_0052fe4c.seven[i];
    s32 frame = scrGetCommandFrame();
    s32 excluded = scrGetArg(0);
    scrCommMessageSetMode(0);
    s32 available = 0;
    for (s32 i = 0; i < 7; ++i)
        if (i != excluded && (i == 0 || gameFlagIsSet(flags[i]))) ++available;
    MessageWindowA *work = g_messageMain.window;
    if (!available) {
        scrSetResult(99);
        return 1;
    }
    if (frame == 0) {
        bustupCutAnimRequestStopSlots();
        eventTexRequestStopAll();
        if (g_messageMain.window) g_messageMain.window->displayMode = 0x15;
        u32 message = scrGetCommandOwner();
        u32 argument = scrGetArg(0);
        u32 commandFrame = scrGetCommandFrame();
        messageWindowShowOrPoll(message, argument, commandFrame, 6, 0, 0);
        asdTextFormatStream(work->box, 4, 0xffffffff, 0, 3, "%s", &LAB_0036de54);
        msgBoxFlagsSetBit7(work->box);
        work->displayEnabled = 0;
        work->flags |= 0x20;
        sortMenuAcquire(0xffffffff, 3);
        for (s32 i = 0; i < 7; ++i)
            if (i != excluded && (i == 0 || gameFlagIsSet(flags[i]))) useCounterAppendValue(labels[i]);
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
    scrSetResult(result - 0x4d);
    obj04Finish();
    return 1;
}
}
