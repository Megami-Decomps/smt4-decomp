#ifndef SHARD_ROMFSPARENTLOOKUP_H
#define SHARD_ROMFSPARENTLOOKUP_H

#include "common.h"

struct RomFsArchive;
struct RomFsPathView {
    /* 0x00 */ const char *text;
    /* 0x04 */ u32 length;
};
struct RomFsParentLookup {
    /* 0x00 */ u32 directory;
    /* 0x04 */ RomFsPathView path;
};

#endif
