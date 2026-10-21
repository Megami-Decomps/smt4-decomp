#include "common.h"

extern "C" {

extern u32 g_aocSystem;
extern u8 DAT_00618500[];
void aocRunType32(u32 system, const void *data, u32 value);
void FUN_0022655c(u32 value)
{
    aocRunType32(g_aocSystem, DAT_00618500, value);
}

} /* extern "C" */
