#include "common.h"

extern "C" {

s32 FUN_00151ecc(u32 value);

struct ArchiveView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 fileId;
};

/* Forwards the archive's file id (at 0x4) to FUN_00151ecc and returns its result. */
u32 FUN_002ac780(ArchiveView *archive)
{
    return FUN_00151ecc(archive->fileId);
}

} /* extern "C" */
