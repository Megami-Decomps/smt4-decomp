#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
u32 FUN_001aeecc(const u8 *source);
u8 *asdMemoryAllocAligned(u32 alignment, u32 heap, u32 category, u32 size, u32 argument, s32 clear);
void lzDecompressBytes(const u8 *source, u8 *destination);
void FUN_001aeddc(const u8 *source, u8 *destination);
void FUN_001aec9c(const u8 *source, u8 *destination);
void asdMemFree(void *memory);

// Expand a supported Nintendo compression stream and transfer ownership from source to output.
u8 *FUN_001ba204(u8 *source, u32 flags, u32 argument)
{
    u32 kind = *source & 0xF0;
    u8 *output = source;
    if (kind == 0x10 || kind == 0x20 || kind == 0x30) {
        u32 size = FUN_001aeecc(source);
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
                lzDecompressBytes(source, output);
            } else if (kind == 0x20) {
                FUN_001aeddc(source, output);
            } else if (kind == 0x30) {
                FUN_001aec9c(source, output);
            }
            asdMemFree(source);
        }
    }
    return output;
}
}
