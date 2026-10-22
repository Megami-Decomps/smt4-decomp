#ifndef EVENT_EVENTTASKREQUEST_H
#define EVENT_EVENTTASKREQUEST_H

#include "common.h"

struct EventTaskRequest {
    /* 0x00 */ u32 active;
    /* 0x04 */ void *task;
};

#endif
