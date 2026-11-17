/* NON_MATCHING: registry base/bucket and insertion traversal registers differ; newly inserted nodes now update the current slot as retail does. */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {
extern void *(*g_gfxAllocateCallback)(u32 heap, u32 alignment, u32 flags, u32 size);

/* Looks up the node for `id` (creating it, in id order, when it is new) and makes it the current slot's node. */
void FUN_00161074(u32 id)
{
    AsdGfxContext *ctx = &g_asdGfxContext;
    AsdGfxTarget *node = ctx->targetChains[id & 0x1f];
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
        node = g_gfxAllocateCallback != NULL ? (AsdGfxTarget *)g_gfxAllocateCallback(0x10000, 0x100, 0, sizeof(AsdGfxTarget)) : NULL;
        node->pixels = NULL;
        node->format = 0;
        node->width = 0;
        node->height = 0;
        node->heap = 0;
        node->next = NULL;
        node->id = id;
        AsdGfxTarget *head = ctx->targetChains[id & 0x1f];
        if (head == NULL) {
            ctx->targetChains[id & 0x1f] = node;
        } else if (head->id > id) {
            node->next = head;
            ctx->targetChains[id & 0x1f] = node;
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
    ctx->targets[ctx->activeTarget] = node;
}
}
