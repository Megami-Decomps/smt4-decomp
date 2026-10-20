/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 100 vs built 87 rows, 84 diff lines. */
#include "common.h"

extern "C" {

s32 FUN_0014f4f8(u8 *data);
void FUN_0014f16c(u8 *src, u8 *dst);
void FUN_0014f408(u8 *src, u8 *dst);
void FUN_0014f2c8(u8 *src, u8 *dst);
void *asdMemoryAllocAligned(int, int, int, s32 size, u32 align, int);
void asdMemFree(void *block);

/* Decompresses sprite data (format 0x10, 0x20 or 0x30 in the high nibble of its first byte) into
 * a newly allocated buffer and frees the compressed data. Heap choice comes from bit 0 of
 * `flags`, bit 1 selects the allocator's last argument. Returns the input unchanged for other formats. */
u8 *asdTMSprDecompress(u8 *data, u32 flags, u32 align)
{
    u8 format = *data & 0xf0;
    u8 *out = data;
    s32 size;

    if ((format == 0x10 || format == 0x20 || format == 0x30) && (size = FUN_0014f4f8(data)) != 0) {
        if (flags & 1) {
            if (flags & 2) {
                out = (u8 *)asdMemoryAllocAligned(0x10000, 0x100, 0, size, align, 0);
            } else {
                out = (u8 *)asdMemoryAllocAligned(0x10000, 0x100, 0, size, align, 1);
            }
        } else if (flags & 2) {
            out = (u8 *)asdMemoryAllocAligned(0x100, 0x100, 0, size, align, 0);
        } else {
            out = (u8 *)asdMemoryAllocAligned(0x100, 0x100, 0, size, align, 1);
        }
        if (format == 0x10) {
            FUN_0014f16c(data, out);
        } else if (format == 0x20) {
            FUN_0014f408(data, out);
        } else if (format == 0x30) {
            FUN_0014f2c8(data, out);
        }
        asdMemFree(data);
    }
    return out;
}

} /* extern "C" */
