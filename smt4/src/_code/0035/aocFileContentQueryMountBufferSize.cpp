#include "addon/sys/aocFileContent.h"

extern "C" {
u32 FUN_00354f50(s32 *size, u32 title, u32 reserved, u32 mode,
             s32 directoryCount, s32 archiveCount, s32 readHeader);

/* Queries the content buffer size with the reserved title bits cleared. */
u32 aocFileContentQueryMountBufferSize(s32 *size, u32 title, u32 mode, s32 directoryCount, s32 archiveCount, s32 readHeader)
{
    return FUN_00354f50(size, title, 0, mode, directoryCount, archiveCount, readHeader);
}
} /* extern "C" */
