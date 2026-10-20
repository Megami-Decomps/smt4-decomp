#include "shard/S2SoundLoader.h"

extern "C" {

extern u32 FUN_00194f9c(SoundArchive *archive);

/* Forwards the loader's archive to FUN_00194f9c. */
u32 FUN_00194f94(SoundLoader *loader)
{
    return FUN_00194f9c(loader->archive);
}

} /* extern "C" */
