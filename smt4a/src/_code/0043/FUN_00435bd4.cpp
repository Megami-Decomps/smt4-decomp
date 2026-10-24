/* NON_MATCHING: readable rewrite from retail disassembly compiles (210 vs ~208 rows); the list node helpers are local stand-ins for an unrecovered intrusive list/pool container, so retail's inlined cleanup loops and register use differ */
#include "common.h"

// Doubly-linked node with a variant payload at +8 (sentinel nodes carry the pool pointer).
struct LinkNode {
    LinkNode* prev;         // 0x00
    LinkNode* next;         // 0x04
    u32 payload[1];         // 0x08: variant slot
};

// A list head: sentinel links plus the owning node pool (pool at +0x10 of the owner object).
struct LinkList {
    LinkNode* prev;         // 0x00
    LinkNode* next;         // 0x04
    void* pool;             // 0x08
};

// Owner of a LinkList: the list head lives at +8 and its node pool at +0x10.
struct ListOwner {
    u8 unk00[8];
    LinkNode head;          // 0x08 (payload unused)
    void* pool;             // 0x10
};

// Step cursor shared by the walkers: ids and the chain pointer.
struct StepCursor {
    u8 unk00[4];
    StepCursor* chain;      // 0x04
    u8 unk08[2];
    u16 minSteps;           // 0x0a
    u16 maxSteps;           // 0x0c
};

// Walker state (the caller's iterator holds a cursor at [0], a scratch list at [1] and the pool at [5]).
struct StepWalker {
    StepCursor* cursor;     // 0x00
    LinkList scratch;       // 0x04
    u8 unk10[4];
    void* pool;             // 0x14
};

extern "C" {

void FUN_004352b0(LinkNode** out, StepWalker* walker);
void FUN_004386a4(LinkList* list, LinkList* source, void* pool);
LinkNode* FUN_00438434(LinkList* list, u32* a, u32* b, u32* c);
void FUN_0043865c(LinkNode** out, LinkList* list, u32* key);
void* FUN_004387f0(void* pool, s32 count);
void FUN_004387bc(void* pool, LinkNode* node, s32 count);
void FUN_00515598(void);
void FUN_00515618(LinkNode** out, void* location);
void variantSetPlain(void* variant, u32* value);

// Frees every node of a scratch list and resets it to empty.
static void clearList(LinkList* list)
{
    if (list->pool == NULL) return;
    LinkNode* node = list->next;
    while (node != reinterpret_cast<LinkNode*>(list)) {
        LinkNode* following = node->next;
        FUN_004387bc(list->pool, node, 1);
        node = following;
    }
    list->pool = NULL;
    list->prev = reinterpret_cast<LinkNode*>(list);
    list->next = reinterpret_cast<LinkNode*>(list);
}

// Appends a node carrying `value` to the owner's list; returns false when the pool is exhausted.
static bool appendNode(ListOwner* owner, u32 value)
{
    LinkNode* node = static_cast<LinkNode*>(FUN_004387f0(owner->pool, 2));
    if (node == NULL) return false;
    if (node != reinterpret_cast<LinkNode*>(0xfffffff8)) FUN_00515598();
    node->prev = owner->head.prev;
    node->next = &owner->head;
    owner->head.prev = node;
    node->prev->next = node;
    u32 copy = value;
    variantSetPlain(node->payload, &copy);
    return true;
}

// Links the walked node `root` into the owner lists of the two endpoints (and the middle steps
// in between). Returns 0 on success, 2 when the lookup or an allocation fails.
u32 FUN_00435bd4(StepWalker* walker, u32* result, u32* startHandle, u32* endHandle)
{
    LinkNode* root;
    FUN_004352b0(&root, walker);
    if (root == NULL) return 2;

    ListOwner* owner = reinterpret_cast<ListOwner*>(*endHandle);
    for (u32 step = 1; step < walker->cursor->maxSteps; step++) {
        LinkList scratch;
        FUN_004386a4(&scratch, &walker->scratch, walker->pool);
        u32 zero = 0;
        u32 start = *startHandle;
        u32 end = *endHandle;
        if (FUN_00438434(&scratch, &zero, &start, &end) == NULL) {
            clearList(&scratch);
            return 2;
        }
        if (!appendNode(owner, zero)) {
            clearList(&scratch);
            return 2;
        }
        LinkNode* position[3];
        u32 key = *endHandle;
        FUN_0043865c(position, &scratch, &key);
        owner = *reinterpret_cast<ListOwner**>(reinterpret_cast<u8*>(position[0]) + 0xc);
        if (walker->cursor->minSteps <= step + 1) {
            if (!appendNode(owner, reinterpret_cast<u32>(root))) {
                clearList(&scratch);
                return 2;
            }
        }
        clearList(&scratch);
    }
    if (walker->cursor->minSteps == 0) {
        LinkNode* location;
        FUN_00515618(&location, reinterpret_cast<u8*>(*startHandle) + 8);
        if (location == NULL) return 2;
        u32 value = reinterpret_cast<u32>(root);
        variantSetPlain(location->payload, &value);
    }
    if (walker->cursor->minSteps < 2 && walker->cursor->maxSteps != 0) {
        LinkNode* location;
        FUN_00515618(&location, reinterpret_cast<u8*>(*endHandle) + 8);
        if (location == NULL) return 2;
        u32 value = reinterpret_cast<u32>(root);
        variantSetPlain(location->payload, &value);
    }
    *result = reinterpret_cast<u32>(root);
    walker->cursor = walker->cursor->chain;
    return 0;
}

} /* extern "C" */
