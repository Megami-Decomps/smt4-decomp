#include "common.h"

struct HolderValue {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
};

/* Store the holder's auxiliary value and report success. */
extern "C" s32 holderSetAuxiliaryValue(HolderValue *holder, u32 value)
{
    holder->value = value;
    return 0;
}
