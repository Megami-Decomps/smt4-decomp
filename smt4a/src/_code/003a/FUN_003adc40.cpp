#include "shard/Shard003A.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);

u8 FUN_003adc40(void)
{
    return FUN_00162e8c()->unk1C == 1;
}

} /* extern "C" */
