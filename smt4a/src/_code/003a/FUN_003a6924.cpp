#include "common.h"

extern "C" {
s32 getByteTableAValue(void);
void byteTableASetValue3(s32 enabled);

/* Script command: sets value 3 of byte table A when its current value is non-zero. */
s32 FUN_003a6924(void)
{
    if (getByteTableAValue() != 0) {
        byteTableASetValue3(1);
    }
    return 1;
}
}
