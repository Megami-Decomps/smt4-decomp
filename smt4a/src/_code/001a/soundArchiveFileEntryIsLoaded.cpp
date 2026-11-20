/* NON_MATCHING: retail has a linker-inlined `nop` (empty callee) between the two loads; the loads and tail call match. */
#include "common.h"

extern "C" {

s32 FUN_001b3950(u32 value);

struct SoundArchiveEntry {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 fileId;
};

struct SoundArchiveView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ const SoundArchiveEntry *entry;
};

/* Forwards the archive entry's file id to FUN_001b3950 and returns its result. */
s32 soundArchiveFileEntryIsLoaded(SoundArchiveView *archive)
{
    return FUN_001b3950(archive->entry->fileId);
}

} /* extern "C" */
