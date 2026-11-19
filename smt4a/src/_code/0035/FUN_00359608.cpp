/* NON_MATCHING: retail materialises FUN_00158844's zero high size word in r5 before FUN_001886bc (one more saved register, a 496-byte frame) and later clears the stream with a fresh zero in r0, passing the stream address through r3; the build uses `mov r3, #0` at the call and pads the frame to 500. Same in IV's FUN_002e1380. */
#include "shard/RomFileOpenState.h"
#include "sys/ProcessResult.h"
#include "nn/fs/ArchiveCreateFile.h"
#include "nn/Result.h"

extern "C" {
void *pathBuildWide(u32 id, u8 *buffer, s32 mode);
u32 FUN_001886bc();

static s32 saveStreamOpen(RomOpenFile *file, u8 *buffer, s32 mode)
{
    romOpenFileInitialize(file);
    return archivePathDeviceOpen(&file->unk00, reinterpret_cast<const u16 *>(buffer), mode);
}

/* Records `result` as the process result and hands it back. */
static __inline nn::Result fileRecordResult(nn::Result result)
{
    processResultSetValue(result);
    return result;
}

/* Create the selected save record and open its stream, recording every completion result. */
nn::Result FUN_00359608(RomFileOpenState *owner, u32 id, u32 size)
{
    u8 buffer[496];
    nn::Result result;
    if (pathBuildWide(id, buffer, 2) == NULL) {
        result = 0xE0E046BC;
        processResultSetValue(result);
        return result;
    }
    FUN_001886bc();
    result = FUN_00158844(reinterpret_cast<const u16 *>(buffer), size);
    if ((s32)(result & 0x80000000) < 0) {
        processResultSetValue(result);
        return result;
    }
    result = saveStreamOpen(&owner->file, buffer, 2);
    if ((s32)(result & 0x80000000) < 0) {
        processResultSetValue(result);
        return result;
    }
    return fileRecordResult(0);
}
}
