/* kernel/jyoucyu.c: the resident ("jyoucyu") module that stays loaded across scenes. */
#ifndef KERNEL_JYOUCYU_H
#define KERNEL_JYOUCYU_H

#include "common.h"

typedef struct JyoucyuWork {
    /* 0x00 */ u32 task;   /* the task's handle */
    /* 0x04 */ u8 done;    /* the task has finished; the work area may be freed */
} JyoucyuWork;

/* smt4a: the module's global state; its work area is at +4. */
typedef struct JyoucyuGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ JyoucyuWork *work;
} JyoucyuGlobals;

#endif
