/* The message input state the message windows share (Shin Megami Tensei IV, 0x49381C). */
#ifndef SMT4_UI_MESSAGECONTROL_H
#define SMT4_UI_MESSAGECONTROL_H

#include "common.h"
#include <stddef.h>

struct MessageControl {
    /* 0x00 */ s32 holdFrames;           /* frames the advance button has been held (the window's auto-advance) */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ f32 cursorOpacity;        /* the advance cursor's overlay while a press is latched */
    /* 0x0C */ u8 latched;               /* the advance button is held */
    /* 0x0D */ u8 suppressed;            /* input is ignored */
};
typedef char MessageControlLayoutCheck[offsetof(MessageControl, cursorOpacity) == 8 &&
    offsetof(MessageControl, suppressed) == 0xD ? 1 : -1];

extern "C" MessageControl g_messageControl;

#endif
