/* NON_MATCHING: editor index argument scheduling, catalog-loop bound materialization, and saved-register allocation differ from retail. */
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern EffectSelectionContext DAT_0059e9a8;
extern u8 DAT_00634bc0[];
extern u8 DAT_00634d20[];
extern EffectSelectionCatalogEntry *DAT_0059e624[13];
EffectSelectionItem *linkedFindItemByIndex(void *list, s32 index);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void *rt_memcpy(void *destination, const void *source, u32 size);
EffectSelectionParts *FUN_002b30e4(EffectSelectionItem *item);
void *resourceResolveHeaderPointer(EffectSelectionBlock *block);
void effPartSetData(EffectSelectionBlock *block, void *data, u32 size, u16 id);
void *FUN_00243c24(EffectSelectionBlock *block);
void effectEditorApplyHandlerState(void *instance);
void objectRegistryInsert(void *resource, s32 flags);
}

static __inline EffectSelectionTemplate *findEditorTemplate(const EffectSelectionBlock *block)
{
    u16 type = block->type;
    u16 id = block->id;
    for (u16 group = 0; group < 13; ++group) {
        EffectSelectionCatalogEntry *entry = DAT_0059e624[group];
        if (entry != NULL) {
            for (; entry->parts != NULL; ++entry) {
                if (entry->parts->type == type && entry->parts->id == id) {
                    return entry->object;
                }
            }
        }
    }
    return NULL;
}

// Activate the selected effect block, restore its editable data, and attach the matching editor template.
extern "C" u32 effectEditorActivateSelection()
{
    EffectSelectionItem *item = linkedFindItemByIndex(g_effectEditor.selection.list,
        g_effectEditor.selection.index + DAT_0059e9a8.index);
    g_effectEditor.selection.item = item;
    __aeabi_memcpy4(DAT_00634bc0, item, 0x90);
    __aeabi_memcpy4(DAT_00634d20, item, 0x80);
    g_effectEditor.selection.block = item->block;
    EffectSelectionParts *parts = FUN_002b30e4(item);
    if (parts->type != 0x1b) {
        void *data = resourceResolveHeaderPointer(g_effectEditor.selection.block);
        rt_memcpy(parts->data, data, parts->size);
    }
    if (parts->data != NULL) {
        effPartSetData(g_effectEditor.selection.block, parts->data, parts->size, parts->id);
    }
    void *instance = FUN_00243c24(g_effectEditor.selection.block);
    effectEditorApplyHandlerState(instance);
    g_effectEditor.selection.instance = instance;
    g_effectEditor.selection.object = findEditorTemplate(item->block);
    g_effectEditor.selection.object->context = &DAT_0059e9a8;
    g_effectEditor.unk4c = 0;
    g_effectEditor.unk50 = 0;
    g_effectEditor.active = 1;
    g_effectEditor.unk58 = 0;
    g_effectEditor.unk60 = 0;
    g_effectEditor.unk64 = 0;
    g_effectEditor.unk68 = 0;
    if (g_effectEditor.selection.resource != NULL) {
        objectRegistryInsert(g_effectEditor.selection.resource, 3);
        g_effectEditor.selection.resource = NULL;
    }
    return 0x800000;
}
