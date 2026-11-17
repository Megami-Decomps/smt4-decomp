#include "common.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"

extern "C" {

/* Whether add-on content is present and a package has a kind-0x1d record keyed `id`. */
u32 aocContentLookupSucceeds(AocSystem *system, u32 id)
{
    if (objHasFlagBit16(g_aocMain) != 0) {
        return packageFindRecordByName(system, 0x1d, id) != NULL;
    }
    return 0;
}

} /* extern "C" */
