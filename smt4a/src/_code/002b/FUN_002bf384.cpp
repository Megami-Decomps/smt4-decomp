/* NON_MATCHING: register allocation differs: retail keeps the magic in r4 and loads the size pairs with LDM into r5/r6; the build uses r5 and LDRD into r6/r7 (one more saved register). */
#include "common.h"

extern "C" {

#define FBIN_MAGIC 0x4E494246 /* "FBIN" */

/* A packed file archive: a header, then `count` files stored back to back. */
typedef struct FBinHeader {
    /* 0x00 */ u32 magic;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 headerSize; /* offset of the first file */
    /* 0x0C */ u32 sizes[1];   /* size of each file */
} FBinHeader;

static __inline u32 *fbinGetSizes(FBinHeader *bin)
{
    return bin->sizes;
}

static __inline u32 fbinGetHeaderSize(FBinHeader *bin)
{
    if (bin == NULL) {
        return 0;
    }
    return bin->magic == FBIN_MAGIC ? bin->headerSize : 0;
}

/* Returns file `index` of an FBIN archive; NULL when it isn't one, the archive itself for an index out of range. */
void *FUN_002bf384(FBinHeader *bin, u32 index)
{
    if (bin == NULL) {
        return NULL;
    }
    if (bin->magic != FBIN_MAGIC) {
        return NULL;
    }
    u32 *sizes = fbinGetSizes(bin);
    u32 offset = 0;
    if (sizes != NULL && index < bin->count) {
        u32 total = 0;
        for (u32 i = 0; i < index; i++) {
            total += sizes[i];
        }
        offset = total + fbinGetHeaderSize(bin);
    }
    return (u8 *)bin + offset;
}

} /* extern "C" */
