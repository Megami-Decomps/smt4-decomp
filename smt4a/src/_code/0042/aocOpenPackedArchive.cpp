/* NON_MATCHING: 103 vs 105 rows (113 diff lines); packed-ID base, switch(options->medium), description<=179 and nnResultIsSuccess improve match; remaining: saved-register allocation and packed-ID scheduling (candidate --fpu=softvfp like neighbors FUN_00426e18/aocItemAttributeLabel). */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

namespace {
struct ArchiveMountState {
    union {
        u64 handle;
        struct {
            u32 low;
            u32 high;
        } words;
    };
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
void vtableRunIfPresent(u64 handle);
void sysFatalBreak(void);
s32 FUN_00426800(u32 *attribute, u8 *metadata, u32 kind, u64 id, u32 flags);
s32 handleRequestSubmit(ArchiveMountState *state, u32 kind, u64 id, u32 first,
                        u32 second, u32 third, void *header, u32 headerSize, u32 flags);
s32 archiveReadContentHeaderPair(ArchiveMountState *state);

/* Open a packed archive ID, translating unavailable media errors and cleaning failed handles. */
WindowStatusResult aocOpenPackedArchive(ArchiveMountState *state, const ArchiveMountOptions *options)
{
    if (state->handle != 0) {
        vtableRunIfPresent(state->handle);
        state->words.low = 0;
        state->words.high = 0;
    }
    if (options->unsupported) {
        return WindowStatusResult(0xE0E13883);
    }
    u64 id = 0x0004008C00000000ULL | (options->index | ((options->id & 0xFFFFF) << 8));
    s32 medium;
    switch (options->medium) {
    case 0:
        medium = 0;
        break;
    case 1:
        medium = 2;
        break;
    default:
        sysFatalBreak();
        medium = 0;
        break;
    }
    id = (id & ~0xF0000000ULL) | (s64)(medium << 28);
    u8 metadata[24];
    u32 attribute;
    s32 result = FUN_00426800(&attribute, metadata, 1, id, 0);
    if ((u32)result == 0xD8A083FA) {
        return WindowStatusResult(0xD881388A);
    }
    if (nnResultIsFailure(result)) {
        return WindowStatusResult(result);
    }
    result = handleRequestSubmit(state, 1, id, 0, 1, 1, state->header, sizeof(state->header), 0);
    if (nnResultModule(result) == 17 && nnResultDescriptionBits(result) >= 100 && nnResultDescriptionBits(result) <= 179) {
        state->words.low = 0;
        state->words.high = 0;
        return WindowStatusResult(0xD881388A);
    }
    if (nnResultIsFailure(result)) {
        return WindowStatusResult(result);
    }
    result = archiveReadContentHeaderPair(state);
    if (!nnResultIsSuccess(result)) {
        vtableRunIfPresent(state->handle);
        state->words.low = 0;
        state->words.high = 0;
        return WindowStatusResult(result);
    }
    return WindowStatusResult(0);
}
} /* extern "C" */
