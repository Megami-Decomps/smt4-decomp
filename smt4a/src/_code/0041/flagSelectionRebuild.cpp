#include "common.h"
struct FlagSelection { s32 entries[14]; s32 count; u32 cursor; f32 progress; u32 unk44; u32 flags; };
/* Rebuilds the selected-bit list when its mask changes. */
extern "C" void flagSelectionRebuild(FlagSelection *selection, u32 flags) {
    if (selection->flags == flags) return;
    selection->count = 0;
    for (int i = 0; i < 14; ++i) selection->entries[i] = 0;
    selection->cursor = 0;
    selection->progress = 0.0f;
    selection->flags = 0;
    if (flags == 0 || (flags & 2) != 0) return;
    if ((flags & 16) != 0) {
        for (int bit = 0; bit < 14; ++bit) {
            if (bit == 2 || bit == 4) continue;
            if ((flags & (1u << bit)) != 0) { flags &= ~16u; break; }
        }
    }
    for (int bit = 0; bit < 14; ++bit) {
        if ((flags & (1u << bit)) != 0) selection->entries[selection->count++] = bit;
    }
    selection->flags = flags;
}
