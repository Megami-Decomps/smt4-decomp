#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMSpr.h"

extern "C" {

s32 lzGetAdvertisedSize(u8 *data);
void lzDecompressBytes(const u8 *src, u8 *dst);
void FUN_0014f408(u8 *src, u8 *dst);
void FUN_0014f2c8(u8 *src, u8 *dst);
void *asdMemoryAllocAligned(int, int, int, s32 size, u32 align, int);
void asdMemFree(void *block);
extern const char DAT_00409220[]; /* AsdTMSpr.cpp: __FILE__ */

/* Decompresses sprite data (format 0x10, 0x20 or 0x30 in the high nibble of its first byte) into
 * a newly allocated buffer and frees the compressed data. Heap choice comes from bit 0 of
 * `flags`, bit 1 selects the allocator's last argument. Returns the input unchanged for other formats. */
u8 *asdTMSprDecompress(u8 *data, u32 flags, u32 align)
{
    u8 format = *data & 0xf0;
    u8 *out = data;
    s32 size;

    if ((format == 0x10 || format == 0x20 || format == 0x30) && (size = lzGetAdvertisedSize(data)) != 0) {
        if (flags & 1) {
            if (flags & 2) {
                asdDebugTrace(DAT_00409220, 200);
                out = (u8 *)asdMemoryAllocAligned(0x10000, 0x100, 0, size, align, 0);
            } else {
                asdDebugTrace(DAT_00409220, 204);
                out = (u8 *)asdMemoryAllocAligned(0x10000, 0x100, 0, size, align, 1);
            }
        } else if (flags & 2) {
            asdDebugTrace(DAT_00409220, 211);
            out = (u8 *)asdMemoryAllocAligned(0x100, 0x100, 0, size, align, 0);
        } else {
            asdDebugTrace(DAT_00409220, 215);
            out = (u8 *)asdMemoryAllocAligned(0x100, 0x100, 0, size, align, 1);
        }
        if (format == 0x10) {
            lzDecompressBytes(data, out);
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
