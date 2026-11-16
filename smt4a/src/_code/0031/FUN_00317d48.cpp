/* NON_MATCHING: retail materialises the zero (FUN_00158844's high size word, later the cleared file fields) once in r6 before FUN_001886bc, and schedules `mov r0, r5` before each failure branch; the rest matches. */
#include "sys/ProcessResult.h"
#include "shard/RomFileOpenState.h"
#include "nn/fs/ArchiveCreateFile.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

extern "C" {
void FUN_0032ca54(u32 result, ...);
void *FUN_001886bc(void);
u32 archivePathDeviceOpen(RomOpenFile *file, const u8 *path, u32 mode);
void sysFatalBreak(void);
void vcallSlot12IfValid(u32 handle);

/* Records `result` as the process result and hands it back. */
static __inline nn::Result fileRecordResult(nn::Result result)
{
    FUN_0013ebd8(result);
    return result;
}

/* Closes the state's file if it is open. */
static __inline void romFileClose(RomOpenFile *file)
{
    if (file->unk00 & ~1u) {
        if (file->unk00 & 1) {
            sysFatalBreak();
        }
        vcallSlot12IfValid(file->unk00 & ~1u);
        file->unk00 = 0;
    }
}

// Create a file of the requested size, then open it for writing.
nn::Result FUN_00317d48(RomFileOpenState *state, const void *path, u32 size)
{
    u8 normalized[496];
    nn::Result result;
    if (!pathBuildWide(static_cast<const char *>(path), reinterpret_cast<s16 *>(normalized), 1)) {
        result = 0xe0e046bc;
        FUN_0013ebd8(result);
        return result;
    }
    FUN_001886bc();
    result = FUN_00158844(reinterpret_cast<const u16 *>(normalized), size);
    FUN_0013ebd8(result);
    u32 failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_0032ca54(result, failed);
        return result;
    }
    state->file.unk0c = 0;
    state->file.unk10 = 0;
    state->file.unk04 = 0;
    state->file.unk08 = 0;
    result = archivePathDeviceOpen(&state->file, normalized, 2);
    FUN_0013ebd8(result);
    failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_0032ca54(result, failed);
        romFileClose(&state->file);
        return result;
    }
    return fileRecordResult(0);
}
}
