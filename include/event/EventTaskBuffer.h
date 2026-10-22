#ifndef EVENT_EVENT_TASK_BUFFER_H
#define EVENT_EVENT_TASK_BUFFER_H
#include "common.h"

struct EventTaskBuffer {
    /* 0x00 */ u32 state;
    /* 0x04 */ void *task;
    /* 0x08 */ u8 unk08[0xF8];
};
#endif
