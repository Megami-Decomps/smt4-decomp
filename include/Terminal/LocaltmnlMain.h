/* Terminal/LocaltmnlMain.c: the terminal screen's local (offline) variant. */
#ifndef TERMINAL_LOCALTMNLMAIN_H
#define TERMINAL_LOCALTMNLMAIN_H

#include "common.h"

typedef struct LocalTmnlWork {
    /* 0x00 */ u32 task;   /* the task's handle */
    /* 0x04 */ u8 done;    /* the task has finished; the work area may be freed */
    /* 0x05 */ u8 enabled;
} LocalTmnlWork;
typedef char LocalTmnlWorkPrefixSizeCheck[sizeof(LocalTmnlWork) == 8 ? 1 : -1];
typedef char LocalTmnlWorkEnabledOffsetCheck[__INTADDR__(&((LocalTmnlWork *)0)->enabled) == 5 ? 1 : -1];

#endif
