#include "common.h"
#include "addon/sys/aocFileContent.h"

extern "C" {
void FUN_0042a270(u32 id, u32 mode, u32 reserved, u32 first, u32 second, u32 third, u32 fourth);
/* Forwards parameters with the reserved argument cleared. */
void FUN_0042a410(u32 id, u32 mode, u32 first, u32 second, u32 third, u32 fourth)
{
    FUN_0042a270(id, mode, 0, first, second, third, fourth);
}
}
