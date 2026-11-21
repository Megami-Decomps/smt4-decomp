#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMSpr.h"

extern "C" {

s32 nn_cx_GetUncompressedSize(u8 *data);
void nn_cx_UncompressLZ(const u8 *src, u8 *dst);
void nn_cx_UncompressHuffman(u8 *src, u8 *dst);
void nn_cx_UncompressRL(u8 *src, u8 *dst);
void *asdMemoryAllocAligned(int, int, int, s32 size, u32 align, int);
void asdMemFree(void *block);
extern const char g_asdTMSprSourceFileName[]; /* AsdTMSpr.cpp: __FILE__ */

/* Decompresses sprite data (format 0x10, 0x20 or 0x30 in the high nibble of its first byte) into
 * a newly allocated buffer and frees the compressed data. Heap choice comes from bit 0 of
 * `flags`, bit 1 selects the allocator's last argument. Returns the input unchanged for other formats. */
u8 *asdTMSprDecompress(u8 *data, u32 flags, u32 align)
{
    u8 format = *data & 0xf0;
    u8 *out = data;
    s32 size;

    if ((format == 0x10 || format == 0x20 || format == 0x30) && (size = nn_cx_GetUncompressedSize(data)) != 0) {
        if (flags & 1) {
            if (flags & 2) {
                asdDebugTrace(g_asdTMSprSourceFileName, 211);
                out = (u8 *)asdMemoryAllocAligned(0x10000, 0x100, 0, size, align, 0);
            } else {
                asdDebugTrace(g_asdTMSprSourceFileName, 215);
                out = (u8 *)asdMemoryAllocAligned(0x10000, 0x100, 0, size, align, 1);
            }
        } else if (flags & 2) {
            asdDebugTrace(g_asdTMSprSourceFileName, 222);
            out = (u8 *)asdMemoryAllocAligned(0x100, 0x100, 0, size, align, 0);
        } else {
            asdDebugTrace(g_asdTMSprSourceFileName, 226);
            out = (u8 *)asdMemoryAllocAligned(0x100, 0x100, 0, size, align, 1);
        }
        if (format == 0x10) {
            nn_cx_UncompressLZ(data, out);
        } else if (format == 0x20) {
            nn_cx_UncompressHuffman(data, out);
        } else if (format == 0x30) {
            nn_cx_UncompressRL(data, out);
        }
        asdMemFree(data);
    }
    return out;
}

} /* extern "C" */
