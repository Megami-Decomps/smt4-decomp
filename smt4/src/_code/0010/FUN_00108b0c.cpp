#include "common.h"

extern "C" {

typedef struct JobPanel {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s8 shown;
    /* 0x29 */ u8 unk29[2];
    /* 0x2B */ s8 ready;
} JobPanel;

typedef struct JobWork {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ u8 closeRequested;
    /* 0x01D */ u8 unk01d[0xF00 - 0x1D];
    /* 0xF00 */ JobPanel panel;
} JobWork;

extern JobWork *jobGetWork(void);
extern int stateValuesGetBySelector(u32 arg);
extern int FUN_0011340c(u32 arg);

/* Closes the panel when it is shown and ready, the check stateValuesGetBySelector passes and a close was requested. */
u8 FUN_00108b0c(void)
{
    JobWork *work = jobGetWork();

    if (work->panel.shown == 0) {
        return 0;
    }
    if (work->panel.ready == 0) {
        return 0;
    }
    if (stateValuesGetBySelector(0) == 0 && work->closeRequested != 0) {
        FUN_0011340c(0);
    }
    return 0;
}

}
