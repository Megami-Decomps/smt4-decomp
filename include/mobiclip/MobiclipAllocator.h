/* The allocator the Mobiclip decoder calls through a global function pointer. */
#ifndef MOBICLIP_MOBICLIPALLOCATOR_H
#define MOBICLIP_MOBICLIPALLOCATOR_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Allocates `bytes` through the global allocator hook (a tail call). */
void *callGlobalHook(u32 bytes);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
