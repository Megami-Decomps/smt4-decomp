#include "common.h"

extern "C" {

int FUN_001532fc(u8 *manager, u32 value);

extern u8 DAT_004e6f14;

void FUN_0014f9b4(u32 value)
{
    FUN_001532fc(&DAT_004e6f14, value);
}

} /* extern "C" */
