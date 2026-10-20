/* Terminal/LocaltmnlMain.c: the terminal screen's local (offline) variant. */
#ifndef TERMINAL_LOCALTMNLMAIN_H
#define TERMINAL_LOCALTMNLMAIN_H

#include "common.h"

typedef struct LocalTmnlWork {
    /* 0x00 */ u32 task;   /* the task's handle */
    /* 0x04 */ u8 done;    /* the task has finished; the work area may be freed */
} LocalTmnlWork;

#endif
