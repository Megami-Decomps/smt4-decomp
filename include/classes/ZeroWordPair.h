#ifndef CLASSES_ZERO_WORD_PAIR_H
#define CLASSES_ZERO_WORD_PAIR_H

#include "common.h"

struct ZeroWordPair {
    ZeroWordPair();
    ZeroWordPair &operator=(const ZeroWordPair &other);
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};


#endif
