#ifndef ADDON_SYS_AOCFILECONTENT_H
#define ADDON_SYS_AOCFILECONTENT_H

#include "common.h"

extern "C" {
u32 aocFileContentQueryMountBufferSize(s32 *size, u32 title, u32 mode, s32 directoryCount, s32 archiveCount, s32 readHeader);
}

#endif
