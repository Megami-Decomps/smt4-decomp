#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

void gxGetCommandListParameter(s32 parameter, s32 *value);
void nngxImportCmdlist(s32 commandList, void *data, u32 size);
void nngxGetError(void);

/* Imports a list's saved copy of its state, if it has one, into the bound command list
 * (what asdGxCommandListEnd does when it restores the copy). */
void asdGxCommandListReplayCopy(AsdGxCommandList *list)
{
    s32 commandList;

    if (list->entries[0].copy != NULL) {
        gxGetCommandListParameter(ASD_GX_CMDLIST_BINDING, &commandList);
        nngxImportCmdlist(commandList, list->entries[0].copy, list->entries[0].copySize);
        nngxGetError();
    }
}

} /* extern "C" */
