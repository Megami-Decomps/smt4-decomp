/* NON_MATCHING: parameters and the size lookup match; in the size lookup retail puts the width in r2 and the height in r0 (storing the width alone, then height and `first` with stm), where this build uses r0/r1 and stores the three words with one stm. */
#include "gfx/SpriteVertexColors.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_00492c98(u32 mode, u32 group, u32 id, s32 x, s32 y,
                  s32 width, s32 height, u32 first, u32 second);

void FUN_0049325c(u32 id, s32 x, s32 y, u32 first, u32 second)
{
    u32 width;
    u32 height;
    asdTMTexTableEntrySize(0x13, id, &width, &height);
    FUN_00492c98(2, 0x13, id, x, y, width, height, first, second);
}
}
