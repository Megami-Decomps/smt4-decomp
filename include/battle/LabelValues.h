#ifndef BATTLE_LABELVALUES_H
#define BATTLE_LABELVALUES_H
#include "common.h"
#include <stddef.h>

struct BattleLabelValue {
    /* 0x00 */ char label[16];
    /* 0x10 */ s16 value;
    /* 0x12 */ u8 padding[4];
};

struct BattleLabelValueStateIV {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ BattleLabelValue *labels;
};
typedef char BattleLabelValueStateIVOffset[offsetof(BattleLabelValueStateIV, labels) == 0x1CFC ? 1 : -1];

/* Apocalypse stores the loaded resource and its label table separately. */
struct BattleLabelValueState {
    u8 prefix[0x1F54];
    void *resource;
    BattleLabelValue *labels;
};
typedef char BattleLabelValueOffsets[sizeof(BattleLabelValue) == 0x16 && offsetof(BattleLabelValueState, labels) == 0x1F58 ? 1 : -1];
#endif
