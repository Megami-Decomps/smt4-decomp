#ifndef SHARD_TOUCHREGISTERFIRSTREGION_H
#define SHARD_TOUCHREGISTERFIRSTREGION_H

#include "common.h"
#include "shard/W5_W5Match2_TouchRegions.h"

#ifdef __cplusplus
extern "C" {
#endif

void touchRegisterFirstRegion(TouchRegions *regions,s32 x,s32 y,s32 width,s32 height);

#ifdef __cplusplus
}
#endif

#endif
