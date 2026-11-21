/* NON_MATCHING: 40 lines: retail reads the repeating flag before incrementing the hold count (and compares repeatDelay against it with cmp/strle), and the reader's -1 and the held-state constants get other registers. */
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

/* The touch panel reader: the panel and the last sample it read (index and tick, -1 before the first read). */
typedef struct {
    /* 0x00 */ u32 handle;
    /* 0x04 */ s32 lastIndex;
    /* 0x08 */ s64 lastTick;
} TouchReader;

extern TouchInput g_touchInput;

u32 FUN_0011c448(void);
u8 nn_hid_CTR_TouchPanelReader_ReadLatest(TouchReader *reader, TouchStatus *status);

/* Samples the touch panel and updates the held state and the key-repeat style trigger. */
s32 touchInputUpdate(void)
{
    TouchReader reader;

    reader.handle = FUN_0011c448();
    reader.lastIndex = -1;
    reader.lastTick = -1;
    g_touchInput.prev = g_touchInput.cur;
    g_touchInput.prevHeld = g_touchInput.held;
    if (g_touchInput.cur.touch == 1) {
        g_touchInput.held = 1;
        g_touchInput.trigger = 0;
        g_touchInput.holdFrames++;
        if (g_touchInput.repeating) {
            if (g_touchInput.holdFrames >= g_touchInput.repeatDelay) {
                g_touchInput.holdFrames = 0;
                g_touchInput.trigger = 1;
            }
        } else {
            if (g_touchInput.holdFrames == 1) {
                g_touchInput.trigger = 1;
            }
            if (g_touchInput.holdFrames >= g_touchInput.firstDelay) {
                g_touchInput.repeating = 1;
                g_touchInput.holdFrames = 0;
                g_touchInput.trigger = 1;
            }
        }
    } else {
        g_touchInput.holdFrames = 0;
        g_touchInput.trigger = 0;
        g_touchInput.repeating = 0;
        if (g_touchInput.cur.touch == 0) {
            g_touchInput.held = 0;
        }
    }
    nn_hid_CTR_TouchPanelReader_ReadLatest(&reader, &g_touchInput.cur);
    if (g_touchInput.cur.touch == 0) {
        g_touchInput.cur.x = g_touchInput.prev.x;
        g_touchInput.cur.y = g_touchInput.prev.y;
    }
    return 1;
}

} /* extern "C" */
