#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
u32 nn_cx_GetUncompressedSize(const u8 *source);
u8 *asdMemoryAllocAligned(u32 alignment, u32 heap, u32 category, u32 size, u32 argument, s32 clear);
void nn_cx_UncompressLZ(const u8 *source, u8 *destination);
void nn_cx_UncompressHuffman(const u8 *source, u8 *destination);
void nn_cx_UncompressRL(const u8 *source, u8 *destination);
void asdMemFree(void *memory);

// Expand a supported Nintendo compression stream and transfer ownership from source to output.
u8 *aocTexExpandCompressedData(u8 *source, u32 flags, u32 argument)
{
    u32 kind = *source & 0xF0;
    u8 *output = source;
    if (kind == 0x10 || kind == 0x20 || kind == 0x30) {
        u32 size = nn_cx_GetUncompressedSize(source);
        if (size != 0) {
            if (flags & 1) {
                if (flags & 2) {
                    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\sys\\aocTexCtrl.cpp", 492);
                    output = asdMemoryAllocAligned(0x10000, 0x100, 0, size, argument, 0);
                } else {
                    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\sys\\aocTexCtrl.cpp", 496);
                    output = asdMemoryAllocAligned(0x10000, 0x100, 0, size, argument, 1);
                }
            } else {
                if (flags & 2) {
                    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\sys\\aocTexCtrl.cpp", 503);
                    output = asdMemoryAllocAligned(0x100, 0x100, 0, size, argument, 0);
                } else {
                    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\addon\\sys\\aocTexCtrl.cpp", 507);
                    output = asdMemoryAllocAligned(0x100, 0x100, 0, size, argument, 1);
                }
            }
            if (kind == 0x10) {
                nn_cx_UncompressLZ(source, output);
            } else if (kind == 0x20) {
                nn_cx_UncompressHuffman(source, output);
            } else if (kind == 0x30) {
                nn_cx_UncompressRL(source, output);
            }
            asdMemFree(source);
        }
    }
    return output;
}
}
