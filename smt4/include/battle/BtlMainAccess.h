#pragma once
#include "battle/btlMain.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include <stddef.h>

extern "C" {

/* The battle's state block. */
BtlMainState *btlGetMainState(void);

}

extern "C" {
void FUN_00394b0c(void);
}

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00227d18(u32 id);

#ifdef __cplusplus
}
#endif
