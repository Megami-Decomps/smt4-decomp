/* NON_MATCHING: retail clobbers AAPCS-preserved r4/r7-r10 without saving them and loads its mask from a shared literal outside this unit. A normal C++ function cannot use that register convention. */
#include "shard/W6_W6Match7_BoxFilter.h"

// Blur sixteen byte lanes per row with a 512-byte source/destination stride.
extern "C" void imageBoxBlur16(const u8 *source, u32 *destination, s32 rows)
{
    const u32 *row = reinterpret_cast<const u32 *>(source - 1);
    PackedBlurRow previous = packedBlurRow(row);
    do {
        row += 0x80;
        PackedBlurRow current = packedBlurRow(row);
        packedBlurStore(destination, previous, current);
        row += 0x80;
        previous = packedBlurRow(row);
        packedBlurStore(destination + 0x80, current, previous);
        destination += 0x100;
        rows -= 2;
    } while (rows != 0);
}
