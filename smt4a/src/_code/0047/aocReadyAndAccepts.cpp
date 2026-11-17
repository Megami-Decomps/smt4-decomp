#include "common.h"
#include "addon/aocMain.h"
#include "addon/AocSystemA.h"

extern "C" {

/* True when the add-on content is ready and a package has a kind-0x38 record keyed `id`. */
u32 aocReadyAndAccepts(AocSystemA *system, u32 id)
{
    s32 result = objHasFlagBit16(g_aocMain);

    if (result != 0) {
        result = packageFindRecordByName(system, 0x38, id) != NULL;
    }
    return result;
}

} /* extern "C" */
