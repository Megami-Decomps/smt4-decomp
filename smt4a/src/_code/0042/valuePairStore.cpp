#include "common.h"

struct ValuePair {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};

/* Stores both words of a pair. */
extern "C" void valuePairStore(ValuePair *pair, u32 first, u32 second)
{
    pair->first = first;
    pair->second = second;
}
