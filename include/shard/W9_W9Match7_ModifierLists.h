#ifndef SHARD_W9_W9MATCH7_MODIFIERLISTS_H
#define SHARD_W9_W9MATCH7_MODIFIERLISTS_H

#include "common.h"
#include <stddef.h>

struct AttributeModifier {
    /* 0x00 */ s8 kind;
    /* 0x01 */ s8 value;
};

struct AttributeModifierLists {
    /* 0x00 */ u32 unk00[0x18]; /* word-aligned record: retail copies the negative list with vldmia */
    /* 0x60 */ u8 unk60[2];
    /* 0x62 */ AttributeModifier positive[9];
    /* 0x74 */ AttributeModifier negative[10];
};

typedef char AttributeModifierLayoutCheck[sizeof(AttributeModifier) == 2 ? 1 : -1];
typedef char AttributeModifierListsOffsetsCheck[
    offsetof(AttributeModifierLists, positive) == 0x62 &&
    offsetof(AttributeModifierLists, negative) == 0x74 &&
    sizeof(AttributeModifierLists) == 0x88 ? 1 : -1];

#endif
