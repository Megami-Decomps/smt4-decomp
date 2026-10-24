/* NON_MATCHING: twin of smt4 FUN_002c2620 */
#include "common.h"

/* A node of the graphics context's id registry: an id and the data it names, chained in id order. */
struct GfxRegistryNode {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 data[5];
    /* 0x18 */ GfxRegistryNode *next;
};

/* The registry part of the graphics context: 32 id-ordered chains, indexed by the low bits of the id,
 * and the node found by the most recent lookup for each context slot. */
struct AsdGfxRegistry {
    /* 0x000 */ u8 unk000[0xA4];
    /* 0x0A4 */ GfxRegistryNode *chains[32];
    /* 0x124 */ s32 slot;
    /* 0x128 */ GfxRegistryNode *found[32];
};

extern "C" {
extern AsdGfxRegistry g_asdGfxContext;
extern void *(*g_gfxAllocateCallback)(u32 heap, u32 alignment, u32 flags, u32 size);

/* Looks up the node for `id` (creating it, in id order, when it is new) and makes it the current slot's node. */
void FUN_00161074(u32 id)
{
    AsdGfxRegistry *ctx = &g_asdGfxContext;
    GfxRegistryNode *node = ctx->chains[id & 0x1f];
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
        node = g_gfxAllocateCallback != NULL ? (GfxRegistryNode *)g_gfxAllocateCallback(0x10000, 0x100, 0, sizeof(GfxRegistryNode)) : NULL;
        node->data[0] = 0;
        node->data[1] = 0;
        node->data[2] = 0;
        node->data[3] = 0;
        node->data[4] = 0;
        node->next = NULL;
        node->id = id;
        GfxRegistryNode *head = ctx->chains[id & 0x1f];
        if (head == NULL) {
            ctx->chains[id & 0x1f] = node;
            return;
        }
        if (head->id > id) {
            node->next = head;
            ctx->chains[id & 0x1f] = node;
            return;
        }
        GfxRegistryNode *prev = head;
        GfxRegistryNode *next = prev->next;
        while (next != NULL) {
            if (next->id > id) {
                prev->next = node;
                node->next = next;
                if (next != NULL) {
                    return;
                }
                break;
            }
            prev = next;
            next = next->next;
        }
        prev->next = node;
    }
    ctx->found[ctx->slot] = node;
}
}
