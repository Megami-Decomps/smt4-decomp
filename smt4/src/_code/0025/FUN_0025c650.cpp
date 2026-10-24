/* NON_MATCHING: only the two list-position counters differ: retail counts the replacement in r2 and the item in r1, the build uses r1 then r2 (the resource compare order now matches). */
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"

extern "C" {
void asdMemFree(void *block);
void effBlockSetBlobB(EffBlock *block, const void *data, s32 size, u16 tag);
void FUN_0025c650(LinkedItems *items, LinkedItem *item, LinkedItem *replacement);
}

// Position of `item` in the list (0 when it is not linked).
static u32 linkedIndexOf(LinkedItems *items, LinkedItem *item)
{
    u32 index = 0;
    for (LinkedItem *current = items->head; current != NULL; current = current->next) {
        if (current == item)
            return index;
        index++;
    }
    return 0;
}

// First item that was redirected to `resource`.
static LinkedItem *findReference(LinkedItems *items, void *resource)
{
    for (LinkedItem *item = items->head; item != NULL; item = item->next) {
        if ((item->reference.flags & 3) == 2 && item->reference.source == resource)
            return item;
    }
    return NULL;
}

// Redirect `item` to share `replacement`'s resource: items that referenced item's resource are moved first, item's own
// blob B is replaced by the replacement's, and any items already redirected to the replacement are promoted.
extern "C" void FUN_0025c650(LinkedItems *items, LinkedItem *item, LinkedItem *replacement)
{
    if (!(item->reference.flags & 1)) {
        for (LinkedItem *other = items->head; other != NULL; other = other->next) {
            if ((other->reference.flags & 1) && other->resource == item->resource)
                FUN_0025c650(items, other, replacement);
        }
    }
    if (item == replacement)
        return;
    if (!(item->reference.flags & 1)) {
        EffBlock *block = static_cast<EffBlock *>(item->resource);
        if (block->ownedB != NULL) {
            asdMemFree(block->ownedB);
            block->dataB = NULL;
            block->sizeB = 0;
            block->ownedB = NULL;
        }
        EffBlock *source = static_cast<EffBlock *>(replacement->resource);
        effBlockSetBlobB(static_cast<EffBlock *>(item->resource), source->dataB, source->sizeB, source->tagB);
    }
    item->reference.flags |= 2;
    item->reference.source = replacement->resource;

    u32 replacementIndex = linkedIndexOf(items, replacement);
    u32 itemIndex = linkedIndexOf(items, item);
    if (itemIndex >= replacementIndex)
        return;
    LinkedItem *promoted = findReference(items, replacement->resource);
    if (promoted == NULL)
        return;
    promoted->reference.flags &= ~2u;
    promoted->reference.source = NULL;
    FUN_0025c650(items, promoted, promoted);
    for (LinkedItem *reference = findReference(items, replacement->resource); reference != NULL;
         reference = findReference(items, replacement->resource))
        FUN_0025c650(items, reference, promoted);
    FUN_0025c650(items, replacement, promoted);
}
