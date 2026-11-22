/* NON_MATCHING: 84 lines; retail copies the flag and label tables from two separate constants (the build merges them into one), keeps the window pointer in r9 and orders the message arguments differently */
#include "ui/MessageMainA.h"
#include "ui/ScriptChoiceMenu.h"
#include "AsdSDK/asdTextFormatStream.h"
extern "C" {
s32 scrGetCommandFrame(void);
s32 scrGetArg(u32 index);
void scrCommMessageSetMode(s32 mode);
s32 gameFlagIsSet(u32 flag);
void scrSetResult(s32 result);
void bustupCutAnimRequestStopSlots(void);
void eventTexRequestStopAll(void);
u32 scrGetCommandOwner(void);
void messageWindowShowOrPoll(u32, u32, u32, s32, s32, s32);
void msgBoxFlagsSetBit7(u32 box);
void sortMenuAcquire(u32, s32);
void useCounterAppendValue(u8 label);
void useCounterStart(void);
s32 useCounterGetCurrentValue(void);
s32 useCounterIsFinished(void);
void touchMenuClose(...);
void useCounterRelease(void);
void obj04Finish(void);

/* Offers enabled five-way choices, excluding the script's current selection. */
u32 FUN_003884d4(void)
{
    u32 flags[5] = {0x37C, 0x37D, 0x37E, 0x37F, 0x308}; /* the game flag that enables each choice */
    u8 labels[8] = {'U', 'V', 'W', 'X', 'Z'};          /* the menu label of each choice */
    s32 frame = scrGetCommandFrame();
    s32 excluded = scrGetArg(0);
    scrCommMessageSetMode(0);
    s32 available = 0;
    for (s32 i = 0; i < 5; ++i)
        if (i != excluded && gameFlagIsSet(flags[i])) ++available;
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
        /* the prompt, in full-width Shift-JIS: "Where would you like to go?" */
        asdTextFormatStream(work->box, 4, 0xffffffff, 0, 3, "%s", "\x81\x72\x81\x40\x82\x76\x82\x88\x82\x85\x82\x92\x82\x85\x81\x40\x82\x97\x82\x8F\x82\x95\x82\x8C\x82\x84\x81\x40\x82\x99\x82\x8F\x82\x95\x81\x40\x82\x8C\x82\x89\x82\x8B\x82\x85\x81\x40\x82\x94\x82\x8F\x81\x40\x82\x87\x82\x8F\x81\x48");
        msgBoxFlagsSetBit7(work->box);
        work->displayEnabled = 0;
        work->flags |= 0x20;
        sortMenuAcquire(0xffffffff, 3);
        for (s32 i = 0; i < 5; ++i)
            if (i != excluded && gameFlagIsSet(flags[i])) useCounterAppendValue(labels[i]);
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
