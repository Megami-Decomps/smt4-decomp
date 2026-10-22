/* NON_MATCHING: Slot pointer, loop index, zero value and dirty-state pointer use different registers; instructions otherwise match. */
#include "gfx/TextureStorage.h"

extern "C" {
extern TextureStorageList *DAT_004652a8;
extern u32 *g_textureBindingState;

/* Removes a storage binding from all nodes and dirties the active node's texture state. */
void gfxTextureStorageUnbind(TextureStorage *storage)
{
    if (storage == NULL) {
        return;
    }
    TextureStorageList *list = DAT_004652a8;
    for (TextureStorageNode *node = list->head; node != NULL; node = node->next) {
        for (s32 i = 0; i < 2; ++i) {
            TextureStorageSlot *slot = &node->slots[i];
            if (slot->storage == storage) {
                if (list->current == node) {
                    *g_textureBindingState |= 1;
                }
                slot->storage = NULL;
                slot->unk00 = 0;
                slot->unk04 = 0;
                slot->unk08 = 0;
            }
        }
    }
}
}
