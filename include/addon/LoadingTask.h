#ifndef AOC_LOADING_TASK_H
#define AOC_LOADING_TASK_H
#include "common.h"

struct AocLoadingTask {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[0x1790];
    /* 0x1794 */ u32 process;
    /* 0x1798 */ u32 unk1798;
    /* 0x179C */ u32 request;
};
#endif
