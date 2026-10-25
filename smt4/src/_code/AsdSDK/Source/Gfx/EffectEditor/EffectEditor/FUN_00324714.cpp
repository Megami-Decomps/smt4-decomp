/* NON_MATCHING: related-item argument registers, catalog-loop hoisting and count-update branches differ. */
#include "gfx/EffectEditorStorage.h"
extern "C" {
extern EffectSelectionContext DAT_0044f858;
extern EffectSelectionCatalogEntry *DAT_0044f4d4[13];


EffectSelectionItem *linkedFindItemByIndex(void *owner, s32 index);
EffectSelectionItem *FUN_002f3208(void *owner, EffectSelectionBlock *block);
EffectSelectionItem *nodeListFindByKey(void *owner, u32 key);
void FUN_0025c650(void *owner, EffectSelectionItem *item, EffectSelectionItem *previous);
void rt_memcpy_w144(void *destination, const void *source);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
EffectSelectionParts *FUN_00246854(EffectSelectionItem *item);
char *libc_strcpy(char *destination, const char *source);
void *resourceResolveHeaderPointer(EffectSelectionBlock *block);
void rt_memcpy(void *destination, const void *source, u32 size);
void effPartsSetData(EffectSelectionBlock *block, void *data, u32 size, u16 id);
void *effBlockCreateFromBlock(EffectSelectionBlock *block);
void effectEditorApplyHandlerState(void *instance);
u32 effEditorNodeListCount(void *owner);
void resourceQueueDeferredDestroy(void *resource, s32 mode);
}

namespace {
inline EffectSelectionTemplate *findTemplate(const EffectSelectionBlock *block)
{
    for (u16 group = 0; group < 13; ++group) {
        EffectSelectionCatalogEntry *entry = DAT_0044f4d4[group];
        if (entry != NULL) {
            for (; entry->parts != NULL; ++entry) {
                if (entry->parts->type == block->type && entry->parts->id == block->id)
                    return entry->object;
            }
        }
    }
    return NULL;
}
}
extern "C" u32 FUN_00324714()
{
    // Related-item metadata and the name tail extend beyond the shared item prefix.
    struct ItemView { EffectSelectionItem item; u32 related; u32 flags; char name[1]; };
    EffectSelectionItem *source = linkedFindItemByIndex(g_effectEditor.selection.list,
        g_effectEditor.selection.index + DAT_0044f858.index);
    EffectSelectionItem *copy = FUN_002f3208(g_effectEditor.selection.list, source->block);
    g_effectEditor.selection.item = copy;
    rt_memcpy_w144(copy, source);
    ItemView *sourceView = reinterpret_cast<ItemView *>(source);
    EffectSelectionItem *previous = source;
    if (sourceView->flags & 2)
        previous = nodeListFindByKey(g_effectEditor.selection.list, sourceView->related);
    FUN_0025c650(g_effectEditor.selection.list, copy, previous);
    __aeabi_memcpy4(&g_effectEditorSettings, copy, 0x90);
    __aeabi_memcpy4(&g_effectEditorSavedSnapshot, copy, 0x80);
    g_effectEditor.selection.block = copy->block;
    EffectSelectionParts *parts = FUN_00246854(copy);
    libc_strcpy(reinterpret_cast<ItemView *>(copy)->name, reinterpret_cast<const char *>(parts->unk00));
    if (parts->type != 0x1B)
        rt_memcpy(parts->data, resourceResolveHeaderPointer(g_effectEditor.selection.block), parts->size);
    if (parts->data != NULL)
        effPartsSetData(g_effectEditor.selection.block, parts->data, parts->size, parts->id);
    void *instance = effBlockCreateFromBlock(g_effectEditor.selection.block);
    effectEditorApplyHandlerState(instance);
    g_effectEditor.selection.instance = instance;
    g_effectEditor.selection.object = findTemplate(copy->block);
    g_effectEditor.selection.object->context = &DAT_0044f858;
    u32 count = effEditorNodeListCount(g_effectEditor.selection.list);
    if (count > 21) {
        g_effectEditor.selection.index = count - 21;
        DAT_0044f858.index = 20;
    } else {
        DAT_0044f858.index = count - 1;
        g_effectEditor.selection.index = 0;
    }
    g_effectEditor.unk4c = 0;
    g_effectEditor.unk50 = 0;
    g_effectEditor.active = 1;
    g_effectEditor.unk58 = 0;
    g_effectEditor.unk60 = 0;
    g_effectEditor.unk64 = 0;
    g_effectEditor.unk68 = 0;
    if (g_effectEditor.selection.resource != NULL) {
        resourceQueueDeferredDestroy(g_effectEditor.selection.resource, 3);
        g_effectEditor.selection.resource = NULL;
    }
    return 0x800000;
}
