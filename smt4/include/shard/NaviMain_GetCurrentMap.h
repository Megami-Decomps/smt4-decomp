#ifndef SHARD_NAVIMAIN_GETCURRENTMAP_H
#define SHARD_NAVIMAIN_GETCURRENTMAP_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* The map the navigator shows; callers pass their navi handle (`unused`), which it never reads. */
u32 NaviMain_GetCurrentMap(const void *unused);

#ifdef __cplusplus
}
#endif

#endif
