#ifndef SHARD_SURFACECOPY_H
#define SHARD_SURFACECOPY_H

#include "common.h"
#include "shard/JobWork.h"

#ifdef __cplusplus
extern "C" {
#endif

void surfaceCopy(JobSurface *dest, JobSurface *source);

#ifdef __cplusplus
}
#endif

#endif
