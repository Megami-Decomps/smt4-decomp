#include "common.h"
#include "shard/aocContentLookupSucceeds.h"

extern "C" {

extern u32 g_aocMain;
extern s32 objHasFlagBit16(u32 main);
extern s32 packageFindRecordByName(u32 id, u32 kind, u32 arg);

/* Whether add-on content is present and the content lookup for (id, arg) succeeds. */
u32 aocContentLookupSucceeds(u32 id, u32 arg)
{
    if (objHasFlagBit16(g_aocMain) != 0) {
        return packageFindRecordByName(id, 0x1d, arg) != 0;
    }
    return 0;
}

} /* extern "C" */
