#ifndef SYS_PROCESS_MEMORY_USAGE_H
#define SYS_PROCESS_MEMORY_USAGE_H

#include "common.h"
#include <stddef.h>

/* Resource-limit query parameters stored together in both games. */
struct ProcessMemoryUsageQuery {
    /* 0x00 */ u32 process;            /* current process pseudo-handle */
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 committedMemory;   /* resource ID for committed memory */
};

typedef char ProcessMemoryUsageLayoutCheck[
    offsetof(ProcessMemoryUsageQuery, committedMemory) == 8 && sizeof(ProcessMemoryUsageQuery) == 12 ? 1 : -1];

#endif
