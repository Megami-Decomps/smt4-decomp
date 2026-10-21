#include "common.h"

extern "C" {

u32 textHolderSetDefault(void);

/* Returns bit 1 of textHolderSetDefault's result (0 or 1). */
u32 FUN_002fd454(void)
{
    u32 value;

    value = textHolderSetDefault();
    return (value & 3) >> 1;
}

} /* extern "C" */
