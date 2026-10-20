#include "common.h"

extern "C" {

void streamWriterPatchSizePrefix(void);

typedef struct Writer {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 result;
} Writer;

/* Patches the writer's size prefix and returns the word at 8. */
u32 streamWriterFinish(Writer *writer)
{
    streamWriterPatchSizePrefix();
    return writer->result;
}

} /* extern "C" */
