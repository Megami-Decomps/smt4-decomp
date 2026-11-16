#include "common.h"
#include "code/Code0016.h"

extern "C" {
u32 asdLoadFileAsyncByPath(u32 first, u32 second, u32 third, u32 fourth,
                 u32 fifth, u32 mode);

u32 asdLoadFileAsyncDefault(u32 first, u32 second, u32 third, u32 fourth,
                 u32 fifth)
{
    return asdLoadFileAsyncByPath(first, second, third, fourth, fifth, 4);
}
}
