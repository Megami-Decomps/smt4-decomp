/* NON_MATCHING: the two list-position counters use exchanged registers; resource compare order matches. */
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "shard/FUN_003c2df0.h"

extern "C" {
void asdMemFree(void *block);
void effBlockCopyDataB(EffBlock *block, const void *data, s32 size, u16 tag);
void FUN_003c2df0(LinkedItems *items, LinkedItem *item, LinkedItem *replacement);
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
extern "C" void FUN_003c2df0(LinkedItems *items, LinkedItem *item, LinkedItem *replacement)
{
    if (!(item->reference.flags & 1)) {
        for (LinkedItem *other = items->head; other != NULL; other = other->next) {
            if ((other->reference.flags & 1) && other->resource == item->resource)
                FUN_003c2df0(items, other, replacement);
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
        effBlockCopyDataB(static_cast<EffBlock *>(item->resource), source->dataB, source->sizeB, source->tagB);
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
    FUN_003c2df0(items, promoted, promoted);
    for (LinkedItem *reference = findReference(items, replacement->resource); reference != NULL;
         reference = findReference(items, replacement->resource))
        FUN_003c2df0(items, reference, promoted);
    FUN_003c2df0(items, replacement, promoted);
}
