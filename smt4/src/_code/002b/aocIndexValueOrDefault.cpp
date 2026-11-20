#include "addon/aocMain.h"
#include "addon/AocSystem_Smt4.h"
#include "addon/AocSystem.h"


extern "C" {
/* Uses the indexed add-on value, falling back to the built-in table. */
extern u32 g_aocIndexValueTable[];
s32 dataTableFindKeyedPayload(void *system, u32 index);
u32 aocIndexValueOrDefault(u32 index)
{
    s32 result = dataTableFindKeyedPayload(g_aocSystem, index);
    if (result == 0) {
        return g_aocIndexValueTable[index];
    }
    return result;
}
}
