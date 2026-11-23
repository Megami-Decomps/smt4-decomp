/* NON_MATCHING: retail copies the flags and the word at 0x08 through r1; the build uses r0. */
#include "AsdSDK/AsdDebug.h"
#include "shard/S1ModelEffect.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

extern const char DAT_00526044[]; /* ...\Model\MoriModelEffect.cpp: __FILE__ */


/* Collect the table's entries whose id is the model and which are not flagged, copying each into a
 * new entry of this model's list. */
void modelEffectsBuildListForModel(ModelEffects *effects, u32 modelId)
{
    ModelEffectTable *table = effects->table;
    ModelEffectList *list = &effects->list;
    s32 i;

    list->count = 0;
    for (i = 0; i < table->count; i++) {
        ModelEffectEntry *entry = table->entries[i];

        if (!(entry->flags & 1) && entry->id == modelId) {
            list->count++;
        }
    }
    if (list->count == 0) {
        list->items = NULL;
        return;
    }

    asdDebugTrace(DAT_00526044, 234);
    list->items = (ModelEffectEntry **)asdMemoryAllocTracked(0x100, 0x100, 0, list->count * 4, 1);

    s32 n = 0;
    for (i = 0; i < table->count; i++) {
        ModelEffectEntry *source = table->entries[i];

        if (!(source->flags & 1) && source->id == modelId) {
            ModelEffectEntry *memory = static_cast<ModelEffectEntry *>(asdMemoryAllocTraced(
                sizeof(ModelEffectEntry), DAT_00526044, 240));
            if (memory != NULL) {
                memory->id = -1;
                memory->flags = 0;
                memory->unk08 = 0;
                memory->unk0C = NULL;
            }
            ModelEffectEntry *copy = memory;
            modelEffectCopyEntry(copy, source);
            list->items[n++] = copy;
        }
    }
}

} /* extern "C" */
