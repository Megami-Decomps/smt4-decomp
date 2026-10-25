/* Data table 0x4a: progress unlock conditions, one earned bit each in the save's unlock bitsets. */
#ifndef SHARD_PROGRESSUNLOCK_H
#define SHARD_PROGRESSUNLOCK_H

#include "common.h"

struct ProgressUnlockCondition {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u16 counter;
    /* 0x24 */ u32 minimum;
    /* 0x28 */ u32 requiredFlag;
};

typedef char ProgressUnlockConditionSizeCheck[sizeof(ProgressUnlockCondition) == 0x2c ? 1 : -1];

/* Read one earned-bit storage byte through the save-data byte accessor. */
extern "C" u32 progressUnlockByteGet(const u8 *byte);

#endif
