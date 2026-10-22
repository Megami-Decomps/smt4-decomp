/* NON_MATCHING: Array addressing adds the slot-group base after the index multiplication rather than before it. */
#include "gfx/ModelGroups.h"

extern "C" {
extern ModelGroups *DAT_00581270;
void asdMdlManagerMarkDestroy(AsdMdlObject *model);

/* Marks active models in both groups for destruction and clears their pending flags. */
void FUN_00325af0(void)
{
    for (s32 i = 8; i >= 0; --i) {
        ModelGroupSlot *slot = &DAT_00581270->primary[i];
        AsdMdlObject *model = NULL;
        if (slot->active) {
            model = slot->model;
        }
        if (slot->active && model != NULL) {
            asdMdlManagerMarkDestroy(model);
            slot->pending = 0;
        }
    }
    for (s32 i = 2; i >= 0; --i) {
        ModelGroupSlot *slot = &DAT_00581270->secondary[i];
        AsdMdlObject *model = NULL;
        if (slot->active) {
            model = slot->model;
        }
        if (slot->active && model != NULL) {
            asdMdlManagerMarkDestroy(model);
            slot->pending = 0;
        }
    }
}
}
