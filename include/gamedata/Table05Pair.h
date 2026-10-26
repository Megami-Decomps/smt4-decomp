#ifndef GAMEDATA_TABLE05PAIR_H
#define GAMEDATA_TABLE05PAIR_H

#include "common.h"
#include <stddef.h>

struct Table05Pair {
    /* 0x00 */ u8 first;
    /* 0x01 */ u8 second;
    /* 0x02 */ u8 result;
    /* 0x03 */ u8 unk03;
};

typedef char Table05PairSizeCheck[sizeof(Table05Pair) == 4 && offsetof(Table05Pair, result) == 2 ? 1 : -1];

#endif
