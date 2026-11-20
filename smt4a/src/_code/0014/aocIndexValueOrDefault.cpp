#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "addon/AocSystemA.h"


extern "C" {
/* Reads or updates the requested state. */
extern u32 DAT_0057f7d4[];
s32 aocIndexedTableFindImpl(void *system, u32 index);
u32 aocIndexValueOrDefault(u32 index)
{
    s32 result = aocIndexedTableFindImpl(g_aocSystem, index);
    if (result == 0) {
        return DAT_0057f7d4[index];
    }
    return result;
}
}
