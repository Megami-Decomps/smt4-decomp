/* Matches with --cpu=5TE (requested): this unit was built for the older core. */
#include "common.h"

extern "C" {

/* Element-size source object. */
typedef struct {
    u8 unk00[8];
    s32 stride;         /* 0x08 */
} Layout;

typedef struct {
    Layout *layout;     /* 0x00 */
    u8 unk04[0x14];
    s32 index;          /* 0x18 */
} Indexer;

/* Offset of element `index` plus `base`: index * layout stride + base. */
s32 indexerGetElementOffset(Indexer *indexer, s32 base)
{
    return indexer->index * indexer->layout->stride + base;
}

} /* extern "C" */
