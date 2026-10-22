#include "gfx/ModelGroups.h"

extern "C" {
extern ModelGroups* DAT_00581270;
void asdMdlManagerDestroy(AsdMdlObject* model);

// Tear down both model groups in reverse order, then clear all entry activation bits.
void gfxDestroyModelGroups(void)
{
    for (s32 i = 8; i >= 0; --i) {
        ModelGroupSlot* slot = &DAT_00581270->primary[i];
        if (slot->active != 0) {
            slot->active = 0;
            if (slot->model != NULL) {
                asdMdlManagerDestroy(slot->model);
                slot->model = NULL;
            }
        }
    }
    for (s32 i = 2; i >= 0; --i) {
        ModelGroupSlot* slot = &DAT_00581270->secondary[i];
        if (slot->active != 0) {
            slot->active = 0;
            if (slot->model != NULL) {
                asdMdlManagerDestroy(slot->model);
                slot->model = NULL;
            }
        }
    }
    ModelGroups* groups = DAT_00581270;
    for (s32 i = 0; i < 64; ++i) {
        groups->entries.records[i].active = 0;
    }
}
}
