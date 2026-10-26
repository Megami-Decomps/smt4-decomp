#include "common.h"
#include "code/Code0031_Smt4a.h"

extern "C" {

#define BINF_MAGIC 0x4e494246   /* "FBIN" */

typedef struct BinFile {
    /* 0x0 */ u32 magic;
    /* 0x4 */ s32 value;
} BinFile;

/* Returns the value word of a binary file whose magic is "FBIN"; 0 for NULL or any other magic. */
s32 binFileGetValue(BinFile *file)
{
    if (file == NULL) {
        return 0;
    }
    return file->magic == BINF_MAGIC ? file->value : 0;
}

} /* extern "C" */
