#ifndef SHARD_NNNSTDMEMCPY_H
#define SHARD_NNNSTDMEMCPY_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

unsigned long long nnnstdMemCpy(u8 *destination, const u8 *source, u32 size);

#ifdef __cplusplus
}
#endif

#endif
