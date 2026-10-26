/* actorIsActive.h */
#ifndef INCLUDE_UTIL_ACTORISACTIVE_H
#define INCLUDE_UTIL_ACTORISACTIVE_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* True when the object exists, is enabled, and none of its blocking state bits (0x2, 0x4, 0x400) are set. */
u32 actorIsActive(void *actor);
#ifdef __cplusplus
}
#endif

#endif
