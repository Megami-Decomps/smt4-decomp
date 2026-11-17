#include "common.h"
#include "addon/AocSystemA.h"

extern "C" {

extern u32 g_aocMain;
extern s32 objHasFlagBit16(u32 main);

/* Whether add-on content is present and a package has a kind-0x1d record keyed `id`. */
u32 aocContentLookupSucceeds(AocSystemA *system, u32 id)
{
    if (objHasFlagBit16(g_aocMain) != 0) {
        return packageFindRecordByName(system, 0x1d, id) != NULL;
    }
    return 0;
}

} /* extern "C" */
