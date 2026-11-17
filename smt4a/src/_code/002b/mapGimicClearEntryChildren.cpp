/* Calls ptrListRemoveClearOwner for every slot (last to first) whose entry has a linked child. */
#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"

extern "C" {

void mapGimicClearEntryChildren(void)
{
    s32 i;

    for (i = 34; i >= 0; i--) {
        MoriModelContent *entry = g_mapGimic->entries[i].obj;

        if (entry != NULL && entry->body != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, entry->body);
        }
    }
}

}
