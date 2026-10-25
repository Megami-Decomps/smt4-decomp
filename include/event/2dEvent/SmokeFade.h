#ifndef EVENT_2DEVENT_SMOKEFADE_H
#define EVENT_2DEVENT_SMOKEFADE_H
#include "common.h"
#include <stddef.h>
struct SmokeFadeState {
    u32 job;
    u32 unk04;
    void *file;
    u32 phase;
    u32 first;
    u32 second;
    u32 frame;
    f32 opacity;
    f32 scale;
    union { u32 flags; u8 active; };
};
struct SmokeFadeImage {
    u32 table;
    u32 node;
    u8 loadedNode;
    u8 loadedTable;
    u8 unk0A[2];
};
typedef char SmokeFadeStateLayoutCheck[sizeof(SmokeFadeState) == 0x28 && offsetof(SmokeFadeState, active) == 0x24 ? 1 : -1];
typedef char SmokeFadeImageSizeCheck[sizeof(SmokeFadeImage) == 0xC ? 1 : -1];
extern "C" {
u8 FUN_0023b3d0(void);
}

extern "C" {
u8 FUN_0026c3a0(void);
}

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_002c7e3c(void);

#ifdef __cplusplus
}
#endif

#endif
