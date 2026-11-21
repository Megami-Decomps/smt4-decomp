/* NON_MATCHING: retail keeps the source item in r2 for the default related item (moveq) and gives the catalog search other scratch registers (r1/r3/ip/r5 swapped). */
#include "ui/UiSpriteApi.h"
#include "gfx/EffectEditorStorage.h"
extern "C" {
extern EffectSelectionContext g_effectEditorState;
extern EffectSelectionCatalogEntry *DAT_0044f4d4[13];

EffectSelectionItem *linkedFindItemByIndex(void *owner, s32 index);
EffectSelectionItem *FUN_002f3208(void *owner, EffectSelectionBlock *block);
EffectSelectionItem *nodeListFindByKey(void *owner, u32 key);
void linkedItemsRedirectToReplacement(void *owner, EffectSelectionItem *item, EffectSelectionItem *previous);
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
inline EffectSelectionTemplate *findTemplate(EffectSelectionCatalogEntry *const *catalog, u16 groupCount, const EffectSelectionBlock *block)
{
    u16 type = block->type;
    u16 id = block->id;
    for (u16 group = 0; group < groupCount; ++group) {
        EffectSelectionCatalogEntry *entry = catalog[group];
        if (entry != NULL) {
            for (; entry->parts != NULL; ++entry) {
                if (entry->parts->type == type && entry->parts->id == id)
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
    s32 position = g_effectEditorState.index + g_effectEditor.index;
    EffectSelectionItem *source = linkedFindItemByIndex(g_effectEditor.list, position);
    EffectSelectionItem *copy = FUN_002f3208(g_effectEditor.list, source->block);
    g_effectEditor.item = copy;
    rt_memcpy_w144(copy, source);
    ItemView *sourceView = reinterpret_cast<ItemView *>(source);
    EffectSelectionItem *previous = (sourceView->flags & 2) ? nodeListFindByKey(g_effectEditor.list, sourceView->related) : source;
    linkedItemsRedirectToReplacement(g_effectEditor.list, copy, previous);
    __aeabi_memcpy4(&g_effectEditorSettings, copy, 0x90);
    __aeabi_memcpy4(&g_effectEditorSavedSnapshot, copy, 0x80);
    g_effectEditor.block = copy->block;
    EffectSelectionParts *parts = FUN_00246854(copy);
    libc_strcpy(reinterpret_cast<ItemView *>(copy)->name, reinterpret_cast<const char *>(parts->unk00));
    if (parts->type != 0x1B)
        rt_memcpy(parts->data, resourceResolveHeaderPointer(g_effectEditor.block), parts->size);
    if (parts->data != NULL)
        effPartsSetData(g_effectEditor.block, parts->data, parts->size, parts->id);
    void *instance = effBlockCreateFromBlock(g_effectEditor.block);
    effectEditorApplyHandlerState(instance);
    g_effectEditor.instance = instance;
    g_effectEditor.object = findTemplate(DAT_0044f4d4, 13, copy->block);
    g_effectEditor.object->context = &g_effectEditorState;
    u32 count = effEditorNodeListCount(g_effectEditor.list);
    if (count > 21) {
        g_effectEditor.index = count - 21;
        g_effectEditorState.index = 20;
    } else {
        g_effectEditor.index = 0;
        g_effectEditorState.index = count - 1;
    }
    g_effectEditor.unk4c = 0;
    g_effectEditor.unk50 = 0;
    g_effectEditor.active = 1;
    g_effectEditor.unk58 = 0;
    g_effectEditor.unk60 = 0;
    g_effectEditor.unk64 = 0;
    g_effectEditor.unk68 = 0;
    if (g_effectEditor.resource != NULL) {
        resourceQueueDeferredDestroy(g_effectEditor.resource, 3);
        g_effectEditor.resource = NULL;
    }
    return 0x800000;
}
