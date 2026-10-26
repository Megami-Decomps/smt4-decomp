#include "common.h"

struct FlagOwner {
    /* 0x00 */ u8 unk00[400];
    /* 0x190 */ u32 value;
};

/* Tells whether the owner's value word is set. */
extern "C" u32 FUN_00380674(const FlagOwner *owner)
{
    return owner->value != 0;
}
