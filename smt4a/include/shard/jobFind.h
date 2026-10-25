#ifndef SHARD_JOBFIND_H
#define SHARD_JOBFIND_H

#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

#ifdef __cplusplus
extern "C" {
#endif

AsdProcess *jobFind(u32 handle);

#ifdef __cplusplus
}
#endif

#endif
