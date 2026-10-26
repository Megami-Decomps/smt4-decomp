#include "common.h"
#include "code/Code002b.h"

extern "C" {
u32 asdLoadFileAsync(u32 first, u32 second, u32 third, u32 fourth,
                 u32 fifth, u32 mode);

u32 FUN_002b6480(u32 first, u32 second, u32 third, u32 fourth,
                 u32 fifth)
{
    return asdLoadFileAsync(first, second, third, fourth, fifth, 4);
}
}
