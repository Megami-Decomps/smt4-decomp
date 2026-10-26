#include "common.h"

struct BigOwner {
    /* 0x0000 */ u8 unk0000[0x3040];
    /* 0x3040 */ u32 value;
};

/* Tells whether the value word is set. */
extern "C" u32 FUN_0045fed4(const BigOwner *owner)
{
    return owner->value != 0;
}
