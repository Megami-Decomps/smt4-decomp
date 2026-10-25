#ifndef SHARD_ROMFILEOPENSTATE_H
#define SHARD_ROMFILEOPENSTATE_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match1_PositionedStream.h"

struct RomOpenFile {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u32 unk10;
};

static __inline void romOpenFileInitialize(RomOpenFile *file)
{
    file->unk0c = 0;
    file->unk10 = 0;
    file->unk04 = 0;
    file->unk08 = 0;
}
struct RomFileOpenState {
    union {
        /* 0x00 */ u8 unk00[8];
        struct {
            /* 0x00 */ PositionedStreamVtable *vtable;
            /* 0x04 */ u32 unk04;
        } interface;
    };
    /* 0x08 */ RomOpenFile file;
};
typedef char RomFileOpenLayoutCheck[sizeof(RomOpenFile) == 0x14 &&
    offsetof(RomFileOpenState, file) == 8 && sizeof(RomFileOpenState) == 0x1c ? 1 : -1];

#endif
