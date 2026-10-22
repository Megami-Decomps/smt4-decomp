/* NON_MATCHING: retail copies the reader and previous status with ldm/stm and loads the state base after the reader call; built uses ldrd/strd */
#include "common.h"

extern "C" {

typedef struct {
    u16 x;      /* 0x0 */
    u16 y;      /* 0x2 */
    u8 touch;   /* 0x4 */
    u8 unk5[3];
} TouchStatus;

typedef struct {
    TouchStatus cur;    /* 0x00 */
    TouchStatus prev;   /* 0x08 */
    u8 held;            /* 0x10 */
    u8 prevHeld;        /* 0x11 */
    u8 trigger;         /* 0x12: pulses on the first frame and on each repeat */
    u8 repeating;       /* 0x13 */
    s32 holdFrames;     /* 0x14 */
    s32 firstDelay;     /* 0x18 */
    s32 repeatDelay;    /* 0x1c */
} TouchInput;

typedef struct {
    u32 handle;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} TouchReader;

extern TouchInput DAT_004e3cd4;

u32 FUN_0011c448(void);
u8 nn_hid_CTR_TouchPanelReader_ReadLatest(TouchReader *reader, TouchStatus *status);

/* Samples the touch panel and updates the held state and the key-repeat style trigger. */
s32 FUN_00108b6c(void)
{
    TouchReader reader;

    reader.handle = FUN_0011c448();
    reader.unk4 = -1;
    reader.unk8 = -1;
    reader.unkC = -1;
    DAT_004e3cd4.prev = DAT_004e3cd4.cur;
    DAT_004e3cd4.prevHeld = DAT_004e3cd4.held;
    if (DAT_004e3cd4.cur.touch == 1) {
        DAT_004e3cd4.held = 1;
        DAT_004e3cd4.trigger = 0;
        DAT_004e3cd4.holdFrames++;
        if (DAT_004e3cd4.repeating) {
            if (DAT_004e3cd4.holdFrames >= DAT_004e3cd4.repeatDelay) {
                DAT_004e3cd4.holdFrames = 0;
                DAT_004e3cd4.trigger = 1;
            }
        } else {
            if (DAT_004e3cd4.holdFrames == 1) {
                DAT_004e3cd4.trigger = 1;
            }
            if (DAT_004e3cd4.holdFrames >= DAT_004e3cd4.firstDelay) {
                DAT_004e3cd4.repeating = 1;
                DAT_004e3cd4.holdFrames = 0;
                DAT_004e3cd4.trigger = 1;
            }
        }
    } else {
        DAT_004e3cd4.holdFrames = 0;
        DAT_004e3cd4.trigger = 0;
        DAT_004e3cd4.repeating = 0;
        if (DAT_004e3cd4.cur.touch == 0) {
            DAT_004e3cd4.held = 0;
        }
    }
    nn_hid_CTR_TouchPanelReader_ReadLatest(&reader, &DAT_004e3cd4.cur);
    if (DAT_004e3cd4.cur.touch == 0) {
        DAT_004e3cd4.cur.x = DAT_004e3cd4.prev.x;
        DAT_004e3cd4.cur.y = DAT_004e3cd4.prev.y;
    }
    return 1;
}

} /* extern "C" */
