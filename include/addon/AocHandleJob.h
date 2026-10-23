#ifndef ADDON_AOCHANDLEJOB_H
#define ADDON_AOCHANDLEJOB_H
#include "common.h"
#include "classes/WindowStatus.h"
#include <stddef.h>

struct AocHandleJob {
    u8 state;
    u8 unk01[3];
    WindowStatusResult result; /* 0x04 */
    u8 unk0C[4];
    u32 delay; /* 0x10 */
};
struct AocHandleSource {
    u32 handle[2];
    u8 parameters[1]; /* 0x08 */
};
typedef char AocHandleJobOffsets[offsetof(AocHandleJob, result) == 4 && offsetof(AocHandleJob, delay) == 0x10 && sizeof(AocHandleJob) == 0x14 ? 1 : -1];
typedef char AocHandleSourceOffsets[offsetof(AocHandleSource, parameters) == 8 &&
    sizeof(AocHandleSource) == 0xC ? 1 : -1];
#endif
