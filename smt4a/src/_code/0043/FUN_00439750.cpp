/* NON_MATCHING: The default profile spills forwarded arguments through VFP; retail retains them in general registers. */
#include "common.h"
extern "C" {
s32 FUN_00426204(void);
u32 FUN_00439a74(u32 id, u32 option,
    void* first, u32 firstSize, void* second, u32 secondSize,
    void* third, u32 thirdCount, void* fourth, u32 fourthCount,
    void* fifth, u32 fifthCount, void* sixth, u32 sixthCount,
    void* seventh, u32 seventhSize, u32* outputCount,
    u32 extraAddress, void* extraBuffer, u32 extraSize);

u32 FUN_00439750(u32 id, u32 option,
    void* first, u32 firstSize, void* second, u32 secondSize,
    void* third, u32 thirdCount, void* fourth, u32 fourthCount,
    void* fifth, u32 fifthCount, void* sixth, u32 sixthCount,
    void* seventh, u32 seventhSize, u32* outputCount,
    void* extraBuffer, u32 extraSize)
{
    if (FUN_00426204() == 0) {
        return 0xC8A0D018;
    }
    return FUN_00439a74(id, option, first, firstSize, second, secondSize,
        third, thirdCount, fourth, fourthCount, fifth, fifthCount,
        sixth, sixthCount, seventh, seventhSize, outputCount,
        (u32)extraBuffer, extraBuffer, extraSize);
}
}
