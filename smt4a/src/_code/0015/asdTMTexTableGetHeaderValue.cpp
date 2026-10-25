#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
} Entry;

Entry *asdTMTexTableGetNode(s32 tableIndex, s32 nodeIndex);

/* Returns the word at 0x8 of the entry asdTMTexTableGetNode returns. */
u32 asdTMTexTableGetHeaderValue(u32 table, u32 node)
{
    Entry *entry = asdTMTexTableGetNode(table, node);
    return entry->value;
}

} /* extern "C" */
