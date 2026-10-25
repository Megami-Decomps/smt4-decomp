#include "common.h"
#include "shard/W5_W5Match7_EntrySort.h"

namespace {
struct InterpolationEntry { f32 base; f32 unused; f32 step; f32 tail; };
}
extern "C" {
extern InterpolationEntry DAT_00407ed0[];

/* Interpolates within the selected table entry using the packed low-byte fraction. */
f32 mathInterpolatePackedTable(u32 packed)
{
    f32 fraction = (f32)(packed & 0xff) / 256.0f;
    InterpolationEntry *entry = &DAT_00407ed0[packed >> 8];
    return entry->base + entry->step * fraction;
}
}
