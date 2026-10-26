/* NON_MATCHING: result/sign-test register allocation and zero-value lifetime differ from retail. */
#include "sys/ProcessResult.h"
#include "sys/FilePaths.h"
#include "shard/RomFileOpenState.h"
#include "nn/fs/ArchiveCreateFile.h"

extern "C" {
void FUN_0032ca54(u32 result);
void *FUN_001886bc(void);
u32 FUN_001883b0(RomOpenFile *file, const u8 *path, u32 mode);
void sysFatalBreak(void);
void vcallSlot12IfValid(u32 handle);

// Create a file of the requested size, then open it for writing.
u32 FUN_00317d48(RomFileOpenState *state, const void *path, u32 size)
{
    u8 normalized[496];
    if (!pathBuildWide(static_cast<const char *>(path), reinterpret_cast<s16 *>(normalized), 1)) {
        u32 result = 0xe0e046bc;
        FUN_0013ebd8(result);
        return result;
    }
    FUN_001886bc();
    u32 result = FUN_00158844(reinterpret_cast<const u16 *>(normalized), size);
    FUN_0013ebd8(result);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_0032ca54(result);
        return result;
    }
    state->file.unk0c = 0;
    state->file.unk10 = 0;
    state->file.unk04 = 0;
    state->file.unk08 = 0;
    result = FUN_001883b0(&state->file, normalized, 2);
    FUN_0013ebd8(result);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_0032ca54(result);
        if (state->file.unk00 & ~1u) {
            if (state->file.unk00 & 1) {
                sysFatalBreak();
            }
            vcallSlot12IfValid(state->file.unk00 & ~1u);
            state->file.unk00 = 0;
        }
        return result;
    }
    FUN_0013ebd8(0);
    return 0;
}
}
