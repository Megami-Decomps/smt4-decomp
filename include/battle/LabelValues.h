#ifndef BATTLE_LABELVALUES_H
#define BATTLE_LABELVALUES_H
#include "common.h"
#include <stddef.h>
struct BattleLabelValue { char label[16]; s16 value; u8 padding[4]; };
struct BattleLabelValueState {
    u8 prefix[0x1F54];
    void *resource;
    BattleLabelValue *labels;
};
typedef char BattleLabelValueOffsets[sizeof(BattleLabelValue) == 0x16 && offsetof(BattleLabelValueState, labels) == 0x1F58 ? 1 : -1];
#endif
