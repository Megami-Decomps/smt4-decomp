/* NON_MATCHING: the last two clears use a pre-indexed store and a fresh zero in retail (str r5,[r4,#16]!; mov r0,#0; str r0,[r4,#12]); built stores r5 at 16 and 28. */
#include "common.h"

extern "C" {

typedef struct TexTableNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *texture;
    /* 0x0C */ void *buffer;
    /* 0x10 */ s32 size;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ s32 flags;
} TexTableNode;

extern TexTableNode *asdTMTexTableCallFileB(s32 table, s32 node);
extern void asdTextureRelease(void *texture);
extern void asdMemFree(void *block);

/* Frees the buffer and texture of a texture table node and clears it. */
void asdTMTexTableReleaseNode(s32 table, s32 node)
{
    TexTableNode *entry = asdTMTexTableCallFileB(table, node);

    if (entry != NULL) {
        if (entry->buffer != NULL) {
            asdMemFree(entry->buffer);
            entry->buffer = NULL;
        }
        if (entry->texture != NULL) {
            asdTextureRelease(entry->texture);
            entry->texture = NULL;
        }
        entry->size = 0;
        entry->flags = 0;
    }
}

} /* extern "C" */
