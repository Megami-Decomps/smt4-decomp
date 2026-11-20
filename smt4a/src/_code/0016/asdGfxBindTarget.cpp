#include "AsdSDK/Source/Gfx/AsdGfxContext.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern void *(*g_gfxAllocateCallback)(u32 heap, u32 alignment, u32 flags, u32 size); /* the engine's allocator */

/* Looks up the display target `id` (registering an empty one, in id order, when it is new) and
 * makes it the active slot's target; id 0 clears the slot. */
void asdGfxBindTarget(u32 id)
{
    AsdGfxContext *context = &g_asdGfxContext;
    AsdGfxTarget *node = context->targetChains[id % ASD_GFX_TARGET_CHAINS];
    if (node != NULL) {
        u32 nodeId;
        do {
            nodeId = node->id;
            if (nodeId != id) {
                node = node->next;
            }
        } while (nodeId != id && node != NULL);
    }
    if (id != 0 && node == NULL) {
        node = g_gfxAllocateCallback != NULL ? (AsdGfxTarget *)g_gfxAllocateCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, sizeof(AsdGfxTarget)) : NULL;
        node->pixels = NULL;
        node->format = 0;
        node->width = 0;
        node->height = 0;
        node->heap = 0;
        node->next = NULL;
        node->id = id;
        AsdGfxTarget *head = context->targetChains[id % ASD_GFX_TARGET_CHAINS];
        if (head == NULL) {
            context->targetChains[id % ASD_GFX_TARGET_CHAINS] = node;
        } else if (head->id > id) {
            node->next = head;
            context->targetChains[id % ASD_GFX_TARGET_CHAINS] = node;
        } else {
            AsdGfxTarget *prev = head;
            AsdGfxTarget *next = prev->next;
            while (next != NULL) {
                if (next->id > id) {
                    prev->next = node;
                    node->next = next;
                    break;
                }
                prev = next;
                next = next->next;
            }
            if (next == NULL)
                prev->next = node;
        }
    }
    context->targets[context->activeTarget] = node;
}
} /* extern "C" */
