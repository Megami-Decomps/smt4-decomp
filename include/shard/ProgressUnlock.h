/* The earned titles (gamedata/CampCecTable.h): one earned bit each in the save's unlock bitsets. */
#ifndef SHARD_PROGRESSUNLOCK_H
#define SHARD_PROGRESSUNLOCK_H

#include "common.h"

/* Read one earned-bit storage byte through the save-data byte accessor. */
extern "C" u32 progressUnlockByteGet(const u8 *byte);

#endif
