#include "common.h"

struct FlagPairOwner {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u8 first;
    /* 0x1d */ u8 second;
};

/* Clears both flags. */
extern "C" void FUN_0045b2fc(FlagPairOwner *owner)
{
    owner->first = 0;
    owner->second = 0;
}
