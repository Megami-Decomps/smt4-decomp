#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"


extern "C" {
/* Reads or updates the requested state. */
extern AocSystemA *g_aocSystem;
extern u32 DAT_0057f7d4[];
s32 FUN_0017628c(void *system, u32 index);
u32 FUN_0014bd84(u32 index)
{
    s32 result = FUN_0017628c(g_aocSystem, index);
    if (result == 0) {
        return DAT_0057f7d4[index];
    }
    return result;
}
}
