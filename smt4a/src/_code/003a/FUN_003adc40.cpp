#include "shard/Shard003A.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

u8 FUN_003adc40(void)
{
    return gameFlagsGetBlock()->unk1C == 1;
}

} /* extern "C" */
