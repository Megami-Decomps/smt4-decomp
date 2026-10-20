#include "common.h"

extern "C" {

typedef struct TexNode {
    /* 0x00 */ u8 unk00[0x20];
} TexNode; /* 0x20 */

typedef struct TexFile {
    /* 0x00 */ TexNode *nodes;
} TexFile;

/* Returns the node of the texture file for `id` (ids are in thousands: node = id / 1000); NULL for a missing file. */
TexNode *asdTMTexFileGetNodeById(TexFile *file, s32 id)
{
    if (file == NULL) {
        return NULL;
    }
    return &file->nodes[id / 1000];
}

} /* extern "C" */
