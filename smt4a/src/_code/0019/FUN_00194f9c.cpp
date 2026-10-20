#include "shard/S2SoundLoader.h"

extern "C" {

extern u32 *FUN_001a8d1c(void *fileTable);

/* The first word of the archive's file table entry. */
u32 FUN_00194f9c(SoundArchive *archive)
{
    return *FUN_001a8d1c(archive->fileTable);
}

} /* extern "C" */
