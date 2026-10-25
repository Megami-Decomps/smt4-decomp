/* NON_MATCHING: corrected completion values and u64 create-file size; retail retains separate completion exits and tests sign bits with ands, whereas the build merges exits. */
#include "shard/RomFileOpenState.h"
#include "sys/ProcessResult.h"
#include "nn/fs/ArchiveCreateFile.h"

extern "C" {
void *FUN_002e0e04(u32 id, u8 *buffer, s32 mode);
u32 FUN_001886bc();
s32 FUN_001883b0(RomOpenFile *file, u8 *buffer, s32 mode);

static s32 saveStreamOpen(RomOpenFile *file, u8 *buffer, s32 mode)
{
    romOpenFileInitialize(file);
    return FUN_001883b0(file, buffer, mode);
}

/* Create the selected save record and open its stream, recording every completion result. */
s32 FUN_00359608(RomFileOpenState *owner, u32 id, u32 size)
{
    u8 buffer[496];
    s32 result;
    if (FUN_002e0e04(id, buffer, 2) == NULL) {
        result = 0xE0E046BC;
        FUN_0013ebd8(result);
        return result;
    }
    FUN_001886bc();
    result = FUN_00158844(reinterpret_cast<const u16 *>(buffer), size);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_0013ebd8(result);
        return result;
    }
    result = saveStreamOpen(&owner->file, buffer, 2);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_0013ebd8(result);
        return result;
    }
    FUN_0013ebd8(0);
    return 0;
}
}
