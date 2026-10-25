#include "gfx/ModelGroups.h"

extern "C" {
extern ModelGroups *DAT_00581270;
void asdMdlManagerMarkDestroy(AsdMdlObject *model);

/* Marks active models in both groups for destruction and clears their pending flags. */
void modelGroupsMarkActiveDestroy(void)
{
    for (s32 i = 8; i >= 0; --i) {
        ModelGroups *groups = DAT_00581270;
        ModelGroupSlot *slot = &groups->primary[i];
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
        ModelGroups *groups = DAT_00581270;
        ModelGroupSlot *slot = &groups->secondary[i];
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
