#ifndef STATUS_STATUS_BUST_UP_H
#define STATUS_STATUS_BUST_UP_H
#include "common.h"
#include <stddef.h>

/* Refcounted portrait resource tables. */
struct StatusBustUpResources {
    /* 0x00 */ s8 refCount;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ void *workA;
    /* 0x08 */ void *workB;
};
typedef char StatusBustUpResourcesLayout[sizeof(StatusBustUpResources) == 12 &&
    offsetof(StatusBustUpResources, workA) == 4 && offsetof(StatusBustUpResources, workB) == 8 ? 1 : -1];
extern "C" {
void playerModelLoadPart(u32 model, s32 part, u32 d);
}

#endif
