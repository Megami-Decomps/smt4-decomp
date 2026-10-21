#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
u32 FUN_0014f4f8(const u8 *source);
void lzDecompressBytes(const u8 *source, u8 *destination);
void FUN_0014f408(const u8 *source, u8 *destination);
void FUN_0014f2c8(const u8 *source, u8 *destination);
void *asdMemoryAllocAligned(s32 heap, s32 category, s32 flags, u32 bytes, u32 alignment, s32 clear);
void asdMemFree(void *);

// Expand LZ/Huffman/RLE texture data and release its compressed source.
u8 *aocTexExpandCompressedData(u8 *source, u32 flags, u32 alignment)
{
    u8 kind = source[0] & 0xf0;
    u8 *result = source;
    if (kind == 0x10 || kind == 0x20 || kind == 0x30) {
        u32 size = FUN_0014f4f8(source);
        if (size != 0) {
            if (flags & 1) {
                if (flags & 2) {
                    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\sys\\aocTexCtrl.cpp", 0x1ec);
                    result = static_cast<u8 *>(asdMemoryAllocAligned(0x10000, 0x100, 0, size, alignment, 0));
                } else {
                    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\sys\\aocTexCtrl.cpp", 0x1f0);
                    result = static_cast<u8 *>(asdMemoryAllocAligned(0x10000, 0x100, 0, size, alignment, 1));
                }
            } else if (flags & 2) {
                asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\sys\\aocTexCtrl.cpp", 0x1f7);
                result = static_cast<u8 *>(asdMemoryAllocAligned(0x100, 0x100, 0, size, alignment, 0));
            } else {
                asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\sys\\aocTexCtrl.cpp", 0x1fb);
                result = static_cast<u8 *>(asdMemoryAllocAligned(0x100, 0x100, 0, size, alignment, 1));
            }
            if (kind == 0x10) {
                lzDecompressBytes(source, result);
            } else if (kind == 0x20) {
                FUN_0014f408(source, result);
            } else if (kind == 0x30) {
                FUN_0014f2c8(source, result);
            }
            asdMemFree(source);
        }
    }
    return result;
}
}
