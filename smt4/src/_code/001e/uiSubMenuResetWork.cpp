/* NON_MATCHING: the group-pointer address, main-bank pointer and subordinate loop counters use r3/ip opposite retail. */
#include "game/GameState.h"
#include "gfx/ModelGroups.h"
#include <string.h>

extern "C" ModelGroups *g_modelGroups;

/* Clears the model group entries and their associated model slots. */
extern "C" void uiSubMenuResetWork()
{
    g_gameState.map.unk14 = 0;
    ModelGroups *groups = g_modelGroups;
    groups->entries.unk00 = 0;
    groups->entries.mode = 0;
    groups->entries.unk0e = 0;
    groups->entries.active = 1;
    for (s32 index = 0; index < 64; ++index) {
        ModelGroupEntry *entry = &groups->entries.records[index];
        entry->active = 0;
        entry->changed = 0;
        entry->state = 0;
        entry->elapsed = 0;
        entry->delay = 0;
        entry->visible = 0;
        entry->position[0] = 0.0f;
        entry->position[1] = 0.0f;
        entry->position[2] = 0.0f;
        entry->unk20 = 0.0f;
        entry->transition = 0;
        entry->bank = 0;
        entry->unk34 = 0;
        entry->unk38 = 0;
        entry->unk3c = 0;
        memset(entry->triggerIds, 0, sizeof(entry->triggerIds));
        entry->slotIndex = MODEL_GROUP_UNASSIGNED;
    }
    for (s32 index = 0; index < 9; ++index)
        modelGroupResetSlot(&g_modelGroups->primary[index]);
    for (s32 index = 0; index < 3; ++index)
        modelGroupResetSlot(&g_modelGroups->secondary[index]);
}
