#include "common.h"

extern "C" {

void FUN_00183e58(void);
void messageSlotSet(s32 value);
void scrCommMessageSetMode(...);
void messageStateEndMode2(void);
void campCreateCommonBackground(void);
void commonBgReset(void);
s32 scrGetCommandFrame(void);
s32 ref208StateIs7(void);

/* Script step: when scrGetCommandFrame reports nonzero and ref208StateIs7 agrees, finishes (messageStateEndMode2, scrCommMessageSetMode(-1), messageSlotSet(0)) and returns 1; when scrGetCommandFrame reports 0, runs the three clean-up calls; returns 0 otherwise. */
u32 FUN_002a3598(void)
{
    s32 result;

    scrCommMessageSetMode();
    result = scrGetCommandFrame();
    if (result != 0) {
        result = ref208StateIs7();
        if (result != 0) {
            messageStateEndMode2();
            scrCommMessageSetMode(0xFFFFFFFF);
            messageSlotSet(0);
            return 1;
        }
    } else {
        FUN_00183e58();
        commonBgReset();
        campCreateCommonBackground();
    }
    return 0;
}

} /* extern "C" */
