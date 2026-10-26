#include "common.h"
#include "code/Code0016.h"

extern "C" {
u32 FUN_001bcfb4(u32 first, u32 second, u32 third, u32 fourth,
                 u32 fifth, u32 mode);

u32 FUN_00168750(u32 first, u32 second, u32 third, u32 fourth,
                 u32 fifth)
{
    return FUN_001bcfb4(first, second, third, fourth, fifth, 4);
}
}
