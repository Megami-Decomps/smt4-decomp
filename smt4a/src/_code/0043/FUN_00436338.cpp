/* NON_MATCHING: stack layout and calls match; only the callee-saved register numbering differs (retail keeps outId in r5 and the source in r6, the build the reverse) and the id is loaded before the node offset add. */
#include "common.h"

/* A linked cursor: its second word is the next entry. */
struct ListEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ListEntry *next;
};

/* The collection being filled (the part this function touches). */
struct EntryCollection {
    /* 0x00 */ ListEntry *cursor;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ s32 key;
};

/* A source whose first word points at the allocation context. */
struct EntrySource {
    /* 0x00 */ u32 context;
};

extern "C" {

void FUN_004352b0(s32 *id, EntryCollection *collection);
void FUN_00515618(s32 *node, u32 context);
void variantSetWordB(s32 slot, s32 value[2], s32 key);
s32 FUN_00435318(EntryCollection *collection, s32 payload);
s32 FUN_00437e98(s32 payload);

// Adds an entry to the collection: reserves an id and a node, stores the id in the node and links
// the node's payload in; on success the id is passed back. Returns 0 or an error code (2 when no
// id or node is available).
s32 FUN_00436338(EntryCollection *collection, s32 *outId, EntrySource *source)
{
    s32 value[2];
    s32 id;
    s32 node;
    FUN_004352b0(&id, collection);
    if (id == 0) {
        return 2;
    }
    FUN_00515618(&node, source->context + 8);
    if (node == 0) {
        return 2;
    }
    value[0] = id;
    variantSetWordB(node + 8, value, collection->key);
    collection->cursor = collection->cursor->next;
    s32 result = FUN_00435318(collection, node + 0x10);
    if (result != 0) {
        return result;
    }
    if (FUN_00437e98(node + 0x10) == 0) {
        return 2;
    }
    *outId = id;
    collection->cursor = collection->cursor->next;
    return 0;
}

}
