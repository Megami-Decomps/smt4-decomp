#ifndef BATTLE_BTLRESIDENTLOADER_H
#define BATTLE_BTLRESIDENTLOADER_H
#include "common.h"
struct BtlMainState;
extern "C" {
/* Thread entry for the lock-protected battle resident-resource loader. */
void btlAdvanceResidentResourceLoad(void *argument);
void *btlLoaderGetLock(BtlMainState *loader);
void FUN_00394cc4(void);
s32 jyoucyuEnsureResidentEntry(void);
s32 resourceFindActiveIndex(u32 id);
void FUN_00328d2c(void);
void FUN_00328fa4(void);
}
#endif
