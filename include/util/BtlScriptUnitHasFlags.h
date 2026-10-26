/* BtlScriptUnitHasFlags.h */
#ifndef INCLUDE_UTIL_BTLSCRIPTUNITHASFLAGS_H
#define INCLUDE_UTIL_BTLSCRIPTUNITHASFLAGS_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
struct BtlMainStateA;
/* Whether the current script unit has flag 0x80 or 0x1000. The callers pass the battle state, which the
 * function itself does not read. */
s32 btlScriptUnitHasFlags(const BtlMainStateA *state);
#ifdef __cplusplus
}
#endif

#endif
