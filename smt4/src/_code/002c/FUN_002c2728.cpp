/* NON_MATCHING: head, middle and tail insertion paths now follow retail (sorted insert helper returning false on an id collision); the inlined helper costs two extra saved registers and a different loop/constant layout (retail keeps count in r9, buckets base in r5). */
#include "gfx/HandleRegistry.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

// Buckets occupy the graphics context's opaque region after its active buffer.
struct RegistryView { u8 prefix[0xA4]; GfxHandleNode *buckets[32]; };
typedef char RegistryViewOffset[offsetof(RegistryView, buckets) == 0xA4 ? 1 : -1];

// Links the node into its id's bucket in id order; false when the id is already taken.
static __inline bool handleInsertSorted(RegistryView *registry, GfxHandleNode *node, u32 id, u32 *handle)
{
    GfxHandleNode *head = registry->buckets[id & 31];
    if (head == NULL) {
        *handle = id;
        node->id = id;
        node->next = NULL;
        registry->buckets[id & 31] = node;
        return true;
    }
    if (head->id == id)
        return false;
    if (head->id > id) {
        *handle = id;
        node->id = id;
        node->next = registry->buckets[id & 31];
        registry->buckets[id & 31] = node;
        return true;
    }
    GfxHandleNode *previous = head;
    GfxHandleNode *current = head->next;
    while (current != NULL) {
        if (current->id == id)
            return false;
        if (current->id > id) {
            *handle = id;
            node->id = id;
            previous->next = node;
            node->next = current;
            return true;
        }
        previous = current;
        current = current->next;
    }
    previous->next = node;
    node->id = id;
    node->next = NULL;
    *handle = id;
    return true;
}

extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern GfxHandleAllocator g_gfxAllocateCallback;

// Allocate fresh handle records, keeping each hash bucket sorted by id.
void FUN_002c2728(s32 count, u32 *handles)
{
    RegistryView *registry = (RegistryView *)&g_asdGfxContext;
    for (s32 index = 0; index < count; ++index) {
        GfxHandleNode *node = NULL;
        if (g_gfxAllocateCallback.allocate != NULL)
            node = (GfxHandleNode *)g_gfxAllocateCallback.allocate(0x10000, 256, 0, sizeof(GfxHandleNode));
        node->id = 0;
        node->data[0] = 0;
        node->data[1] = 0;
        node->data[2] = 0;
        node->data[3] = 0;
        node->data[4] = 0;
        node->next = NULL;
        u32 id = g_gfxAllocateCallback.nextId;
        while (!handleInsertSorted(registry, node, id, &handles[index]))
            ++id;
        g_gfxAllocateCallback.nextId = id + 1;
    }
}
}
