/* NON_MATCHING: only the two findReference walks after the index compare differ: retail keeps the resource in r1 and the flags in r0 (r0/r2 in the second walk), the build exchanges them. */
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"

extern "C" {
void asdMemFree(void *block);
void effBlockCopyDataB(EffBlock *block, const void *data, s32 size, u16 tag);
void linkedItemsRedirectToReplacement(LinkedItems *items, LinkedItem *item, LinkedItem *replacement);
}

// Position of `item` in the list (0 when it is not linked).
static u32 linkedIndexOf(LinkedItems *items, LinkedItem *item)
{
    LinkedItem *current = items->head;
    u32 index = 0;
    while (current != NULL) {
        if (current == item)
            return index;
        index++;
        current = current->next;
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
extern "C" void linkedItemsRedirectToReplacement(LinkedItems *items, LinkedItem *item, LinkedItem *replacement)
{
    if (!(item->reference.flags & 1)) {
        for (LinkedItem *other = items->head; other != NULL; other = other->next) {
            if ((other->reference.flags & 1) && other->resource == item->resource)
                linkedItemsRedirectToReplacement(items, other, replacement);
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
    linkedItemsRedirectToReplacement(items, promoted, promoted);
    for (LinkedItem *reference = findReference(items, replacement->resource); reference != NULL;
         reference = findReference(items, replacement->resource))
        linkedItemsRedirectToReplacement(items, reference, promoted);
    linkedItemsRedirectToReplacement(items, replacement, promoted);
}
