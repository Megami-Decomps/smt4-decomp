/* Content-entry kind lookup: the kind (item, skill, ...) of a content id. */
#ifndef ADDON_AOCENTRYKIND_H
#define ADDON_AOCENTRYKIND_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Kind of content entry `id` (0 when it has no record). */
u32 aocEntryGetKind(u32 id);

/* Forwards to aocEntryGetKind: armlink NOPed the tail call to the next function. */
u32 aocEntryGetKindForward(u32 id);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
