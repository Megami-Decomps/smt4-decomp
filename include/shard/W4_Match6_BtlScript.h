/* The battle script object (smt4) and the scripted unit's flags, shared by btlScriptQueueRequestIfIdle and FUN_00338c38. */
#ifndef SHARD_W4_MATCH6_BTLSCRIPT_H
#define SHARD_W4_MATCH6_BTLSCRIPT_H

#include "common.h"
#include <stddef.h>

#define BTL_UNIT_FLAG_BUSY_A 0x80
#define BTL_UNIT_FLAG_BUSY_B 0x1000

extern "C" {
u8 isOutsideRange4To53(int value);
}

#endif
