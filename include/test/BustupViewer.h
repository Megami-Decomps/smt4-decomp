/* test/BustupViewer.c: the debug bust-up (portrait) viewer. */
#ifndef TEST_BUSTUPVIEWER_H
#define TEST_BUSTUPVIEWER_H

#include "common.h"

typedef struct BustupViewerWork {
    /* 0x00 */ u32 task;   /* the viewer's task handle */
    /* 0x04 */ u8 done;    /* the task has finished; the work area may be freed */
} BustupViewerWork;

#endif
