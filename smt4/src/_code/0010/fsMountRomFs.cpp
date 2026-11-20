#include "common.h"
#include "shard/W6_W6Match7_SoundInit.h"

extern "C" {

int fsMountRom(const char *archive, u32 maxFiles, u32 maxDirectories, void *buffer, u32 bufferSize, u32 useCache);

/* Mounts the ROM file system as archive "rom:", with its file and directory limits and work buffer. */
void fsMountRomFs(u32 maxFiles, u32 maxDirectories, void *buffer, u32 bufferSize, u32 useCache)
{
    fsMountRom("rom:", maxFiles, maxDirectories, buffer, bufferSize, useCache);
}

} /* extern "C" */
