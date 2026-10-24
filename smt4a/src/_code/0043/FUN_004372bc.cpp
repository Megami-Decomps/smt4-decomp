/* NON_MATCHING: retail keeps the graph pointer's address in the stack frame (push {r0, r1, ...}) and reloads it, holds the id as u16 and the list sentinel in r7/fp, and lays the entry scan out as a separate loop; this build fuses the scan and keeps everything in registers (about 270 diff lines). */
#include "common.h"

/* Doubly linked circular list link; every node and list head starts with one. */
struct ListLink {
    ListLink *prev;
    ListLink *next;
};

/* The target a node refers to: `slot` is the bit/byte it owns in the occupancy mask. */
struct NodeTarget {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 slot;
};

struct NodeRef {
    NodeTarget *target;
};

/* A node of the graph's entry list; kind 2 nodes are single entries, kind 3 nodes own a list of children. */
struct EntryNode {
    /* 0x00 */ ListLink link;
    /* 0x08 */ NodeRef ref;
    /* 0x0C */ u8 kind;
    /* 0x0D */ u8 unk0D;
    /* 0x0E */ u16 id;
    /* 0x10 */ ListLink children;
    /* 0x18 */ u8 unk18[8];
};
typedef char EntryNodeSizeCheck[sizeof(EntryNode) == 0x20 ? 1 : -1];

struct EntryGraph {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ListLink merged; /* the merged entries are appended here */
    /* 0x10 */ void *nodePool;
    /* 0x14 */ ListLink entries; /* sentinel of the entry list */
    /* 0x1C */ void *releasePool;
};

struct MaskBuilder {
    /* 0x00 */ void *pool; /* block allocator the mask comes from */
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ u32 size; /* mask size in bytes */
};

extern "C" {
void *FUN_004387f0(void *pool, u32 units);
void FUN_004387bc(void *pool, void *block, u32 units);
void FUN_00436d04(MaskBuilder *builder, u8 *mask);
void FUN_00436c10(u32 *result, MaskBuilder *builder, u8 *mask);
s32 FUN_00437bc0(ListLink *children, s16 id);
s32 FUN_005228c8(NodeRef *ref, s16 id);
void FUN_005155bc(NodeRef *ref);
void FUN_005153cc(NodeRef *ref);
void variantSetHalfA(NodeRef *ref, u32 *value, s16 id);

static __inline void unlinkNode(EntryNode *node)
{
    node->link.prev->next = node->link.next;
    node->link.next->prev = node->link.prev;
}

/* Merges every kind 2 entry of the graph with the entries (and child lists) that share its id: the targets they use are
 * collected in an occupancy mask, the merged nodes are released and a single replacement node is appended to the merged
 * list. Returns 0 when an allocation or a child merge fails. */
u32 FUN_004372bc(MaskBuilder *builder, EntryGraph **graphRef)
{
    EntryGraph *graph = *graphRef;
    ListLink *end = &graph->entries;
    EntryNode *entry = (EntryNode *)graph->entries.next;
    for (;;) {
        while ((ListLink *)entry != end && entry->kind != 2) {
            entry = (EntryNode *)entry->link.next;
        }
        if ((ListLink *)entry == end) {
            return 1;
        }
        u32 units = (builder->size + 15) >> 4;
        s16 id = entry->id;
        u8 *mask = (u8 *)FUN_004387f0(builder->pool, units);
        if (mask == NULL) {
            return 0;
        }
        for (u32 i = 0; i < builder->size; i++) {
            mask[i] = 0;
        }
        mask[entry->ref.target->slot] = 1;
        EntryNode *other = (EntryNode *)end->next;
        while ((ListLink *)other != end) {
            if (other == entry) {
                other = (EntryNode *)other->link.next;
                continue;
            }
            if (other->kind == 2) {
                if (other->id != id) {
                    other = (EntryNode *)other->link.next;
                    continue;
                }
                mask[other->ref.target->slot] = 1;
                EntryNode *next = (EntryNode *)other->link.next;
                unlinkNode(other);
                FUN_005155bc(&other->ref);
                FUN_004387bc(graph->releasePool, other, 2);
                other = next;
            } else if (other->kind == 3 && FUN_005228c8(&other->ref, id)) {
                if (!FUN_00437bc0(&other->children, id)) {
                    return 0;
                }
                mask[other->ref.target->slot] = 1;
                if (other->children.next == &other->children) {
                    EntryNode *next = (EntryNode *)other->link.next;
                    unlinkNode(other);
                    FUN_005155bc(&other->ref);
                    FUN_004387bc(graph->releasePool, other, 2);
                    other = next;
                } else {
                    other = (EntryNode *)other->link.next;
                }
            } else {
                other = (EntryNode *)other->link.next;
            }
        }
        FUN_00436d04(builder, mask);
        u32 result;
        FUN_00436c10(&result, builder, mask);
        if (result == 0) {
            return 0;
        }
        FUN_004387bc(builder->pool, mask, units);
        ListLink *merged = &graph->merged;
        EntryNode *created = (EntryNode *)FUN_004387f0(graph->nodePool, 2);
        if (created == NULL) {
            return 0;
        }
        if (&created->ref != NULL) {
            FUN_005153cc(&created->ref);
        }
        created->link.prev = merged->prev;
        created->link.next = merged;
        merged->prev = &created->link;
        created->link.prev->next = &created->link;
        u32 value = result;
        variantSetHalfA(&created->ref, &value, id);
        EntryNode *next = (EntryNode *)entry->link.next;
        unlinkNode(entry);
        FUN_005155bc(&entry->ref);
        FUN_004387bc(graph->releasePool, entry, 2);
        entry = next;
    }
}
}
