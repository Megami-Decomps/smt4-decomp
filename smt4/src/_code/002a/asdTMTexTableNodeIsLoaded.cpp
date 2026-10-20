#include "common.h"

extern "C" {

typedef struct TexTableFile {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 flags;
} TexTableFile;

#define TEX_TABLE_FILE_LOADED 4

extern TexTableFile *asdTMTexTableCallFileB(u32 table, u32 node);

/* Whether the texture table node's file is loaded. */
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node)
{
    if (asdTMTexTableCallFileB(table, node)->flags & TEX_TABLE_FILE_LOADED) {
        return 1;
    }
    return 0;
}

}
