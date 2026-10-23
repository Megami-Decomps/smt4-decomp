/* NON_MATCHING: handle-zero stores use STRD instead of retail's shared zero register; packed-ID scheduling and result-module comparisons differ. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

namespace {
struct ArchiveMountState {
    u64 handle;
    u8 header[0x40];
};
struct ArchiveMountOptions {
    u32 id;
    u8 unsupported;
    u8 index;
    u8 medium;
};
}
extern "C" {
void FUN_00429d58(u64 handle);
void sysFatalBreak(void);
s32 FUN_00426800(u32 *attribute, u8 *metadata, u32 kind, u64 id, u32 flags);
s32 handleRequestSubmit(ArchiveMountState *state, u32 kind, u64 id, u32 first,
                        u32 second, u32 third, void *header, u32 headerSize, u32 flags);
s32 FUN_00427360(ArchiveMountState *state);

// Open a packed archive ID, translating unavailable media errors and cleaning failed handles.
WindowStatusResult FUN_00426fe4(ArchiveMountState *state, const ArchiveMountOptions *options)
{
    if (state->handle != 0) {
        FUN_00429d58(state->handle);
        state->handle = 0;
    }
    if (options->unsupported)
        return WindowStatusResult(0xE0E13883);
    u32 packed = options->index | ((options->id & 0xFFFFF) << 8);
    s32 medium = 0;
    if (options->medium != 0) {
        if (options->medium == 1)
            medium = 2;
        else {
            sysFatalBreak();
            medium = 0;
        }
    }
    s32 encodedMedium = medium << 28;
    u64 id = 0x0004008C00000000ULL | (s64)encodedMedium | (packed & 0x0FFFFFFF);
    u8 metadata[24];
    u32 attribute;
    s32 result = FUN_00426800(&attribute, metadata, 1, id, 0);
    if ((u32)result == 0xD8A083FA)
        return WindowStatusResult(0xD881388A);
    if (nnResultIsFailure(result))
        return WindowStatusResult(result);
    result = handleRequestSubmit(state, 1, id, 0, 1, 1, state->header, sizeof(state->header), 0);
    s32 description = nnResultDescription(result);
    if (nnResultModule(result) == 17 && description >= 100 && description < 180) {
        state->handle = 0;
        return WindowStatusResult(0xD881388A);
    }
    if (nnResultIsFailure(result))
        return WindowStatusResult(result);
    result = FUN_00427360(state);
    if (!nnResultIsFailure(result))
        return WindowStatusResult(0);
    FUN_00429d58(state->handle);
    state->handle = 0;
    return WindowStatusResult(result);
}
}
