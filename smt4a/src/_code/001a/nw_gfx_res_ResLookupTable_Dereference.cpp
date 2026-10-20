#include "common.h"

extern "C" {

#define RES_TYPE_NONE 0x80000000
#define RES_TYPE_RELATIVE 0x40000000

typedef struct ResRef {
    /* 0x00 */ s32 offset;     /* from this field to the referenced data; 0 = null */
} ResRef;

typedef struct ResEntry {
    /* 0x00 */ u32 type;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ ResRef ref;
} ResEntry;

/* Resolves a lookup-table slot: returns the entry itself for the "none" type, the data its relative reference points to for the relative type, else NULL. */
ResEntry *nw_gfx_res_ResLookupTable_Dereference(ResEntry **slot)
{
    ResEntry *entry = *slot;

    if (entry->type != RES_TYPE_NONE) {
        if (entry->type == RES_TYPE_RELATIVE) {
            ResRef *ref = &entry->ref;

            if (ref->offset != 0) {
                return (ResEntry *)((u8 *)ref + ref->offset);
            }
        }
        entry = NULL;
    }
    return entry;
}

} /* extern "C" */
