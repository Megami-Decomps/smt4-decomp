/* Sets the given bit in the object's 16-bit mask. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[0x5e];  /* 0x00 */
    u16 mask;        /* 0x5e */
} MaskOwner;

MaskOwner *FUN_001801a4(void);

void FUN_003e00bc(u32 bit)
{
    MaskOwner *owner = FUN_001801a4();

    owner->mask |= 1 << bit;
}

} /* extern "C" */
